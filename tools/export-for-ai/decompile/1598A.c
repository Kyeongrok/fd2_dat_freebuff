/*
 * func-name: sub_1598A
 * func-address: 0x1598a
 * callers: 0x13a9f, 0x14ef0, 0x1d8ba
 * callees: 0x14818, 0x14b16, 0x15b77, 0x1c269, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e390, 0x4e866, 0x4e8a5
 */

int __fastcall sub_1598A(__int32 a1, int a2, int n2, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // esi
  int i; // edi
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // esi
  int v10; // edx
  __int32 n255; // eax
  int j; // ebp
  int n2_1; // eax
  int v14; // eax
  int n6; // eax
  unsigned __int8 *v16; // eax
  int v17; // edx
  _BYTE v19[32]; // [esp+0h] [ebp-68h] BYREF
  _BYTE v20[12]; // [esp+20h] [ebp-48h] BYREF
  int v21; // [esp+2Ch] [ebp-3Ch]
  int v22; // [esp+30h] [ebp-38h]
  int v23; // [esp+34h] [ebp-34h]
  int v24; // [esp+38h] [ebp-30h]
  char *v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+40h] [ebp-28h]
  _BYTE *n255_1; // [esp+44h] [ebp-24h]
  int v28; // [esp+48h] [ebp-20h]
  int v29; // [esp+4Ch] [ebp-1Ch]
  int v30; // [esp+50h] [ebp-18h]
  int v31; // [esp+54h] [ebp-14h]
  int n2_2; // [esp+64h] [ebp-4h]

  sub_3702F(a1, a2, n2, a4, 132);
  n2_2 = n2;
  n6_3 = 0;
  v25 = sub_4E8A5(0);
  v6 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  v24 = *v6;
  v23 = v6[1];
  n255_1 = (_BYTE *)malloc(400);
  v21 = *((unsigned __int16 *)v6 + 34);
  v22 = sub_1C269(a5, v20);
  if ( v22 && !v6[39] )
  {
    for ( i = 0; i < v22; ++i )
    {
      v8 = (unsigned __int16 *)sub_4E866((unsigned __int8)v20[i]);
      v9 = v8;
      v10 = *((unsigned __int8 *)v8 + 5);
      if ( v10 <= v21 )
      {
        n255 = *((unsigned __int8 *)v8 + 3);
        sub_4E390((int)v25, v24, v23, n255, (char *)dword_53A51, dword_53A69);
        v26 = sub_14B16(n255, v10, n2, a4, n255_1);
        sub_4DF4C((unsigned __int8 *)dword_53A51);
        for ( j = 0; j < v26; ++j )
        {
          v16 = &n255_1[2 * j];
          v17 = *v16;
          v31 = v17;
          v29 = v16[1];
          if ( a6 )
            n2_1 = *((unsigned __int8 *)v9 + 6);
          else
            n2_1 = *((_BYTE *)v9 + 6) == 0;
          sub_14818((__int32)v19, v17, n2, a4, v31, v29, (int)v19, *((unsigned __int8 *)v9 + 4), 0, n2_1);
          v30 = v14;
          sub_4DF4C((unsigned __int8 *)dword_53A51);
          if ( v30 )
          {
            n6 = sub_15B77((unsigned __int8)v20[i], v30, v19);
            if ( n6 > n6_3 || n6 == n6_3 && *v9 > v28 )
            {
              n6_3 = n6;
              dword_53C27 = v31;
              dword_53C2B = v29;
              n11 = (unsigned __int8)v20[i];
              v28 = *v9;
            }
          }
        }
      }
    }
    free(n255_1);
  }
  return 0;
}
