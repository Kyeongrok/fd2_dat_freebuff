/*
 * func-name: sub_3645D
 * func-address: 0x3645d
 * callers: 0x3669a, 0x367d1
 * callees: 0x3cf26, 0x3cf50, 0x3cf9b
 */

int __cdecl sub_3645D(int a1, int a2, char a3, int a4, int a5)
{
  if ( (a3 & 1) != 0 )
  {
    memcpy(a4, a1 + a2, a5);
  }
  else
  {
    sub_3CF50(a1, a2, 0);
    read(a1, a4, a5);
  }
  return a2 + a5;
}
