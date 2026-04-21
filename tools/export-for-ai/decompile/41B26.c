/*
 * func-name: sub_41B26
 * func-address: 0x41b26
 * callers: 0x41b84, 0x41ec1
 * callees: 0x394b4
 */

void __usercall sub_41B26(int a1@<eax>, int a2)
{
  if ( *(_DWORD *)(a2 + 2164) )
    a1 = (*(int (__cdecl **)(int))(a2 + 2164))(a2);
  if ( *(int *)(a2 + 2188) > 0 )
    sub_394B4(a1, a2);
  *(_DWORD *)(a2 + 2188) = -1;
}
