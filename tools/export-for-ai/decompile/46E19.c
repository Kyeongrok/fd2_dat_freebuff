/*
 * func-name: sub_46E19
 * func-address: 0x46e19
 * callers: 0x46e61
 * callees: none
 */

char *__cdecl sub_46E19(unsigned int a1, char *a2, unsigned int a3)
{
  char *v4; // esi
  char *v5; // ecx
  char v6; // al
  char v8; // [esp+1h] [ebp-27h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  v4 = a2;
  v5 = &v8;
  do
  {
    v9 = a1 / a3;
    *v5 = byte_46DF4[a1 % a3];
    a1 = v9;
    ++v5;
  }
  while ( v9 );
  do
  {
    v6 = *--v5;
    *v4++ = *v5;
  }
  while ( v6 );
  return a2;
}
