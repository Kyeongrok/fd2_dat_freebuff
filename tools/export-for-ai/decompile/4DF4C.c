/*
 * func-name: sub_4DF4C
 * func-address: 0x4df4c
 * callers: 0x10010, 0x1088d, 0x10c50, 0x14121, 0x14237, 0x14b78, 0x15055, 0x15311, 0x1567e, 0x1598a, 0x18890, 0x18d8c, 0x1bbdc, 0x1cff0, 0x24754
 * callees: none
 */

char __cdecl sub_4DF4C(unsigned __int8 *a1)
{
  int v1; // ecx
  unsigned __int8 *v2; // edi
  char result; // al

  v1 = (unsigned __int16)(a1[2] * *a1);
  v2 = a1 + 4;
  result = -1;
  do
  {
    v2[3] = -1;
    v2[2] &= 0x1Fu;
    v2[1] &= 3u;
    v2 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
