/*
 * func-name: sub_46380
 * func-address: 0x46380
 * callers: 0x46306
 * callees: 0x463ba
 */

__int16 __fastcall sub_46380(int a1, int a2, int a3, __int16 a4)
{
  __int16 n9476; // ax
  unsigned __int32 v5; // ecx

  LOBYTE(a4) = 7;
  n9476 = 9476;
  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  if ( n9_1 >= 3 )
    return sub_463BA(9476, dword_53770, a3, a4);
  v5 = __readcr0();
  v5 &= 0xFFFFFFF9;
  LOWORD(v5) = word_53776 | v5;
  __writecr0(v5);
  return n9476;
}
