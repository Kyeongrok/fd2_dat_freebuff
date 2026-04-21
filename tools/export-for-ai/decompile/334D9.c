/*
 * func-name: sub_334D9
 * func-address: 0x334d9
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x12d7b, 0x135dd, 0x1366a, 0x15f84, 0x205da, 0x33499, 0x3702f
 */

void __usercall sub_334D9(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int arg4; // eax
  int arg4_1; // ebx
  __int32 v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  sub_205DA(v5, a2, a4, a3);
  arg4 = sub_33499(v6, a2, a4, a3, 12);
  LOWORD(arg4) = 3 * ((unsigned __int8)arg4 ^ 1);
  arg4_1 = (unsigned __int8)arg4;
  sub_15F84(a5, arg4, a2, a3, (unsigned __int8)arg4, arg0_0, (unsigned __int8)arg4, 655360, 320, 205, 76, 74, 19, 1);
  sub_135DD(v9, a2, arg4_1, a3, 24, 17);
  sub_15F84(a5, arg4_1 + 1, a2, a3, arg4_1, arg0_0, arg4_1 + 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v11 = sub_1366A(v10, a2, arg4_1, a3, 48);
  arg4_1 += 2;
  sub_15F84(a5, v11, a2, a3, arg4_1, arg0_0, arg4_1, 655360, 320, 205, 76, 74, 19, 1);
  sub_12D7B(v12, a2, arg4_1, a3, 0);
}
