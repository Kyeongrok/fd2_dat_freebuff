/*
 * func-name: sub_4BE57
 * func-address: 0x4be57
 * callers: 0x4abd5, 0x4be46
 * callees: none
 */

int __fastcall sub_4BE57(unsigned int a1, int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  __int16 v5; // cx
  unsigned int v6; // edx
  int result; // eax

  if ( a1 )
  {
    _BitScanReverse(&v3, a1);
    v4 = a1 << (31 - v3);
    v5 = (unsigned __int8)v3 + 0x3FFF;
    v6 = v4;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  result = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = v6;
  *(_WORD *)(a2 + 8) = v5;
  return result;
}
