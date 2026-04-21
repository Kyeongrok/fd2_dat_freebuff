/*
 * func-name: sub_3EC7C
 * func-address: 0x3ec7c
 * callers: 0x3fca9
 * callees: 0x3899a, 0x3f446
 */

void __fastcall sub_3EC7C(int a1, unsigned __int16 a2)
{
  unsigned int v2; // kr00_4
  _BOOL1 v3; // zf
  char v4; // [esp-7h] [ebp-13h]

  v2 = __readeflags();
  v4 = BYTE1(v2);
  _disable();
  _DS___0 = __DS__;
  sub_3F446();
  dword_52BE6 = 0;
  dword_52BEA = 0;
  n0xD68D = -1;
  dword_52BF0 = -1;
  memset(buf__1, 0, 0x40u);
  memset(buf__0, 0, 0x40u);
  memset(buf__2, 0, 0x40u);
  memset(buf__3, 0, 0x40u);
  __asm { int     31h; DPMI Services   ax=func xxxxh }
  __asm { int     21h; DOS - 2+ - GET INTERRUPT VECTOR }
  n8_2 = 8;
  _DS___1 = __DS__;
  dword_52BDA = a2;
  __asm { int     21h; DOS - SET INTERRUPT VECTOR }
  n2_4 = 2;
  sub_3899A(9480, 60, 54925);
  v3 = (v4 & 2) == 0;
  _disable();
  if ( !v3 )
    _enable();
  __writeeflags(v2);
}
