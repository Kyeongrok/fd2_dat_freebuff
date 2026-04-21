/*
 * func-name: sub_338C4
 * func-address: 0x338c4
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x135dd, 0x15f84, 0x205da, 0x3702f, 0x3790a
 */

void __usercall sub_338C4(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 40);
  sub_205DA(v5, a2, a4, a3);
  sub_15F84(a5, v6, a2, a3, a4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  v8 = sub_10B4E(v7, a2, a4, a3, 1);
  sub_135DD(v8, a2, a4, a3, 0, 4);
  v9 = j___delay(400);
  sub_135DD(v9, a2, a4, a3, 0, 22);
  v10 = j___delay(400);
  sub_135DD(v10, a2, a4, a3, 26, 24);
  v11 = j___delay(400);
  sub_135DD(v11, a2, a4, a3, 26, 2);
  j___delay(400);
  JUMPOUT(0x331EA);
}
