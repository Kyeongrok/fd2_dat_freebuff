/*
 * func-name: sub_49C26
 * func-address: 0x49c26
 * callers: 0x461b7
 * callees: 0x4d656
 */

char __fastcall sub_49C26(int a1, __int16 a2)
{
  unsigned __int32 v2; // eax

  __asm { int     2Fh; - Multiplex - MS WINDOWS - ENHANCED WINDOWS INSTALLATION CHECK }
  if ( a1 || a2 )
  {
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    dos_setvect(7, _int7, __CS__);
    *MK_FP(a2, a1 + 62) = 1;
    *MK_FP(a2, a1 + 64) = *MK_FP(a2, a1 + 64) | 4;
    v2 = __readcr0();
    LOBYTE(v2) = v2 | 4;
    __writecr0(v2);
    __asm { int     21h; DOS - GET DOS VERSION }
    byte_53920 = 1;
  }
  return 0;
}
