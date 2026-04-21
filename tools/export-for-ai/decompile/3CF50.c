/*
 * func-name: sub_3CF50
 * func-address: 0x3cf50
 * callers: 0x3645d, 0x3767e, 0x37940, 0x3d3a6, 0x3de66, 0x3e103
 * callees: 0x46632
 */

int __cdecl sub_3CF50(int a1, __int16 a2, int a3)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h]

  _EAX = a3;
  BYTE1(_EAX) = 66;
  __asm { int     21h; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) }
  LOWORD(v6) = _EAX;
  HIWORD(v6) = a2;
  __asm { rcl     eax, 1 }
  v4 = __ROR4__(_EAX, 1);
  if ( v4 >= 0 )
    return v6;
  set_errno((unsigned __int16)v4);
  return -1;
}
