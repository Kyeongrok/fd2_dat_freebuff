/*
 * func-name: sub_28F65
 * func-address: 0x28f65
 * callers: 0x279bc, 0x29daa
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x1b722, 0x1b750, 0x1b8a6, 0x1b8e7, 0x1bb8c, 0x26996, 0x275e6, 0x27738, 0x27d33, 0x3702f
 */

void __usercall sub_28F65(__int32 a1@<eax>, int n8@<edx>, int a3@<ecx>, int n6@<ebx>, int n3@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // ebx
  int v14; // esi
  int n3_1; // esi
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  int v21; // eax
  int n8_1; // eax
  __int32 v23; // eax
  int v24; // eax
  int v25; // eax
  _BYTE n3_[8]; // [esp+0h] [ebp-14h] BYREF
  int n3_2; // [esp+8h] [ebp-Ch]
  int n6_1; // [esp+10h] [ebp-4h]

  sub_3702F(a1, n8, n6, a3, 60);
  n6_1 = n6;
  n3_2 = n3;
  while ( 1 )
  {
    v9 = sub_1956B((unsigned __int8)byte_52387[n5], n8, n6, a3, (unsigned __int8)byte_52387[n5]);
    sub_15F84((unsigned __int8 *)n3, v9, n8, a3, n6, arg0, 512, 693452, 320, 205, 76, 74, 19, 1);
    v11 = sub_16559(v10, n8, n6, a3, 0);
    sub_16C57(v11, n8, n6, a3, 1);
    sub_26996(v12, n8, n6, a3);
    n3_5 = n16_1;
    v13 = sub_27D33(n16_1, n8, n6, a3);
    sub_26996(v13, n8, v13, a3);
    if ( v13 == -1 )
      JUMPOUT(0x29619);
    n3 = n3_3;
    v14 = 80 * n3_3 + n8_0;
    n6 = 0;
    for ( n8 = 0; n8 < 8; ++n8 )
    {
      if ( *(char *)(v14 + 2 * n8 + 10) >= 0 )
        n3_[n6++] = *(_BYTE *)(v14 + 2 * n8 + 11);
    }
    if ( !n6 )
      break;
    n3_3 = 0;
    n3_6 = 0;
    sub_27738((__int32)n3_, n8, n6, a3, n6, (int)n3_, 1u);
    n3_5 = n6;
    v8 = sub_275E6((__int32)n3_, n8, n6, a3, n6, (int)n3_, 1u);
    if ( v8 == -1 )
    {
LABEL_9:
      sub_26996(v8, n8, n6, a3);
    }
    else
    {
      n3_1 = n3_3;
      sub_26996(v8, n8, n6, a3);
      v16 = sub_1956B((unsigned __int8)byte_52387[n5], n8, n6, a3, (unsigned __int8)byte_52387[n5]);
      sub_15F84((unsigned __int8 *)n3, v16, n8, a3, n6, arg0, 510, 693452, 320, 205, 76, 74, 19, 1);
      v18 = sub_16559(v17, n8, n6, a3, 0);
      sub_16C57(v18, n8, n6, a3, 1);
      v20 = sub_26996(v19, n8, n6, a3);
      n6 = sub_27D33(v20, n8, n6, a3);
      v21 = sub_26996(n6, n8, n6, a3);
      if ( n6 != -1 )
      {
        n8_1 = sub_1B8A6(v21, n8, n6, a3, n3_3);
        if ( n8_1 == 8 )
        {
          n8 = n8_0;
          dword_53AD9 = *(unsigned __int8 *)(n8_0 + 80 * n3_3 + 8) + 1;
          sub_1956B((unsigned __int8)byte_52387[n5], n8_0, n6, a3, (unsigned __int8)byte_52387[n5]);
          sub_15F84(
            (unsigned __int8 *)n3,
            word_5238D[n5],
            n8,
            a3,
            n6,
            arg0,
            word_5238D[n5],
            693452,
            320,
            205,
            76,
            74,
            19,
            1);
          v7 = sub_16559(v23, n8, n6, a3, 0);
          goto LABEL_8;
        }
        n6 = sub_1B722(n8_1, n8, n6, a3, n3, n3_1);
        v24 = sub_1B8E7(n6, n8, n6, a3, n3, n3_1);
        v25 = sub_1BB8C(v24, n8, n6, a3, n3_3, n6);
        sub_1B750(v25, n8, n6, a3, n3);
      }
    }
  }
  n8 = 80 * n3;
  dword_53AD9 = *(unsigned __int8 *)(80 * n3 + n8_0 + 8) + 1;
  v5 = sub_1956B((unsigned __int8)byte_52387[n5], 80 * n3, 0, a3, (unsigned __int8)byte_52387[n5]);
  sub_15F84((unsigned __int8 *)n3, v5, 80 * n3, a3, 0, arg0, 511, 693452, 320, 205, 76, 74, 19, 1);
  v7 = sub_16559(v6, 80 * n3, 0, a3, 0);
LABEL_8:
  sub_16C57(v7, n8, n6, a3, 1);
  goto LABEL_9;
}
