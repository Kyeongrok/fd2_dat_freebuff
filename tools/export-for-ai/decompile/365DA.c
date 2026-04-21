/*
 * func-name: sub_365DA
 * func-address: 0x365da
 * callers: 0x36522, 0x3666c, 0x37b8c, 0x3f446, 0x3f4e0, 0x40100, 0x41af4, 0x42110, 0x45670, 0x4994f
 * callees: 0x370f0
 */

bool __cdecl sub_365DA(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edx
  _DWORD v6[7]; // [esp+0h] [ebp-38h] BYREF
  _BYTE v7[24]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v8; // [esp+34h] [ebp-4h]

  v2 = a1;
  if ( a1 >= a2 )
    v3 = a2;
  else
    v3 = a1;
  if ( a1 < a2 )
    v2 = a2;
  v4 = v2 - v3 + 1;
  v6[0] = 1536;
  v6[1] = HIWORD(v3);
  v6[2] = (unsigned __int16)v3;
  v6[4] = HIWORD(v4);
  v6[5] = (unsigned __int16)v4;
  int386(49, v6, v7);
  return v8 == 0;
}
