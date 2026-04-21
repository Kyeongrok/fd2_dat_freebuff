/*
 * func-name: sub_3FEE0
 * func-address: 0x3fee0
 * callers: 0x3ff35, 0x40090
 * callees: 0x4726f, 0x47525, 0x476c1
 */

int __usercall sub_3FEE0@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3, int a4)
{
  int v4; // esi

  tzset(a1, a2, a4);
  v4 = *a3;
  sub_47525(25567, *a3, dword_5384C, a4);
  if ( _isindst(a4) )
    sub_47525(25567, v4, dword_5384C - dword_53850, a4);
  return a4;
}
