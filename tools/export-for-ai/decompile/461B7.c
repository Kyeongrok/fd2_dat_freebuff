/*
 * func-name: sub_461B7
 * func-address: 0x461b7
 * callers: 0x46186
 * callees: 0x4627f, 0x4629a, 0x462e6, 0x49c26
 */

__int16 __fastcall sub_461B7(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // eax
  __int16 result; // ax
  _BYTE v7[2]; // [esp+0h] [ebp-8h] BYREF
  _BYTE v8[6]; // [esp+2h] [ebp-6h]

  n3_11 = 3;
  byte_53778 = 1;
  __asm { smsw    word_53776 }
  word_53776 &= 6u;
  __sidt(v7);
  v4 = (_DWORD *)(*(_DWORD *)v8 + 56);
  if ( byte_52833 )
  {
    v5 = sub_4627F(a1, a2, v4);
    __ES__ = _ES_;
    *MK_FP(_ES_, v4) = a2;
    v4[1] = a4;
    return sub_462E6(v5);
  }
  else if ( n9_1 )
  {
    if ( n9_1 == 9 )
    {
      sub_4627F(a1, a2, v4);
      *v4 = a2;
      v4[1] = a4;
      return (*(int (__fastcall **)(int))(dword_527EC + 48))(3586);
    }
    else if ( n9_1 == 1 )
    {
      LOWORD(a2) = word_527F0;
      return sub_49C26(0, a2, v4);
    }
    else
    {
      LOWORD(a2) = 0;
      result = sub_49C26(0, a2, v4);
      if ( (_BYTE)result != 1 )
        return sub_4629A();
    }
  }
  else
  {
    *(_DWORD *)&v8[2] = (unsigned __int16)__DS__;
    __asm { int     21h; DOS - SET INTERRUPT VECTOR }
    result = -3324;
    __asm { int     21h; DOS - Novell Advanced NetWare 2.0+ - FILE SERVER FILE COPY }
  }
  return result;
}
