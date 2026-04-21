/*
 * func-name: sub_36EE0
 * func-address: 0x36ee0
 * callers: 0x36ff4
 * callees: none
 */

__int16 __usercall sub_36EE0@<ax>(int a1@<eax>, _BYTE *a2@<esi>)
{
  __int16 v2; // bx
  int value; // eax
  int n655360; // edi
  unsigned int count; // ecx

  LOBYTE(a1) = *a2;
  BYTE1(a1) = *a2;
  v2 = a1;
  value = a1 << 16;
  LOWORD(value) = v2;
  LOBYTE(v2) = n64000;
  n655360 = ::n655360;
  count = (unsigned __int16)n64000 >> 2;
  memset32((void *)::n655360, value, count);
  memset((void *)(n655360 + 4 * count), value, v2 & 3);
  return value;
}
