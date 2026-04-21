/*
 * func-name: sub_46E61
 * func-address: 0x46e61
 * callers: 0x3e4e3, 0x3e536, 0x3e619
 * callees: 0x46e19
 */

char *__cdecl sub_46E61(int a1, char *a2, unsigned int n16)
{
  unsigned int v3; // eax
  char *v4; // edx

  v3 = a1;
  v4 = a2;
  if ( n16 == 10 && a1 < 0 )
  {
    v3 = -a1;
    v4 = a2 + 1;
    *a2 = 45;
  }
  sub_46E19(v3, v4, n16);
  return a2;
}
