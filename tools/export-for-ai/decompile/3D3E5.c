/*
 * func-name: sub_3D3E5
 * func-address: 0x3d3e5
 * callers: 0x377a3
 * callees: 0x3705f, 0x3db46, 0x46632, 0x466a2, 0x4670c
 */

int __usercall sub_3D3E5@<eax>(int n512_8@<edx>, int size@<ebx>, int a3, char *a4, unsigned int n512_10)
{
  int n512_9; // eax
  unsigned int n0xB0; // esi
  int n512; // edi
  int size_1; // eax
  void *v13; // esp
  int n512_3; // esi
  unsigned int n512_13; // eax
  int *p_n512_1; // eax
  int n512_1; // eax
  int n512_5; // esi
  int *p_n512_2; // eax
  char v21; // dl
  int n512_2; // eax
  int n512_4; // eax
  int n512_7; // edi
  int n512_6; // [esp+0h] [ebp-18h] BYREF
  int v28; // [esp+4h] [ebp-14h]
  int *p_n512; // [esp+8h] [ebp-10h]
  char *v30; // [esp+Ch] [ebp-Ch]
  unsigned int n512_12; // [esp+10h] [ebp-8h]
  unsigned int n512_11; // [esp+14h] [ebp-4h]

  _EAX = _IOMode(a3);
  v28 = _EAX;
  if ( !_EAX )
  {
    *(_DWORD *)sub_3DB46(n512_6) = 4;
    return -1;
  }
  if ( (_EAX & 2) == 0 )
  {
    *(_DWORD *)sub_3DB46(n512_6) = 6;
    return -1;
  }
  if ( (_EAX & 0x80u) != 0 )
  {
    LOWORD(size) = a3;
    LOWORD(_EAX) = 16898;
    _DX = 0;
    __asm
    {
      int     21h; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK)
      rcl     dx, 1
    }
    n512_8 = (unsigned __int16)__ROR2__(_DX, 1) << 16;
    LOWORD(n512_8) = 16898;
    n512_6 = n512_8;
    if ( n512_8 < 0 )
      return set_errno((unsigned __int16)n512_6);
  }
  if ( (v28 & 0x40) != 0 )
  {
    BYTE1(_EAX) = 64;
    __asm
    {
      int     21h; DOS - 2+ - WRITE TO FILE WITH HANDLE
      rcl     eax, 1
    }
    n512_9 = __ROR4__(_EAX, 1);
    n512_6 = n512_9;
    if ( n512_9 >= 0 )
    {
      if ( n512_9 != n512_10 )
      {
        n512_10 = n512_9;
        *(_DWORD *)sub_3DB46(n512_6) = 12;
      }
      return n512_10;
    }
    return set_errno((unsigned __int16)n512_6);
  }
  n0xB0 = sub_4670C(_EAX, n512_8, size);
  if ( n0xB0 < 0xB0 )
    JUMPOUT_w_8();
  n512 = 512;
  if ( n0xB0 < 0x230 )
    n512 = 128;
  size_1 = n512 + 3;
  LOBYTE(size_1) = (n512 + 3) & 0xFC;
  v13 = alloca(size_1);
  n512_3 = 0;
  n512_11 = 0;
  n512_12 = 0;
  p_n512 = &n512_6;
  v30 = a4;
  while ( 1 )
  {
    n512_13 = n512_11;
    if ( n512_11 >= n512_10 )
      break;
    if ( *v30 == 10 )
    {
      p_n512_1 = p_n512;
      *((_BYTE *)p_n512 + n512_3) = 13;
      if ( ++n512_3 == n512 )
      {
        BYTE1(p_n512_1) = 64;
        __asm
        {
          int     21h; DOS - 2+ - WRITE TO FILE WITH HANDLE
          rcl     eax, 1
        }
        n512_1 = __ROR4__(_EAX, 1);
        n512_5 = n512_1;
        n512_6 = n512_1;
        if ( n512_1 < 0 )
          return set_errno((unsigned __int16)n512_6);
        if ( n512_1 != n512 )
          goto LABEL_23;
        n512_3 = 0;
        n512_12 = n512_11;
      }
    }
    p_n512_2 = p_n512;
    v21 = *v30;
    ++n512_11;
    *((_BYTE *)p_n512 + n512_3++) = v21;
    ++v30;
    if ( n512_3 == n512 )
    {
      BYTE1(p_n512_2) = 64;
      __asm
      {
        int     21h; DOS - 2+ - WRITE TO FILE WITH HANDLE
        rcl     eax, 1
      }
      n512_2 = __ROR4__(_EAX, 1);
      n512_5 = n512_2;
      n512_6 = n512_2;
      if ( n512_2 < 0 )
        return set_errno((unsigned __int16)n512_6);
      if ( n512_2 != n512 )
      {
LABEL_23:
        *(_DWORD *)sub_3DB46(n512_6) = 12;
        return n512_5 + n512_12;
      }
      n512_3 = 0;
      n512_12 = n512_11;
    }
  }
  if ( !n512_3 )
    return n512_10;
  BYTE1(n512_13) = 64;
  __asm
  {
    int     21h; DOS - 2+ - WRITE TO FILE WITH HANDLE
    rcl     eax, 1
  }
  n512_4 = __ROR4__(_EAX, 1);
  n512_7 = n512_4;
  n512_6 = n512_4;
  if ( n512_4 < 0 )
    return set_errno((unsigned __int16)n512_6);
  if ( n512_4 != n512_3 )
  {
    *(_DWORD *)sub_3DB46(n512_6) = 12;
    return n512_7 + n512_12;
  }
  return n512_10;
}
