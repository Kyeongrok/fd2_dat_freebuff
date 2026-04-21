/*
 * func-name: sub_2872B
 * func-address: 0x2872b
 * callers: 0x279bc
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x197e5, 0x19953, 0x1b750, 0x1b8a6, 0x1bb8c, 0x1c142, 0x1c1c3, 0x26996, 0x26b91, 0x275e6, 0x27738, 0x27d33, 0x27f4a, 0x28b41, 0x3702f, 0x4e8bc
 */

int __usercall sub_2872B@<eax>(__int64 n6_2@<edx:eax>, int a2@<ecx>, int n6@<ebx>, int n3, _BYTE *a5)
{
  int n3_1; // edi
  int n3_2; // esi
  int v7; // ebx
  int result; // eax
  int n6_5; // esi
  _BYTE v10[32]; // [esp+0h] [ebp-68h] BYREF
  _DWORD v11[3]; // [esp+20h] [ebp-48h]
  _DWORD v12[3]; // [esp+2Ch] [ebp-3Ch]
  _DWORD v13[3]; // [esp+38h] [ebp-30h]
  _DWORD v14[3]; // [esp+44h] [ebp-24h] BYREF
  int n6_4; // [esp+50h] [ebp-18h]
  int n6_1; // [esp+54h] [ebp-14h]
  int n6_3; // [esp+64h] [ebp-4h]

  sub_3702F(n6_2, SHIDWORD(n6_2), n6, a2, 144);
  n6_3 = n6;
  v12[0] = unk_52428;
  v12[1] = unk_5242C;
  v12[2] = unk_52430;
  v14[0] = unk_52434;
  v14[1] = unk_52438;
  v14[2] = unk_5243C;
  v11[0] = unk_52440;
  v11[1] = unk_52444;
  v11[2] = unk_52448;
  v13[0] = unk_5244C;
  v13[1] = unk_52450;
  v13[2] = unk_52454;
  n3_1 = (int)v14;
  while ( 1 )
  {
    n3_3 = n3_7;
    n3_6 = n3_8;
    sub_27738(n3_8, SHIDWORD(n6_2), n6, a2, n3, (int)a5, 0);
    v7 = sub_275E6(n6_2, SHIDWORD(n6_2), n6, a2, n3, (int)a5, 0);
    n3_7 = n3_3;
    n3_8 = n3_6;
    result = sub_26996(n3_6, SHIDWORD(n6_2), v7, a2);
    if ( v7 == -1 )
      return result;
    dword_53AD9 = (unsigned __int8)a5[n3_7] + 181;
    n6 = (int)sub_4E8BC((unsigned __int8)a5[n3_7]);
    arg4 = *(unsigned __int16 *)(n6 + 19);
    n3_2 = 0;
    for ( n6_1 = 0; n6_1 < n16_1; ++n6_1 )
    {
      if ( *(unsigned __int8 *)n6 < 0x20u
        && sub_1C1C3((unsigned __int8)a5[n3_7], SHIDWORD(n6_2), n6, a2, n6_1, (unsigned __int8)a5[n3_7]) == 1
        || *(unsigned __int8 *)n6 >= 0x20u )
      {
        v10[n3_2++] = n6_1;
      }
    }
    if ( *(unsigned __int8 *)n6 < 0x20u && !n3_2 )
    {
      sub_1956B((unsigned __int8)byte_52387[n5], SHIDWORD(n6_2), n6, a2, (unsigned __int8)byte_52387[n5]);
      sub_15F84(
        (unsigned __int8 *)n3_1,
        *((__int16 *)v11 + n5),
        SHIDWORD(n6_2),
        a2,
        n6,
        arg0,
        *((__int16 *)v11 + n5),
        693452,
        320,
        205,
        76,
        74,
        19,
        1);
      LODWORD(n6_2) = sub_16559(n6_2, SHIDWORD(n6_2), n6, a2, 0);
LABEL_11:
      sub_16C57(n6_2, SHIDWORD(n6_2), n6, a2, 1);
      goto LABEL_12;
    }
    n3_1 = n3_5;
    n3_5 = n3_2;
    dword_53F62 = (int)v10;
    sub_1956B((unsigned __int8)byte_52387[n5], SHIDWORD(n6_2), n6, a2, (unsigned __int8)byte_52387[n5]);
    sub_15F84(
      (unsigned __int8 *)n3_1,
      *((__int16 *)v12 + n5),
      SHIDWORD(n6_2),
      a2,
      n6,
      arg0,
      *((__int16 *)v12 + n5),
      693452,
      320,
      205,
      76,
      74,
      19,
      1);
    LODWORD(n6_2) = sub_16559(n6_2, SHIDWORD(n6_2), n6, a2, 0);
    sub_19953(n6_2, SHIDWORD(n6_2), n6, a2);
    n6_4 = n6_2;
    sub_197E5(n6_2, SHIDWORD(n6_2), n6, a2);
    if ( n6_4 == -1 || n3_3 == 1 )
    {
LABEL_12:
      sub_26996(n6_2, SHIDWORD(n6_2), n6, a2);
    }
    else
    {
      if ( n6_6 < arg4 )
      {
        sub_15F84(
          (unsigned __int8 *)n3_1,
          *((__int16 *)v14 + n5),
          SHIDWORD(n6_2),
          a2,
          n6,
          arg0,
          *((__int16 *)v14 + n5),
          705612,
          320,
          205,
          76,
          74,
          19,
          1);
        LODWORD(n6_2) = sub_16559(n6_2, SHIDWORD(n6_2), n6, a2, 0);
        goto LABEL_11;
      }
      sub_26996(n6_6, SHIDWORD(n6_2), n6, a2);
      if ( *(unsigned __int8 *)n6 >= 0x20u )
      {
        n3_5 = n16_1;
        LODWORD(n6_2) = sub_27D33(n16_1, SHIDWORD(n6_2), n6, a2);
      }
      else
      {
        sub_27F4A((__int32)v10, SHIDWORD(n6_2), n6, a2, n3_2, (int)v10, (unsigned __int8)a5[n3_7]);
      }
      n6_5 = n6_2;
      n3_5 = n3_1;
      sub_26996(n6_2, SHIDWORD(n6_2), n6, a2);
      if ( n6_5 == 1 )
      {
        if ( sub_1B8A6((unsigned __int8)v10[n3_3], SHIDWORD(n6_2), n6, a2, (unsigned __int8)v10[n3_3]) == 8 )
        {
          n6 = 80 * (unsigned __int8)v10[n3_3];
          dword_53AD9 = *(unsigned __int8 *)(n6 + dword_53A45 + 7) + 1;
          sub_1956B((unsigned __int8)byte_52387[n5], SHIDWORD(n6_2), n6, a2, (unsigned __int8)byte_52387[n5]);
          sub_15F84(
            (unsigned __int8 *)n3_1,
            word_5238D[n5],
            SHIDWORD(n6_2),
            a2,
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
          LODWORD(n6_2) = sub_16559(n6_2, SHIDWORD(n6_2), n6, a2, 0);
          sub_16C57(n6_2, SHIDWORD(n6_2), n6, a2, 1);
          goto LABEL_12;
        }
        sub_1BB8C((unsigned __int8)v10[n3_3], SHIDWORD(n6_2), n6, a2, (unsigned __int8)v10[n3_3], a5[n3_7]);
        if ( *(unsigned __int8 *)n6 < 0x20u )
        {
          sub_1956B((unsigned __int8)byte_52387[n5], SHIDWORD(n6_2), n6, a2, (unsigned __int8)byte_52387[n5]);
          sub_15F84(
            (unsigned __int8 *)n3_1,
            *((__int16 *)v13 + n5),
            SHIDWORD(n6_2),
            a2,
            n6,
            arg0,
            *((__int16 *)v13 + n5),
            693452,
            320,
            205,
            76,
            74,
            19,
            1);
          LODWORD(n6_2) = sub_16559(n6_2, SHIDWORD(n6_2), n6, a2, 0);
          n3_1 = (unsigned __int8)v10[n3_3];
          sub_19953(n6_2, SHIDWORD(n6_2), n6, a2);
          n6 = n6_2;
          sub_197E5(n6_2, SHIDWORD(n6_2), n6_2, a2);
          if ( n6 != -1 && !n3_3 )
          {
            LODWORD(n6_2) = sub_1B8A6(n6_2, SHIDWORD(n6_2), n6, a2, n3_1);
            LODWORD(n6_2) = sub_1C142(n6_2 - 1, SHIDWORD(n6_2), n6, a2, n3_1, n6_2 - 1);
            sub_1B750(n6_2, SHIDWORD(n6_2), n6, a2, n3_1);
          }
          sub_26996(n6_2, SHIDWORD(n6_2), n6, a2);
        }
        n6_2 = sub_28B41();
        sub_26B91(n6_2, SHIDWORD(n6_2), n6, a2, arg4);
      }
    }
  }
}
