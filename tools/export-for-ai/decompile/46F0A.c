/*
 * func-name: sub_46F0A
 * func-address: 0x46f0a
 * callers: 0x3e619
 * callees: 0x46ec2
 */

char *__cdecl sub_46F0A(int n0x65, char *a2, unsigned int n8)
{
  unsigned int n0x65_1; // eax
  char *v4; // edx

  n0x65_1 = n0x65;
  v4 = a2;
  if ( n8 == 10 && n0x65 < 0 )
  {
    n0x65_1 = -n0x65;
    v4 = a2 + 1;
    *a2 = 45;
  }
  sub_46EC2(n0x65_1, v4, n8);
  return a2;
}
