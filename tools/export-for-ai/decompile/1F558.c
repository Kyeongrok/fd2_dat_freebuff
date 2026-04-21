/*
 * func-name: sub_1F558
 * func-address: 0x1f558
 * callers: 0x2000a, 0x21548
 * callees: 0x3702f, 0x37910
 */

void __fastcall sub_1F558(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  int n3072; // ebx
  int n312; // ecx
  int v11; // ebp
  int n3072_1; // [esp+0h] [ebp-2Ch]
  int v13; // [esp+4h] [ebp-28h]
  int n192; // [esp+8h] [ebp-24h]
  int n3072_2; // [esp+Ch] [ebp-20h]
  int v16; // [esp+10h] [ebp-1Ch]
  int v17; // [esp+14h] [ebp-18h]
  int v18; // [esp+18h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 60);
  v8 = (a5 - 156 * a7) / 3072;
  n3072 = (a5 - 156 * a7) % 3072;
  v18 = (a6 - 96 * a7) / 3072;
  n3072_2 = (a6 - 96 * a7) % 3072;
  if ( n3072_2 < 0 )
  {
    n3072_2 += 3072;
    --v18;
  }
  if ( n3072 < 0 )
  {
    n3072 += 3072;
    --v8;
  }
  v13 = v8;
  n3072_1 = n3072;
  v17 = n655360_0 + 1284;
  memset(n655360_0, 0, 64000);
  for ( n192 = 0; n192 < 192; ++n192 )
  {
    v16 = 24 * ((n3072_2 - (__CFSHL__(n3072_2 >> 31, 7) + (n3072_2 >> 31 << 7))) >> 7);
    if ( v18 >= 0 && v18 < dword_53AC5 )
    {
      v11 = v16 + *(_DWORD *)(a8 + 4 * (v8 + (v18 << 6)));
      for ( n312 = 0; n312 < 312; ++n312 )
      {
        if ( v8 >= 0 && v8 < dword_53AC1 )
          *(_BYTE *)(n312 + v17) = *(_BYTE *)(((n3072 - (__CFSHL__(n3072 >> 31, 7) + (n3072 >> 31 << 7))) >> 7) + v11);
        n3072 += a7;
        if ( n3072 >= 3072 )
        {
          ++v8;
          n3072 -= 3072;
          v11 = v16 + *(_DWORD *)(a8 + 4 * (v8 + (v18 << 6)));
        }
      }
    }
    v8 = v13;
    n3072 = n3072_1;
    n3072_2 += a7;
    if ( n3072_2 >= 3072 )
    {
      ++v18;
      n3072_2 -= 3072;
    }
    v17 += 320;
  }
  JUMPOUT(0x18888);
}
