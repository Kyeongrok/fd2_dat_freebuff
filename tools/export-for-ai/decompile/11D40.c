/*
 * func-name: sub_11D40
 * func-address: 0x11d40
 * callers: 0x1366a, 0x1f1cc, 0x1f30a, 0x1f525, 0x1f81e, 0x1f882, 0x1f894, 0x234bb, 0x24c1e, 0x25ebb, 0x26152, 0x2670e, 0x279bc, 0x29300, 0x29daa, 0x2e9a8, 0x2fb2c, 0x31529, 0x31c49
 * callees: 0x3702f, 0x37ae5
 */

void __fastcall sub_11D40(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  while ( a5 <= a6 )
  {
    outp(968, a5);
    v8 = *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5) - a7;
    if ( v8 < 0 )
      LOBYTE(v8) = 0;
    outp(969, v8);
    v9 = *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5 + 1) - a7;
    if ( v9 < 0 )
      LOBYTE(v9) = 0;
    outp(969, v9);
    v10 = *(unsigned __int8 *)(FDOTHER_DAT + 3 * a5 + 2) - a7;
    if ( v10 < 0 )
      LOBYTE(v10) = 0;
    outp(969, v10);
    ++a5;
  }
  JUMPOUT(0x1951F);
}
