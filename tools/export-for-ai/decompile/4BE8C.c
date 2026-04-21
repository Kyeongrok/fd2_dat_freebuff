/*
 * func-name: sub_4BE8C
 * func-address: 0x4be8c
 * callers: 0x4a7bb, 0x4a7de, 0x4a801, 0x4a821, 0x4a841, 0x4a864, 0x4a887, 0x4a8aa, 0x4a914
 * callees: 0x4a314
 */

int __usercall sub_4BE8C@<eax>(__int64 a1@<edx:eax>, int a2@<ebx>, _BYTE *src@<ebp>)
{
  int v3; // ecx
  signed __int64 v4; // rax
  int n2047; // ecx
  _BOOL1 v6; // zf
  int v7; // et0
  unsigned int v9; // [esp-8h] [ebp-8h]

  v3 = HIDWORD(a1);
  v4 = a1 << 11;
  n2047 = v3 >> 20;
  LOWORD(n2047) = n2047 & 0x7FF;
  if ( (_WORD)n2047 )
  {
    if ( (_WORD)n2047 == 2047 )
    {
      LOWORD(n2047) = 0x7FFF;
      v6 = (v4 & 0x7FFFFFFF00000000LL) == 0;
      if ( (v4 & 0x7FFFFFFF00000000LL) == 0 )
        v6 = (_DWORD)v4 == 0;
      if ( !v6 )
      {
        v9 = v4;
        sub_4A314(1u, n2047, src);
        v4 = __PAIR64__(HIDWORD(v4), v9) | 0x4000000000000000LL;
      }
    }
    else
    {
      LOWORD(n2047) = n2047 + 15360;
    }
    HIDWORD(v4) |= 0x80000000;
  }
  else if ( v4 )
  {
    LOWORD(n2047) = 15361;
    if ( !HIDWORD(v4) )
    {
      v7 = v4;
      LODWORD(v4) = 0;
      HIDWORD(v4) = v7;
      LOWORD(n2047) = 15329;
    }
    while ( v4 >= 0 )
    {
      v4 *= 2LL;
      LOWORD(n2047) = n2047 - 1;
    }
  }
  else
  {
    n2047 = 0;
  }
  *(_QWORD *)a2 = v4;
  *(_WORD *)(a2 + 8) = ((unsigned __int16)(2 * n2047) >> 1) | (__CFADD__(n2047, n2047) << 15);
  return v4;
}
