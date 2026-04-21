/*
 * func-name: sub_44930
 * func-address: 0x44930
 * callers: 0x3b035
 * callees: 0x3af5b
 */

void __usercall sub_44930(int a1@<eax>, int a2)
{
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 4) != 1 )
    {
      sub_3AF5B(a1, a2);
      *(_DWORD *)(a2 + 4) = 2;
    }
  }
}
