/*
 * func-name: sub_25089
 * func-address: 0x25089
 * callers: 0x250cc, 0x25757
 * callees: 0x3702f
 */

int __fastcall sub_25089(__int32 a1, int a2, int a3, int a4)
{
  unsigned __int8 i; // bl
  int v5; // eax
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= dword_53BFB )
      break;
    v5 = 80 * i + dword_53BF7;
    *(_BYTE *)(v5 + 5) = 0;
    *(_WORD *)(v5 + 64) = *(_WORD *)(v5 + 66);
    *(_WORD *)(v5 + 68) = *(_WORD *)(v5 + 70);
  }
  return result;
}
