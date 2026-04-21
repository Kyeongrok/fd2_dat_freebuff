/*
 * func-name: sub_4DF28
 * func-address: 0x4df28
 * callers: 0x10010, 0x19df7, 0x1f894, 0x25ebb, 0x2968d, 0x2986f
 * callees: none
 */

char __cdecl sub_4DF28(char *a1, int a2)
{
  char *v2; // esi
  char *v3; // edi
  __int16 n165; // dx
  char v6; // al
  char result; // al

  v2 = a1;
  v3 = a1;
  n165 = 165;
  do
  {
    v6 = *v2++;
    n165 = __ROL2__(n165 - 28652, 3);
    result = n165 ^ v6;
    *v3++ = result;
    --a2;
  }
  while ( a2 );
  return result;
}
