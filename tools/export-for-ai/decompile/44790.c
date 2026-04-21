/*
 * func-name: sub_44790
 * func-address: 0x44790
 * callers: 0x3aeee
 * callees: 0x3af5b, 0x43160
 */

int __usercall sub_44790@<eax>(int result@<eax>, _DWORD *a2)
{
  int v2; // eax

  if ( a2 )
  {
    if ( a2[1] != 1 )
    {
      sub_3AF5B(result, (int)a2);
      sub_43160(a2);
      v2 = a2[4];
      a2[1] = 4;
      result = v2 + 8;
      a2[5] = result;
    }
  }
  return result;
}
