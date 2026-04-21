/*
 * func-name: sub_46EC2
 * func-address: 0x46ec2
 * callers: 0x3e619, 0x46f0a
 * callees: none
 */

char *__cdecl sub_46EC2(unsigned int n0x65, char *a2, unsigned int n10)
{
  char *v4; // esi
  char *v5; // ecx
  unsigned int v6; // et2
  char v7; // al
  char v9; // [esp+1h] [ebp-27h] BYREF
  unsigned int v10; // [esp+24h] [ebp-4h]

  v4 = a2;
  v5 = &v9;
  do
  {
    v6 = n0x65 % n10;
    n0x65 /= n10;
    v10 = v6;
    *v5++ = byte_46E9D[v6];
  }
  while ( n0x65 );
  do
  {
    v7 = *--v5;
    *v4++ = *v5;
  }
  while ( v7 );
  return a2;
}
