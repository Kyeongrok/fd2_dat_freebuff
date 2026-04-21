/*
 * func-name: sub_49CF5
 * func-address: 0x49cf5
 * callers: 0x46306
 * callees: none
 */

char __fastcall sub_49CF5(int a1, __int16 a2)
{
  unsigned __int32 v3; // eax

  if ( byte_53921 )
  {
    __asm { int     2Fh }
    __asm { int     2Fh }
    return 1;
  }
  else
  {
    if ( byte_53920 )
    {
      *MK_FP(a2, a1 + 62) = 0;
      *MK_FP(a2, a1 + 64) = *MK_FP(a2, a1 + 64) & 0xFB;
      v3 = __readcr0();
      LOBYTE(v3) = v3 & 0xFB;
      __writecr0(v3);
      __asm { int     21h; DOS - GET DOS VERSION }
    }
    return 0;
  }
}
