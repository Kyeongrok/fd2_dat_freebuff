/*
 * func-name: sub_36E3D
 * func-address: 0x36e3d
 * callers: 0x36ff4
 * callees: none
 */

__int16 __usercall sub_36E3D@<ax>(int a1@<eax>, _BYTE *a2@<esi>)
{
  __int16 v2; // bx
  int value; // eax

  LOBYTE(a1) = *a2;
  BYTE1(a1) = *a2;
  v2 = a1;
  value = a1 << 16;
  LOWORD(value) = v2;
  memset32((void *)buf, value, 0xC0u);
  return value;
}
