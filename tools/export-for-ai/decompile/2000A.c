/*
 * func-name: sub_2000A
 * func-address: 0x2000a
 * callers: 0x117e7
 * callees: 0x10620, 0x11cac, 0x12e38, 0x1399c, 0x1f558, 0x1f6ef, 0x3702f, 0x3706e, 0x370f0, 0x3771c, 0x3776e, 0x4e381
 */

int __fastcall sub_2000A(__int32 a1, int a2, int a3, int n7_1)
{
  int n4; // ebp
  int n7_3; // eax
  __int64 v6; // rax
  int n40; // esi
  int i; // ebx
  int n8; // ebx
  int v10; // eax
  int n6; // esi
  int v12; // ebx
  unsigned __int8 *v13; // eax
  int n6_1; // ebx
  int v15; // eax
  __int32 v17; // [esp-10h] [ebp-5Ch]
  __int32 v18; // [esp-10h] [ebp-5Ch]
  __int32 v19; // [esp-10h] [ebp-5Ch]
  int v20; // [esp-8h] [ebp-54h]
  _DWORD v21[3]; // [esp+0h] [ebp-4Ch]
  _WORD v22[4]; // [esp+Ch] [ebp-40h] BYREF
  __int32 n7_2; // [esp+14h] [ebp-38h]
  int v24; // [esp+18h] [ebp-34h]
  int v25; // [esp+1Ch] [ebp-30h]
  int n640; // [esp+20h] [ebp-2Ch]
  int v27; // [esp+24h] [ebp-28h]
  int v28; // [esp+28h] [ebp-24h]
  int v29; // [esp+2Ch] [ebp-20h]
  int v30; // [esp+30h] [ebp-1Ch]
  int v31; // [esp+34h] [ebp-18h]
  unsigned int n7; // [esp+38h] [ebp-14h]
  int v33; // [esp+48h] [ebp-4h]

  sub_3702F(a1, a2, a3, n7_1, 96);
  v33 = a3;
  n4 = 4;
  v21[0] = unk_5208A;
  v21[1] = unk_5208E;
  v21[2] = unk_52092;
  n640 = 640;
  n7 = 7;
  v27 = -1;
  n7_2 = ::n7;
  sub_1399C(::n7, a2, a3, n7_1);
  ::n7 = n7_3;
  if ( ::n40 > 40 )
  {
    n4 = 3;
    n640 = 896;
  }
  v29 = 1536 * dword_51A87 + 3072 * dword_53AA9;
  v28 = 1536 * dword_51A8B + 3072 * dword_53AAD;
  v25 = 1536 * dword_53AC1;
  v24 = 1536 * ::n40;
  v6 = malloc(0x4000);
  v31 = v6;
  for ( n40 = 0; n40 < ::n40; ++n40 )
  {
    for ( i = 0; i < dword_53AC1; ++i )
    {
      sub_12E38((__int32)v22, SHIDWORD(v6), i, n7_1, i, n40, (int)v22);
      n7_1 = ::n7;
      HIDWORD(v6) = 576 * v22[0] + ::n7 + 6;
      *(_DWORD *)(v31 + 4 * (i + (n40 << 6))) = HIDWORD(v6);
    }
  }
  n8 = 1;
  while ( n8 < 8 )
  {
    n7_1 = 7;
    v20 = n8 * n640 / 7 + 128;
    v10 = ++n8 * (v25 - v29);
    HIDWORD(v6) = 8 * (v10 >> 31);
    v17 = v29 + ((v10 - (__CFSHL__(v10 >> 31, 3) + HIDWORD(v6))) >> 3);
    sub_1F558(
      v17,
      SHIDWORD(v6),
      n8,
      7,
      v17,
      v28 + ((n8 * (v24 - v28) - (__CFSHL__((n8 * (v24 - v28)) >> 31, 3) + 8 * ((n8 * (v24 - v28)) >> 31))) >> 3),
      v20,
      v31);
    memmove(655360, n655360_0, 64000);
  }
  sub_4E381();
  while ( !sub_10620() )
  {
    if ( (unsigned int)(MEMORY[0x46C] - v30) >= 2 )
    {
      for ( n6 = 0; ; ++n6 )
      {
        n7_1 = n4 * dword_53AC1 / 2;
        v6 = n4 * ::n40;
        v12 = n4 * ::n40 / 2;
        if ( n6 >= n6_0 )
          break;
        v13 = (unsigned __int8 *)(dword_53A45 + 80 * n6);
        if ( (v13[5] & 1) == 0 && v13[7] != 121 && v13[31] != 10 )
        {
          v18 = n4 * *v13 + 160 - n7_1;
          sub_1F6EF(v18, n4 * v13[1] + 100 - v12, v12, n7_1, v18, n4 * v13[1] + 100 - v12, n7 + v21[v13[6]], n4);
        }
      }
      sub_1F6EF(
        n4 * dword_53AB1 + 160 - n7_1,
        SHIDWORD(v6),
        v12,
        n7_1,
        n4 * dword_53AB1 + 160 - n7_1,
        n4 * dword_53AB5 + 100 - v12,
        n7 + 24,
        n4);
      n7 += v27;
      if ( n7 >= 8 )
      {
        v27 = -v27;
        n7 += v27;
      }
      v30 = MEMORY[0x46C];
    }
  }
  HIBYTE(n3) = 16;
  int386(22, &n3, &n3);
  for ( n6_1 = 6; n6_1 > 0; --n6_1 )
  {
    n7_1 = n6_1 + 1;
    v15 = (n6_1 + 1) * (v25 - v29);
    HIDWORD(v6) = 8 * (v15 >> 31);
    v19 = v29 + ((v15 - (__CFSHL__(v15 >> 31, 3) + HIDWORD(v6))) >> 3);
    sub_1F558(
      v19,
      SHIDWORD(v6),
      n6_1,
      n6_1 + 1,
      v19,
      v28
    + (((n6_1 + 1) * (v24 - v28)
      - (__CFSHL__(((n6_1 + 1) * (v24 - v28)) >> 31, 3)
       + 8 * (((n6_1 + 1) * (v24 - v28)) >> 31))) >> 3),
      n6_1 * n640 / 7 + 128,
      v31);
    memmove(655360, n655360_0, 64000);
  }
  free(v31);
  free(::n7);
  ::n7 = n7_2;
  return sub_11CAC(n7_2, SHIDWORD(v6), n6_1, n7_1, 0);
}
