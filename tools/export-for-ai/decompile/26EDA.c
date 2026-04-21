/*
 * func-name: sub_26EDA
 * func-address: 0x26eda
 * callers: 0x26e38, 0x275e6, 0x27d33, 0x27f4a, 0x2a29d, 0x2a857
 * callees: 0x10620, 0x16559, 0x27079, 0x3702f, 0x370f0, 0x4ebe3, 0x4ed34
 */

int __fastcall sub_26EDA(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int n3; // esi
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // et2
  _DWORD dst_[4]; // [esp+0h] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-18h]
  unsigned __int8 v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+24h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 56);
  v17 = a3;
  v16 = 0;
  qmemcpy(dst_, &src__44, sizeof(dst_));
  v15 = MEMORY[0x46C];
  v5 = sub_4EBE3(MEMORY[0x46C]) % 50 + 8;
  n3_4 = 2;
  sub_27079(dst_, a5);
  if ( !a5 )
  {
    for ( n3 = 0; n3 < 4; ++n3 )
    {
      v7 = 2 * n3 + 3;
      if ( n3 == n3_3 )
        v7 = 2 * n3 + 4;
      sub_4ED34(dst_[n3] + 709680, *(_DWORD *)(dword_53F66 + 4 * v7 + 6) + dword_53F66, 320);
    }
  }
  do
  {
    v8 = (__int16)v15;
    if ( MEMORY[0x46C] - (__int16)v15 >= 2 || MEMORY[0x46C] < (__int16)v15 )
    {
      if ( ++n3_4 == 4 )
        n3_4 = 0;
      sub_27079(dst_, a5);
      if ( v16 )
      {
        v9 = sub_16559(v16, v8, a3, 0, 0);
        v10 = sub_4EBE3(v9);
        v12 = v10 % 30;
        v11 = v10 / 30;
        v5 = v12 + 2;
        v16 = 0;
      }
      else
      {
        v11 = v5--;
        if ( !v11 )
        {
          v11 = sub_16559(0, v8, a3, 0, 3);
          v16 = 1;
        }
      }
      LOWORD(v11) = MEMORY[0x46C];
      v15 = v11;
    }
  }
  while ( !sub_10620() );
  HIBYTE(::n3) = 16;
  int386(22, &::n3, &::n3);
  if ( HIBYTE(::n3) == 224 || HIBYTE(::n3) == 82 )
    HIBYTE(::n3) = 28;
  if ( HIBYTE(::n3) == 83 )
    HIBYTE(::n3) = 1;
  return HIBYTE(::n3);
}
