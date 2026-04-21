/*
 * func-name: sub_203BD
 * func-address: 0x203bd
 * callers: 0x1ecc7
 * callees: 0x3702f, 0x37ae5
 */

int __fastcall sub_203BD(__int32 a1, int a2, int a3, int a4, char a5, char n32, char a7)
{
  int result; // eax
  int n256; // ebx

  result = sub_3702F(a1, a2, a3, a4, 28);
  for ( n256 = 0; n256 < 256; ++n256 )
  {
    outp(968, n256);
    outp(969, a5);
    outp(969, n32);
    result = outp(969, a7);
  }
  return result;
}
