/*
 * func-name: sub_3F1ED
 * func-address: 0x3f1ed
 * callers: 0x383f1
 * callees: none
 */

unsigned __int8 __cdecl sub_3F1ED(int a1)
{
  unsigned __int8 result; // al
  unsigned __int16 v2; // dx
  int i; // ecx
  unsigned __int8 v4; // al

  result = MEMORY[0x463];
  v2 = MEMORY[0x463] + 6;
  for ( i = a1; i; --i )
  {
    do
      v4 = __inbyte(v2);
    while ( (v4 & 8) == 0 );
    do
      result = __inbyte(v2);
    while ( (result & 8) != 0 );
  }
  return result;
}
