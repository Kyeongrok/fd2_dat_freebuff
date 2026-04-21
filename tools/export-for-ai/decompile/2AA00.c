/*
 * func-name: sub_2AA00
 * func-address: 0x2aa00
 * callers: 0x29daa
 * callees: 0x11019, 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x197e5, 0x19953, 0x1b8e7, 0x25977, 0x26996, 0x2a857, 0x2ac7d, 0x2ae0e, 0x2aedb, 0x2fb2c, 0x3702f, 0x37324, 0x3759c, 0x3776e, 0x4e381, 0x4e7dd
 */

int __usercall sub_2AA00@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int n5@<ebx>, int a5@<edi>)
{
  int n3; // esi
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int result; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  __int32 v16; // esi
  int v17; // esi
  __int32 v18; // eax
  __int32 n5_1; // eax
  __int32 v20; // eax
  int v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  int v24; // ebp
  int n16; // esi
  _BYTE v26[32]; // [esp+0h] [ebp-54h] BYREF
  _BYTE v27[32]; // [esp+20h] [ebp-34h] BYREF
  int n50; // [esp+40h] [ebp-14h]
  int v29; // [esp+48h] [ebp-Ch]
  int n5_2; // [esp+50h] [ebp-4h]

  sub_3702F(a1, a2, n5, a3, 124);
  n5_2 = n5;
  v29 = a5;
  while ( 1 )
  {
    n3 = sub_2AE0E(v27, v26);
    if ( !n3 )
      break;
    v11 = sub_1956B((unsigned __int8)byte_5238B, a2, n5, a3, (unsigned __int8)byte_5238B);
    sub_15F84((unsigned __int8 *)a5, v11, a2, a3, n5, arg0, 592, 693452, 320, 205, 76, 74, 19, 1);
    v13 = sub_16559(v12, a2, n5, a3, 0);
    sub_16C57(v13, a2, n5, a3, 1);
    sub_26996(v14, a2, n5, a3);
    sub_4E381();
    sub_2A857((__int32)v27, a2, n5, a3, n3, (int)v27, (int)v26);
    v16 = v15;
    result = sub_26996(v15, a2, n5, a3);
    if ( v16 == -1 )
      return result;
    sub_1956B((unsigned __int8)byte_5238B, a2, n5, a3, (unsigned __int8)byte_5238B);
    a5 = (unsigned __int8)v27[n3_3];
    n50 = (unsigned __int8)v26[n3_3];
    v17 = 80 * a5 + n8_0;
    dword_53AD9 = *(unsigned __int8 *)(v17 + 7) + 1;
    sub_15F84((unsigned __int8 *)a5, dword_53AD9, a2, a3, n5, arg0, 594, 693452, 320, 205, 76, 74, 19, 1);
    LOWORD(v18) = sub_4E381();
    sub_19953(v18, a2, n5, a3);
    n5 = n5_1;
    sub_197E5(n5_1, a2, n5_1, a3);
    v21 = sub_26996(v20, a2, n5, a3);
    if ( n5 != -1 && !n3_3 )
    {
      if ( n50 == 52 )
      {
        v22 = sub_2AEDB(a5, 90);
      }
      else
      {
        if ( n50 < 50 )
          goto LABEL_12;
        v22 = sub_2AEDB(a5, (unsigned __int8)byte_523D5[*(unsigned __int8 *)(v17 + 7)]);
      }
      v21 = sub_1B8E7(v22, a2, n5, a3, a5, v22);
LABEL_12:
      sub_25977(v21, a2, n5, a3, 16, 1);
      v23 = sub_2FB2C(a5, n50);
      sub_25977(v23, a2, n5, a3, 11, 0);
      *(_BYTE *)(v17 + 32) = *(_BYTE *)sub_4E7DD(n50);
      *(_BYTE *)(v17 + 7) = n50;
      if ( dword_53A61 )
        free(dword_53A61);
      v24 = fopen((int)aFdiconB24_4, (int)aRb_8);// "rb"
      dword_53BDF = 0;
      for ( n16 = 0; n16 < n16_1; ++n16 )
      {
        n5 = n5_0;
        sub_11019(
          *(unsigned __int8 *)(n5_0 + 80 * n16 + 7),
          a2,
          n5_0,
          a3,
          *(unsigned __int8 *)(n5_0 + 80 * n16 + 7),
          v24);
      }
      fclose(v24);
      sub_2AC7D(a5);
      sub_4E381();
    }
  }
  v6 = sub_1956B((unsigned __int8)byte_5238B, a2, n5, a3, (unsigned __int8)byte_5238B);
  sub_15F84((unsigned __int8 *)a5, v6, a2, a3, n5, arg0, 591, 693452, 320, 205, 76, 74, 19, 1);
  v8 = sub_16559(v7, a2, n5, a3, 0);
  sub_16C57(v8, a2, n5, a3, 0);
  return sub_26996(v9, a2, n5, a3);
}
