/*
 * func-name: sub_28CBD
 * func-address: 0x28cbd
 * callers: 0x279bc
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x197e5, 0x19953, 0x1b722, 0x1b750, 0x1b8e7, 0x26996, 0x26a7a, 0x275e6, 0x27738, 0x27d33, 0x28b41, 0x3702f, 0x4e8bc
 */

int __fastcall sub_28CBD(__int32 a1, int n8, int n6, int a4)
{
  __int32 v4; // eax
  int v5; // eax
  __int32 v6; // eax
  int v7; // ebx
  int result; // eax
  int n3; // edi
  int v10; // esi
  int n3_1; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 n6_1; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD v22[3]; // [esp+0h] [ebp-2Ch]
  _DWORD v23[3]; // [esp+Ch] [ebp-20h]
  _BYTE n3_[16]; // [esp+18h] [ebp-14h] BYREF
  int n6_2; // [esp+28h] [ebp-4h]

  sub_3702F(a1, n8, n6, a4, 84);
  n6_2 = n6;
  v22[0] = unk_52458;
  v22[1] = unk_5245C;
  v22[2] = unk_52460;
  v23[0] = unk_52464;
  v23[1] = unk_52468;
  v23[2] = unk_5246C;
  while ( 1 )
  {
    n3_5 = n16_1;
    v7 = sub_27D33(n16_1, n8, n6, a4);
    result = sub_26996(v7, n8, v7, a4);
    if ( v7 == -1 )
      return result;
    n3 = n3_3;
    v10 = 80 * n3_3 + n8_0;
    n6 = 0;
    for ( n8 = 0; n8 < 8; ++n8 )
    {
      if ( *(char *)(v10 + 2 * n8 + 10) >= 0 )
        n3_[n6++] = *(_BYTE *)(v10 + 2 * n8 + 11);
    }
    if ( !n6 )
    {
      n8 = n8_0;
      dword_53AD9 = *(unsigned __int8 *)(n8_0 + 80 * n3 + 7) + 1;
      sub_1956B((unsigned __int8)byte_52387[n5], n8_0, 0, a4, (unsigned __int8)byte_52387[n5]);
      sub_15F84(
        (unsigned __int8 *)n3,
        *((__int16 *)v23 + n5),
        n8,
        a4,
        0,
        arg0,
        *((__int16 *)v23 + n5),
        693452,
        320,
        205,
        76,
        74,
        19,
        1);
      v5 = sub_16559(v4, n8, 0, a4, 0);
      sub_16C57(v5, n8, 0, a4, 1);
      goto LABEL_8;
    }
    n3_3 = 0;
    n3_6 = 0;
    sub_27738((__int32)n3_, n8, n6, a4, n6, (int)n3_, 1u);
    n3_5 = n6;
    v6 = sub_275E6((__int32)n3_, n8, n6, a4, n6, (int)n3_, 1u);
    if ( v6 == -1 )
      goto LABEL_8;
    n3_1 = n3_3;
    v12 = sub_26996(v6, n8, n6, a4);
    v13 = sub_1B722(v12, n8, n6, a4, n3, n3_3);
    dword_53AD9 = v13 + 181;
    v14 = 3 * *(unsigned __int16 *)(sub_4E8BC(v13) + 19);
    n8 = 4 * (v14 >> 31);
    arg4 = (v14 - (__CFSHL__(v14 >> 31, 2) + n8)) >> 2;
    sub_1956B((unsigned __int8)byte_52387[n5], n8, n6, a4, (unsigned __int8)byte_52387[n5]);
    sub_15F84(
      (unsigned __int8 *)n3,
      *((__int16 *)v22 + n5),
      n8,
      a4,
      n6,
      arg0,
      *((__int16 *)v22 + n5),
      693452,
      320,
      205,
      76,
      74,
      19,
      1);
    v16 = sub_16559(v15, n8, n6, a4, 0);
    sub_19953(v16, n8, n6, a4);
    n6 = n6_1;
    sub_197E5(n6_1, n8, n6_1, a4);
    if ( n6 == -1 || n3_3 == 1 )
    {
LABEL_8:
      sub_26996(v6, n8, n6, a4);
    }
    else
    {
      v18 = sub_26996(v6, n8, n6, a4);
      LOWORD(v19) = sub_28B41(v18, n8, n6, a4);
      v20 = sub_26A7A(v19, n8, n6, a4, arg4);
      v21 = sub_1B8E7(v20, n8, n6, a4, n3, n3_1);
      sub_1B750(v21, n8, n6, a4, n3);
    }
  }
}
