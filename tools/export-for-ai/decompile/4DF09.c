/*
 * func-name: sub_4DF09
 * func-address: 0x4df09
 * callers: 0x10010, 0x19df7, 0x1f894, 0x2968d
 * callees: none
 */

int __cdecl sub_4DF09(_BYTE *a1, int n22987)
{
  int v3; // ecx
  int v4; // ebx
  int v5; // eax

  v3 = n22987 - 4;
  v4 = 0;
  v5 = 0;
  do
  {
    LOBYTE(v5) = *a1++;
    v4 += v5;
    --v3;
  }
  while ( v3 );
  return v4;
}
