/*
 * func-name: sub_3EE4D
 * func-address: 0x3ee4d
 * callers: 0x381d8
 * callees: none
 */

// write access to const memory has been detected, the output may be wrong!
int __cdecl sub_3EE4D(int a1, int a2, __int16 a3)
{
  int n517; // eax

  if ( dword_52BF0 == -1 )
  {
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { lar     ecx, edx }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { lar     ecx, edx }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { lar     ecx, edx }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    __asm { lar     ecx, edx }
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    dword_3EE14 = (int)&unk_52BFC - ((unsigned int)&unk_52BFC & 0xFFFFFFF0) + 512;
    word_3EE0E = 0;
    word_3EDFF = 0;
    word_3EE34 = 0;
    word_3EE3B = a3;
    word_3EE2A = (unsigned __int16)&dword_3EDF8 - ((unsigned int)&dword_3EDF8 & 0xFFFFFFF0) + 74;
    dword_52BF0 = a1;
    __asm { int     31h; DPMI Services   ax=func xxxxh }
    n49407 = 49407;
    _DS___2 = __DS__;
    n517 = 517;
    __asm { int     31h; DPMI Services   ax=func xxxxh }
  }
  return n517;
}
