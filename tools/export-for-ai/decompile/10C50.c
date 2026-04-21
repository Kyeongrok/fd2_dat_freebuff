/*
 * func-name: sub_10C50
 * func-address: 0x10c50
 * callers: 0x10b4e
 * callees: 0x11019, 0x145cd, 0x1b750, 0x3702f, 0x3771c, 0x37910, 0x37932, 0x4df4c, 0x4e821, 0x4e838, 0x4e84f
 */

int __fastcall sub_10C50(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int i; // esi
  int j; // ebx
  int v8; // edi
  _BYTE *v9; // eax
  _BYTE *v10; // esi
  char *v11; // eax
  char *v12; // edi
  unsigned __int8 *v13; // eax
  __int16 v14; // dx
  __int16 v15; // bx
  int n6; // eax
  int v17; // ebx
  int result; // eax
  __int16 v19; // [esp+0h] [ebp-44h]
  int v20; // [esp+4h] [ebp-40h]
  unsigned int n0x44; // [esp+8h] [ebp-3Ch]
  char v22; // [esp+Ch] [ebp-38h]
  __int16 v23; // [esp+10h] [ebp-34h]
  __int16 v24; // [esp+14h] [ebp-30h]
  __int16 v25; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  char v27; // [esp+20h] [ebp-24h]
  int v28; // [esp+24h] [ebp-20h]
  char v29; // [esp+28h] [ebp-1Ch]
  int v30; // [esp+2Ch] [ebp-18h]
  int n255; // [esp+30h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 84);
  n255 = 255;
  v26 = 80 * n6_0 + dword_53A45;
  v28 = *(unsigned __int8 *)(6 * a5 + dword_53A59 + 2);
  v30 = *(unsigned __int8 *)(6 * a5 + dword_53A59 + 4);
  sub_145CD(0);
  sub_145CD(1);
  if ( byte_53AFA )
  {
    v27 = v28;
    v29 = v30;
  }
  else
  {
    for ( i = 0; i < dword_53AC5; ++i )
    {
      for ( j = 0; j < dword_53AC1; ++j )
      {
        if ( (*(_BYTE *)(4 * (j + i * dword_53AC1) + dword_53A51 + 6) & 0x40) == 0 )
        {
          v20 = abs(j - v28);
          if ( v20 + abs(i - v30) <= n255 )
          {
            v8 = abs(j - v28);
            n255 = abs(i - v30) + v8;
            v27 = j;
            v29 = i;
          }
        }
      }
    }
  }
  sub_4DF4C((unsigned __int8 *)dword_53A51);
  v9 = (_BYTE *)(dword_53A55 + 26 * a5);
  v10 = v9 + 131;
  n0x44 = (unsigned __int8)v9[132];
  v25 = (unsigned __int8)v9[135];
  v22 = v9[131];
  if ( n0x44 < 0x44 )
  {
    v12 = sub_4E838(n0x44);
    v13 = (unsigned __int8 *)sub_4E821(n0x44);
    v24 = (v25 - 1) * v13[6] + *(_WORD *)(v12 + 3);
    v23 = v13[8] * (v25 - 1) + *(_WORD *)(v12 + 5);
    v19 = *((_WORD *)v12 + 9);
    v14 = *((_WORD *)v12 + 10);
    v15 = *((_WORD *)v12 + 11);
    *(_BYTE *)(v26 + 31) = *v12;
    *(_BYTE *)(v26 + 32) = v12[1];
    *(_WORD *)(v26 + 55) = v19 + v25 * *v13;
    *(_WORD *)(v26 + 57) = v14 + v25 * v13[2];
    *(_BYTE *)(v26 + 59) = v12[7];
    *(_WORD *)(v26 + 62) = v15 + v25 * v13[4];
  }
  else
  {
    v11 = sub_4E84F((unsigned __int8)v9[132] - 68);
    v24 = *((_WORD *)v11 + 1) * v25;
    v23 = (unsigned __int8)v11[4] * v25;
    *(_BYTE *)(v26 + 31) = *v11;
    *(_BYTE *)(v26 + 32) = v11[1];
    *(_WORD *)(v26 + 55) = (unsigned __int8)v11[5] * v25;
    *(_WORD *)(v26 + 57) = (unsigned __int8)v11[6] * v25;
    *(_WORD *)(v26 + 62) = (unsigned __int8)v11[7] * v25;
    *(_BYTE *)(v26 + 59) = v11[8];
  }
  *(_BYTE *)v26 = v27;
  *(_BYTE *)(v26 + 1) = v29;
  *(_BYTE *)(v26 + 2) = sub_11019(n0x44, a6);
  *(_BYTE *)(v26 + 3) = 0;
  *(_BYTE *)(v26 + 4) = 0;
  *(_BYTE *)(v26 + 5) = 0;
  *(_BYTE *)(v26 + 6) = v22;
  *(_BYTE *)(v26 + 7) = n0x44;
  *(_BYTE *)(v26 + 8) = n0x44;
  *(_BYTE *)(v26 + 9) = 0;
  if ( (unsigned __int8)v10[5] == 255 )
  {
    *(_BYTE *)(v26 + 10) = 64;
    *(_BYTE *)(v26 + 11) = v10[6];
    *(_BYTE *)(v26 + 12) = 0x80;
  }
  else
  {
    *(_BYTE *)(v26 + 10) = 64;
    *(_BYTE *)(v26 + 11) = v10[5];
    *(_BYTE *)(v26 + 12) = 64;
    *(_BYTE *)(v26 + 13) = v10[6];
  }
  for ( n6 = 0; n6 < 6; ++n6 )
  {
    v17 = v26 + 2 * n6;
    if ( (unsigned __int8)v10[n6 + 7] == 255 )
      *(_BYTE *)(v17 + 14) = 0x80;
    else
      *(_BYTE *)(v17 + 14) = 0;
    *(_BYTE *)(v26 + 2 * n6 + 15) = v10[n6 + 7];
  }
  memset(v26 + 34, 0, 6);
  memmove(v26 + 26, v10 + 13, 4);
  *(_BYTE *)(v26 + 30) = 0;
  *(_BYTE *)(v26 + 33) = v25;
  *(_BYTE *)(v26 + 49) = v10[22];
  *(_WORD *)(v26 + 50) = *(_WORD *)(v10 + 23);
  *(_BYTE *)(v26 + 52) = v10[17];
  *(_BYTE *)(v26 + 53) = v10[18];
  *(_BYTE *)(v26 + 54) = v10[19];
  *(_BYTE *)(v26 + 61) = v10[2];
  if ( *(_BYTE *)(v26 + 6) == 2 )
    *(_BYTE *)(v26 + 60) = 0;
  else
    *(_BYTE *)(v26 + 60) = -1;
  *(_WORD *)(v26 + 64) = v24;
  *(_WORD *)(v26 + 66) = v24;
  *(_WORD *)(v26 + 68) = v23;
  *(_WORD *)(v26 + 70) = v23;
  result = sub_1B750(n6_0);
  ++n6_0;
  return result;
}
