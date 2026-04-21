/*
 * func-name: sub_3E4BC
 * func-address: 0x3e4bc
 * callers: 0x3e619
 * callees: none
 */

void __cdecl sub_3E4BC(int a1, __int16 a2, int a3)
{
  int i; // eax
  int v5; // ebx

  for ( i = 0; ; ++i )
  {
    v5 = a1;
    a1 += 2;
    if ( !*MK_FP(a2, v5) || i == a3 )
      break;
  }
  JUMPOUT(0x3E4B7);
}
