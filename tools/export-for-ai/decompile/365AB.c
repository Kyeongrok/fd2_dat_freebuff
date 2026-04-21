/*
 * func-name: sub_365AB
 * func-address: 0x365ab
 * callers: 0x3f950, 0x3fb90, 0x40c40, 0x40cf0
 * callees: 0x370f0
 */

int __cdecl sub_365AB(int a1, int a2, unsigned __int16 a3)
{
  _DWORD v4[7]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v5[28]; // [esp+1Ch] [ebp-1Ch] BYREF

  v4[0] = 257;
  v4[3] = a3;
  return int386(49, v4, v5);
}
