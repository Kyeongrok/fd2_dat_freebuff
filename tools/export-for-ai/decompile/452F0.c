/*
 * func-name: sub_452F0
 * func-address: 0x452f0
 * callers: none
 * callees: 0x3771c, 0x42270, 0x424b0
 */

int __cdecl sub_452F0(_DWORD *a1, int a2)
{
  int v2; // eax
  unsigned int n512; // ebp
  int result; // eax
  int v5; // [esp+0h] [ebp-14h] BYREF
  int v6; // [esp+4h] [ebp-10h]

  ++a1[5];
  v5 = a2 + 1;
  v2 = sub_424B0(&v5);
  v6 = a2;
  n512 = v2 + v5 - a2;
  sub_42270((int)a1);
  if ( n512 > 0x200 )
    n512 = 512;
  memmove(a1[2] + 256, v6, n512);
  ++a1[106];
  sub_42270((int)a1);
  result = a1[5] - 1;
  a1[5] = result;
  return result;
}
