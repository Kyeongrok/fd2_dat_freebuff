/*
 * func-name: sub_36522
 * func-address: 0x36522
 * callers: 0x3f950, 0x40cf0
 * callees: 0x365da, 0x370f0
 */

int __cdecl sub_36522(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // esi
  _DWORD v6[7]; // [esp+0h] [ebp-3Ch] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v8; // [esp+28h] [ebp-14h]
  int v9; // [esp+34h] [ebp-8h]

  v6[0] = 256;
  v6[1] = a1;
  int386(49, v6, v7);
  if ( v9 )
  {
    v4 = 0;
  }
  else
  {
    *a3 = v7[0] << 16;
    *a2 = 16 * LOWORD(v7[0]);
    *a4 = (unsigned __int16)v8;
    v4 = 1;
  }
  if ( v4 )
    sub_365DA(*a3 >> 12, (*a3 >> 12) + 16 * a1 - 1);
  return v4;
}
