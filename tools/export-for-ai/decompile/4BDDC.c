/*
 * func-name: sub_4BDDC
 * func-address: 0x4bddc
 * callers: 0x4ac14
 * callees: none
 */

int __fastcall sub_4BDDC(int *a1)
{
  __int16 n32; // cx
  int v2; // ebx
  unsigned int v3; // eax
  _BOOL1 v4; // cf
  char v5; // ch
  char v6; // ch
  int result; // eax

  n32 = (a1[2] & 0x7FFF) - 16382;
  if ( (a1[2] & 0x7FFFu) < 0x3FFE )
    return 0;
  if ( n32 > 32 || (char)(*((_BYTE *)a1 + 8) + 2) > 32 )
    return 0x80000000;
  HIBYTE(n32) = (*((_BYTE *)a1 + 9) >> 1) | 0x20;
  v2 = *a1;
  v3 = a1[1];
  HIBYTE(n32) = (HIBYTE(n32) >> 1) | (__CFADD__(v2, v2) << 7);
  if ( (_BYTE)n32 == 32 )
  {
    v4 = __CFADD__(HIBYTE(n32), HIBYTE(n32));
    v5 = 2 * HIBYTE(n32);
  }
  else
  {
    v5 = 2 * HIBYTE(n32);
    v4 = __CFADD__(v3 << n32, v3 << n32);
    v3 = (unsigned __int64)v3 << n32 >> 32;
  }
  v6 = ((v4 << 7) | 0x7F) & v5;
  result = __CFADD__(v6, v6) + v3;
  if ( __CFADD__(2 * v6, 2 * v6) )
    return -result;
  return result;
}
