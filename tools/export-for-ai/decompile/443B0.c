/*
 * func-name: sub_443B0
 * func-address: 0x443b0
 * callers: none
 * callees: 0x3af5b
 */

void __usercall sub_443B0(int a1@<eax>, int a2)
{
  if ( a2 )
  {
    sub_3AF5B(a1, a2);
    *(_DWORD *)(a2 + 4) = 1;
  }
}
