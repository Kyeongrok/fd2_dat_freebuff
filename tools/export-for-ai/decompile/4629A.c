/*
 * func-name: sub_4629A
 * func-address: 0x4629a
 * callers: 0x461b7
 * callees: 0x462e6
 */

__int16 __fastcall sub_4629A(int a1, int a2, int a3)
{
  __int16 n9476; // ax
  unsigned __int32 v4; // ecx

  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  dword_53770 = a3;
  _ES___0 = __ES__;
  n9476 = 9476;
  if ( n9_1 < 3 )
  {
    __asm { int     21h; DOS - }
    v4 = __readcr0();
    __writecr0(v4 & 0xFFFFFFF9 | 4);
  }
  else
  {
    __asm { int     21h; DOS - SET INTERRUPT VECTOR }
    return sub_462E6(9476);
  }
  return n9476;
}
