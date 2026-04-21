/*
 * func-name: sub_3E4E3
 * func-address: 0x3e4e3
 * callers: 0x3e619
 * callees: 0x37b55, 0x46e61
 */

int __cdecl sub_3E4E3(int a1, _BYTE *a2, int a3)
{
  int v3; // edx
  int result; // eax
  _BYTE *v5; // edx
  _BYTE *v6; // ebx
  _BYTE *v7; // edx

  sub_46E61(a1, a2, 16);
  v3 = strlen(a2);
  result = a3 - 1;
  v5 = &a2[v3];
  v6 = &a2[a3 - 1];
  while ( v5 != a2 )
  {
    --v5;
    --result;
    *v6-- = *v5;
  }
  v7 = &a2[result];
  while ( result >= 0 )
  {
    --result;
    *v7-- = 48;
  }
  a2[a3] = 0;
  return result;
}
