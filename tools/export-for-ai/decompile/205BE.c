/*
 * func-name: sub_205BE
 * func-address: 0x205be
 * callers: 0x205b4, 0x206c5, 0x20707, 0x2073d, 0x20765, 0x20822, 0x2084a, 0x20872, 0x20926, 0x20957, 0x20a51, 0x20a87, 0x20b14, 0x20b3c
 * callees: 0x3702f
 */

int __fastcall sub_205BE(__int32 a1, int a2, int a3, int a4)
{
  int n6; // edx
  int v5; // eax
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  n2_0 = 2;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v5 = dword_53A45 + 80 * n6;
    if ( !*(_BYTE *)(v5 + 6) && (*(_BYTE *)(v5 + 5) & 1) == 0 )
      n2_0 = *(unsigned __int8 *)(v5 + 6);
  }
  result = dword_53A45;
  if ( (*(_BYTE *)(dword_53A45 + 5) & 1) != 0 )
    n2_0 = 1;
  return result;
}
