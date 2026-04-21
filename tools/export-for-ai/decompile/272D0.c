/*
 * func-name: sub_272D0
 * func-address: 0x272d0
 * callers: 0x275e6, 0x27738
 * callees: 0x15f84, 0x1685c, 0x16886, 0x187d6, 0x3702f, 0x4e8bc
 */

char __fastcall sub_272D0(__int32 a1, int a2, int a3, int a4, int n6_1, int a6, int a7, int a8, char a9)
{
  char n6_3; // al
  int n6_2; // esi
  int n61; // eax
  int v12; // ecx
  int n205; // eax
  unsigned int n0x15; // edx
  int v15; // eax
  int arg0; // ecx
  __int32 v17; // eax
  __int32 n999; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ecx
  int n999_1; // eax
  char *v23; // ebx
  int v24; // ebp
  unsigned __int8 *v25; // edi
  __int32 v26; // [esp-10h] [ebp-3Ch]
  __int32 v27; // [esp-10h] [ebp-3Ch]
  int v28; // [esp+4h] [ebp-28h]
  int n6; // [esp+8h] [ebp-24h]
  int v30; // [esp+14h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 84);
  n6_3 = n6_1;
  n6 = n6_1;
  if ( n6_1 > 6 )
  {
    n6 = 6;
    n6_3 = dword_53F4E + 6;
    if ( dword_53F4E + 6 > n6_1 )
      n6 = 5;
  }
  for ( n6_2 = 0; n6_2 < n6; ++n6_2 )
  {
    v30 = *(unsigned __int8 *)(a6 + n6_2 + dword_53F4E);
    v23 = sub_4E8BC(v30);
    v24 = 148 * (n6_2 % 2) + 10;
    v25 = (unsigned __int8 *)(26 * (n6_2 / 2) + 119);
    if ( (unsigned __int8)*v23 >= 0x15u )
    {
      if ( (unsigned __int8)*v23 >= 0x20u )
        n61 = 61;
      else
        n61 = 60;
    }
    else
    {
      n61 = 59;
    }
    v12 = 320 * (_DWORD)v25 + v24 + a8;
    sub_1685C(320 * (_DWORD)v25, n6_2 % 2, (int)v23, v12, v12, 320, FDOTHER_DAT__5, n61);
    n205 = 205;
    if ( n6_2 + dword_53F4E == a7 )
      n205 = 201;
    sub_15F84(
      v25,
      v30 + 181,
      320 * (26 * (n6_2 / 2) + 122),
      v12,
      (int)v23,
      ::arg0,
      v30 + 181,
      320 * (26 * (n6_2 / 2) + 122) + v24 + a8 + 28,
      320,
      n205,
      76,
      0,
      0,
      0);
    n0x15 = (unsigned __int8)*v23;
    v15 = 320 * (26 * (n6_2 / 2) + 121);
    arg0 = v15 + v24 + a8 + 118;
    v17 = v24 + a8 + 95 + v15;
    if ( n0x15 < 0x15 )
    {
      sub_1685C(v17, n0x15, (int)v23, arg0, v17, 320, FDOTHER_DAT__5, 64);
      n999 = *(__int16 *)(v23 + 1);
LABEL_12:
      sub_187D6(n999, n0x15, (int)v23, arg0, arg0, 320, n999, 42, 3);
      goto LABEL_22;
    }
    if ( (unsigned __int8)*v23 < 0x20u )
    {
      sub_1685C(v17, n0x15, (int)v23, arg0, v17, 320, FDOTHER_DAT__5, 65);
      n999 = *(__int16 *)(v23 + 5);
      goto LABEL_12;
    }
    if ( n0x15 == 32 )
    {
      n0x15 = (unsigned __int8)v23[13];
      if ( n0x15 == 5 )
      {
        sub_1685C(v17, 5, (int)v23, arg0, v17, 320, FDOTHER_DAT__5, 66);
        n999 = *((__int16 *)v23 + 7);
        goto LABEL_12;
      }
    }
    if ( *v23 == 32 && v23[13] == 11 )
    {
      v19 = 26 * (n6_2 / 2) + 121;
      v28 = 320 * v19;
      sub_1685C(v28 + v24 + a8 + 95, v19, (int)v23, arg0, v28 + v24 + a8 + 95, 320, FDOTHER_DAT__5, 67);
      sub_187D6(v28 + v24 + a8 + 118, v19, (int)v23, arg0, v28 + v24 + a8 + 118, 320, *((__int16 *)v23 + 7), 42, 3);
    }
    else
    {
      v20 = v24 + a8 + 95;
      v26 = v20 + 320 * (26 * (n6_2 / 2) + 123);
      sub_16886(v26, 26 * (n6_2 / 2) + 123, (int)v23, v20, v26, 320, FDOTHER_DAT__5, 41);
    }
LABEL_22:
    v21 = v24 + a8 + 95;
    v27 = v21 + 320 * (26 * (n6_2 / 2) + 131);
    sub_1685C(v27, 26 * (n6_2 / 2) + 131, (int)v23, v21, v27, 320, dword_53F66, 15);
    n999_1 = *(unsigned __int16 *)(v23 + 19);
    if ( a9 )
      n999_1 = (3 * n999_1 - (__CFSHL__((3 * n999_1) >> 31, 2) + 4 * ((3 * n999_1) >> 31))) >> 2;
    n6_3 = sub_187D6(
             320 * (26 * (n6_2 / 2) + 131) + a8 + v24 + 104,
             320 * (26 * (n6_2 / 2) + 131),
             (int)v23,
             v21,
             320 * (26 * (n6_2 / 2) + 131) + a8 + v24 + 104,
             320,
             n999_1,
             119,
             5);
  }
  return n6_3;
}
