/*
 * func-name: sub_36FF4
 * func-address: 0x36ff4
 * callers: 0x20421
 * callees: 0x36e3d, 0x36e57, 0x36e65, 0x36ea7, 0x36ee0, 0x36f08, 0x36f24, 0x36f69, 0x36f82, 0x36fac
 */

__int16 __cdecl sub_36FF4(__int16 a1, unsigned __int8 *a2)
{
  unsigned __int8 v3; // al
  __int16 result; // ax

  for ( ; a1; --a1 )
  {
    v3 = *a2++;
    result = (*(__int16 (__usercall **)@<ax>(_WORD@<ax>, _BYTE *@<esi>))((char *)funcs_37012 + (unsigned __int16)(4 * v3)))(
               4 * v3,
               a2);
  }
  return result;
}
