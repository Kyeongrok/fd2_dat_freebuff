/*
 * func-name: sub_1567E
 * func-address: 0x1567e
 * callers: 0x14ef0, 0x1d8ba
 * callees: 0x14818, 0x149f8, 0x14b16, 0x15880, 0x1b8a6, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e8a5, 0x4e8bc
 */

int __fastcall sub_1567E(__int32 a1, int a2, int n2, int a4, int a5, int a6)
{
  __int64 n255; // rax
  char *v7; // esi
  int i; // edi
  int v9; // eax
  int v10; // ebp
  int n6; // eax
  unsigned __int8 *v12; // eax
  _BYTE v14[32]; // [esp+0h] [ebp-58h] BYREF
  int n255_2; // [esp+20h] [ebp-38h]
  unsigned __int8 *v16; // [esp+24h] [ebp-34h]
  int v17; // [esp+28h] [ebp-30h]
  int v18; // [esp+2Ch] [ebp-2Ch]
  int v19; // [esp+30h] [ebp-28h]
  _BYTE *n255_1; // [esp+34h] [ebp-24h]
  int v21; // [esp+38h] [ebp-20h]
  int n255_3; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  int v24; // [esp+44h] [ebp-14h]
  int n2_1; // [esp+54h] [ebp-4h]

  sub_3702F(a1, a2, n2, a4, 120);
  n2_1 = n2;
  n6_4 = 0;
  sub_4E8A5(0);
  v16 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  v18 = *v16;
  v19 = v16[1];
  n255 = malloc(400);
  n255_1 = (_BYTE *)n255;
  LODWORD(n255) = sub_1B8A6(a5);
  n255_2 = n255;
  if ( (_DWORD)n255 )
  {
    for ( n255_3 = 0; n255_3 < n255_2; ++n255_3 )
    {
      v21 = v16[2 * n255_3 + 11];
      v7 = sub_4E8BC(v21);
      WORD2(n255) = (unsigned __int8)v7[16];
      if ( BYTE4(n255) > 0xFu )
        WORD2(n255) = 257;
      if ( v7[13] )
      {
        sub_14818(BYTE4(n255), SHIDWORD(n255), n2, a4, v18, v19, 0, BYTE4(n255), BYTE5(n255), 0);
        v17 = sub_14B16(n255, SHIDWORD(n255), n2, a4, n255_1);
        sub_4DF4C((unsigned __int8 *)dword_53A51);
        for ( i = 0; i < v17; ++i )
        {
          v12 = &n255_1[2 * i];
          v23 = *v12;
          v24 = v12[1];
          if ( a6 )
            LODWORD(n255) = (unsigned __int8)v7[17];
          else
            LODWORD(n255) = v7[17] == 0;
          BYTE4(n255) = v7[16];
          if ( BYTE4(n255) <= 0xFu )
            sub_14818((__int32)v14, SHIDWORD(n255), n2, a4, v23, v24, (int)v14, (unsigned __int8)v7[18], 0, n255);
          else
            sub_149F8((__int32)v14, SHIDWORD(n255), n2, a4, v23, v24, (int)v14, v18, v19, BYTE4(n255) - 16, 0);
          v10 = v9;
          sub_4DF4C((unsigned __int8 *)dword_53A51);
          if ( v10 )
          {
            n6 = sub_15880(v21, v10, v14);
            if ( n6 > n6_4 )
            {
              n6_4 = n6;
              dword_53C37 = v23;
              dword_53C3B = v24;
              n255_0 = n255_3;
            }
          }
        }
      }
    }
    free(n255_1);
    LODWORD(n255) = 0;
  }
  return n255;
}
