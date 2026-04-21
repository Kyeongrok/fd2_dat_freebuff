/*
 * func-name: sub_4BD87
 * func-address: 0x4bd87
 * callers: none
 * callees: none
 */

int __fastcall sub_4BD87(int *a1)
{
  int result; // eax
  __int16 n31; // cx
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // ebx

  if ( (a1[2] & 0x7FFF) == 0 )
    return 0;
  n31 = (a1[2] & 0x7FFF) - 16382;
  if ( (a1[2] & 0x7FFFu) <= 0x3FFE )
    return -__CFADD__(*((_BYTE *)a1 + 9), *((_BYTE *)a1 + 9));
  if ( n31 > 31 )
    return 0x80000000;
  HIBYTE(n31) = *((_BYTE *)a1 + 9);
  v3 = *a1;
  v4 = a1[1];
  v5 = (v4 << n31) | v3;
  result = (unsigned __int64)v4 << n31 >> 32;
  if ( __CFADD__(HIBYTE(n31), HIBYTE(n31)) )
  {
    if ( v5 )
      ++result;
    return -result;
  }
  return result;
}
