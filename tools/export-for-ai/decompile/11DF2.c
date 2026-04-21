/*
 * func-name: sub_11DF2
 * func-address: 0x11df2
 * callers: 0x15055, 0x1ecc7, 0x1f894, 0x24336, 0x24618, 0x24754, 0x25052, 0x2548c, 0x25757, 0x28b41, 0x2fb2c, 0x31529, 0x336a0, 0x33af1, 0x33c9d, 0x35b78, 0x361b0
 * callees: 0x3702f, 0x37ae5
 */

void __fastcall sub_11DF2(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int n63; // eax
  int n63_1; // eax
  int n63_2; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  while ( a5 <= a6 )
  {
    outp(968, a5);
    n63 = a7 + *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5);
    if ( n63 > 63 )
      LOBYTE(n63) = 63;
    outp(969, n63);
    n63_1 = a7 + *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5 + 1);
    if ( n63_1 > 63 )
      LOBYTE(n63_1) = 63;
    outp(969, n63_1);
    n63_2 = a7 + *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5 + 2);
    if ( n63_2 > 63 )
      LOBYTE(n63_2) = 63;
    outp(969, n63_2);
    ++a5;
  }
  JUMPOUT(0x1951F);
}
