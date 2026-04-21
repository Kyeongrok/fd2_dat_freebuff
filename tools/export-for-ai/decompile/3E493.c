/*
 * func-name: sub_3E493
 * func-address: 0x3e493
 * callers: 0x3e619
 * callees: none
 */

int __cdecl sub_3E493(int a1, __int16 a2, int a3)
{
  int result; // eax
  int v5; // ebx

  for ( result = 0; ; ++result )
  {
    v5 = a1++;
    if ( !*MK_FP(a2, v5) || result == a3 )
      break;
  }
  return result;
}
