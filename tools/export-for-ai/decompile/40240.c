/*
 * func-name: sub_40240
 * func-address: 0x40240
 * callers: 0x414e0, 0x415d0, 0x41630, 0x41660
 * callees: none
 */

int *__cdecl sub_40240(int a1)
{
  int n127; // edx
  int n127_1; // esi
  int v3; // eax
  int v4; // ecx
  int n2; // edx
  int *result; // eax
  int v7; // edx
  int v8; // esi
  int v9; // ecx
  int n0x8000; // edi
  int v11; // ebx
  int v12; // edi
  int v13; // ebx
  int n0x8000_1; // edi
  int v15; // ebx
  int n0x8000_2; // edi
  int v17; // ebx
  int v18; // edx
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  int n0x8000_3; // edi
  int v23; // ebx
  int v24; // edx
  int v25; // [esp+8h] [ebp-20h]
  int v26; // [esp+Ch] [ebp-1Ch]

  n127 = *(_DWORD *)(a1 + 64);
  if ( n127 <= 127 )
  {
    if ( n127 < 0 )
      *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 127;
  }
  n127_1 = *(_DWORD *)(a1 + 68);
  if ( n127_1 <= 127 )
  {
    if ( n127_1 < 0 )
      *(_DWORD *)(a1 + 68) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 68) = 127;
  }
  v3 = *(_DWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 68);
  v26 = v3;
  if ( v3 )
    v26 = v3 + 1;
  n2 = *(_DWORD *)(*(_DWORD *)a1 + 24);
  if ( n2 == 2 || n2 == 3 )
  {
    result = (int *)(a1 + 72);
    v7 = a1 + 1096;
    v8 = (unsigned __int8)byte_5360C[127 - v4];
    v9 = (unsigned __int8)byte_5360C[v4];
    v25 = v26 << 8;
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    {
      n0x8000 = 0;
      v11 = 0;
      do
      {
        *result = (v8 * (v11 >> 7)) >> 7;
        v7 += 4;
        ++result;
        *(_DWORD *)(v7 - 4) = (v9 * (v11 >> 7)) >> 7;
        n0x8000 += 256;
        v11 += v25;
      }
      while ( n0x8000 < 0x8000 );
      v12 = -32768;
      v13 = -32768 * v26;
      do
      {
        *result = (v8 * (v13 >> 7)) >> 7;
        v7 += 4;
        ++result;
        *(_DWORD *)(v7 - 4) = (v9 * (v13 >> 7)) >> 7;
        v12 += 256;
        v13 += v26 << 8;
      }
      while ( v12 < 0 );
    }
    else
    {
      n0x8000_1 = -32768;
      v15 = -32768 * v26;
      do
      {
        *result = (v8 * (v15 >> 7)) >> 7;
        v7 += 4;
        ++result;
        *(_DWORD *)(v7 - 4) = (v9 * (v15 >> 7)) >> 7;
        n0x8000_1 += 256;
        v15 += v25;
      }
      while ( n0x8000_1 < 0x8000 );
    }
  }
  else
  {
    result = (int *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    {
      n0x8000_2 = 0;
      v17 = 0;
      do
      {
        ++result;
        n0x8000_2 += 256;
        v18 = v17 >> 7;
        v17 += v26 << 8;
        *(result - 1) = v18;
      }
      while ( n0x8000_2 < 0x8000 );
      v19 = -32768;
      v20 = -32768 * v26;
      do
      {
        ++result;
        v19 += 256;
        v21 = v20 >> 7;
        v20 += v26 << 8;
        *(result - 1) = v21;
      }
      while ( v19 < 0 );
    }
    else
    {
      n0x8000_3 = -32768;
      v23 = -32768 * v26;
      do
      {
        ++result;
        n0x8000_3 += 256;
        v24 = v23 >> 7;
        v23 += v26 << 8;
        *(result - 1) = v24;
      }
      while ( n0x8000_3 < 0x8000 );
    }
  }
  return result;
}
