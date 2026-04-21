/*
 * func-name: sub_35B78
 * func-address: 0x35b78
 * callers: 0x33c9d, 0x33dba, 0x35638, 0x35c1d, 0x35c40, 0x35d1e, 0x35d9e, 0x35e5b, 0x35f48, 0x35f88
 * callees: 0x10b4e, 0x11cac, 0x11df2, 0x135dd, 0x3702f, 0x3790a
 */

void __fastcall sub_35B78(__int32 a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  int v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax

  v7 = sub_3702F(a1, a2, a3, a4, 16);
  sub_135DD(v7, a2, a3, a4, a5, a6);
  sub_10B4E(a7, a2, a3, a4, a7);
  v8 = j___delay(300);
  sub_11DF2(v8, a2, a3, a4, 0, 255, 255);
  v9 = j___delay(200);
  sub_11DF2(v9, a2, a3, a4, 0, 255, 0);
  sub_11CAC(v10, a2, a3, a4, 0);
  JUMPOUT(0x35722);
}
