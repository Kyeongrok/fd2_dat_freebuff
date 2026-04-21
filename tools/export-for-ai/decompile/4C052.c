/*
 * func-name: sub_4C052
 * func-address: 0x4c052
 * callers: 0x4a461, 0x4a480, 0x4a49f, 0x4a4bb, 0x4a4d7, 0x4a4f6, 0x4a515, 0x4a534, 0x4a553
 * callees: none
 */

signed int __fastcall sub_4C052(signed int result, int a2)
{
  int v2; // ecx
  signed int v3; // eax

  v2 = result >> 23;
  LOWORD(v2) = (unsigned __int8)(result >> 23);
  if ( (unsigned __int8)(result >> 23) )
  {
    v3 = result << 8;
    if ( (_BYTE)v2 == 0xFF )
    {
      LOWORD(v2) = -1;
      v3 &= ~0x80000000;
      if ( v3 )
        v3 |= 0x40000000u;
    }
    else
    {
      LOWORD(v2) = v2 + 16256;
    }
    LOWORD(v2) = ((unsigned __int16)(2 * v2) >> 1) | (__CFADD__(v2, v2) << 15);
    result = v3 | 0x80000000;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = result;
  *(_WORD *)(a2 + 8) = v2;
  return result;
}
