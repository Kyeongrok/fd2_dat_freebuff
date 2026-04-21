/*
 * func-name: sub_31BDF
 * func-address: 0x31bdf
 * callers: 0x31529
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x26996, 0x3702f, 0x4e381
 */

__int16 __usercall sub_31BDF@<ax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>,
        int a6,
        int a7)
{
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax

  sub_3702F(a1, a2, a4, a3, 44);
  LOWORD(v7) = sub_4E381();
  sub_1956B(v7, a2, a4, a3, a6);
  LOWORD(v8) = sub_4E381();
  sub_15F84(a5, v8, a2, a3, a4, arg0_0, a7, 693524, 320, 205, 76, 74, 19, 1);
  v10 = sub_16559(v9, a2, a4, a3, 0);
  sub_16C57(v10, a2, a4, a3, 0);
  sub_26996(v11, a2, a4, a3);
  return sub_4E381();
}
