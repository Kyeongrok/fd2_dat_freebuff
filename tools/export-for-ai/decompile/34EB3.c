/*
 * func-name: sub_34EB3
 * func-address: 0x34eb3
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x135dd, 0x3702f, 0x3790a
 */

void __fastcall sub_34EB3(__int32 a1, int a2, int a3, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax

  sub_3702F(a1, a2, a3, a4, 12);
  sub_10B4E(*(unsigned __int8 *)(dword_53AD5 + 16), a2, a3, a4, *(unsigned __int8 *)(dword_53AD5 + 16));
  v4 = dword_53AD5;
  ++*(_BYTE *)(dword_53AD5 + 16);
  sub_135DD(v4, a2, a3, a4, 0, 0);
  v5 = j___delay(200);
  sub_135DD(v5, a2, a3, a4, 12, 0);
  v6 = j___delay(200);
  sub_135DD(v6, a2, a3, a4, 12, 11);
  v7 = j___delay(200);
  sub_135DD(v7, a2, a3, a4, 0, 11);
  JUMPOUT(0x35727);
}
