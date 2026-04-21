/*
 * func-name: sub_3EDA5
 * func-address: 0x3eda5
 * callers: 0x38074
 * callees: none
 */

int __fastcall sub_3EDA5(int a1, __int16 a2, int a3, int a4)
{
  int v4; // ecx

  __asm { int     31h; DPMI Services   ax=func xxxxh }
  v4 = a4 << 16;
  LOWORD(v4) = a2;
  __asm { int     21h; DOS - 2+ - GET INTERRUPT VECTOR }
  return v4;
}
