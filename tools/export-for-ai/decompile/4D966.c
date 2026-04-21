/*
 * func-name: sub_4D966
 * func-address: 0x4d966
 * callers: 0x4d25b
 * callees: 0x400cc, 0x4d731, 0x4d841, 0x4dd31, 0x4de5a, 0x4deb4
 */

int __cdecl sub_4D966(double a1, int n16_2, int *a3, _DWORD *a4, int n70, int a6)
{
  int n16; // ebx
  int v9; // edi
  int v10; // eax
  double v11; // rax
  int v12; // et2
  int n16_1; // edi
  int v15; // eax
  _BYTE v17[20]; // [esp+0h] [ebp-30h] BYREF
  int v18; // [esp+14h] [ebp-1Ch] BYREF
  __int16 v19; // [esp+18h] [ebp-18h]
  __int16 v20; // [esp+1Ah] [ebp-16h]
  double v21; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+24h] [ebp-Ch] BYREF
  char v23; // [esp+2Ch] [ebp-4h]

  n16 = n16_2;
  *a4 = 0;
  *a3 = 0;
  if ( _Nan_Inf(LODWORD(a1), HIDWORD(a1), a6) )
    return a6;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  __asm
  {
    fldz
    fcomp   [ebp+arg0]
    fnstsw  ax
  }
  if ( (_AX & 0x4000) == 0 )
  {
    if ( (_AX & 0x100) == 0 && (_AX & 0x4000) == 0 )
    {
      __asm
      {
        fld     [ebp+arg0]
        fchs
      }
      *a4 = -1;
      __asm { fstp    [ebp+arg0] }
    }
    frexp(a1, (int)a3);
    v9 = *a3;
    if ( *a3 < 0 )
      v9 = -v9;
    v10 = 3 * v9 + 5;
    v12 = v10 % 10;
    LODWORD(v11) = v10 / 10;
    HIDWORD(v11) = v12;
    n16_1 = LODWORD(v11);
    if ( *a3 < 0 )
      n16_1 = -LODWORD(v11);
    *a3 = n16_1;
    if ( n70 == 70 )
      n16 = n16_1 + n16_2;
    if ( n16 >= 0 )
    {
      if ( n16 > 16 )
        n16 = 16;
      LODWORD(v11) = modf(a1, (int)&v22);
      v21 = v11;
      __asm { fld     [ebp+var_14] }
      v23 = 0;
      __asm
      {
        fldz
        fcompp
        fnstsw  ax
      }
      if ( (_AX & 0x4000) != 0 && n16 > n16_1 )
      {
        v23 = 1;
        n16 = n16_1;
      }
      v15 = Scale(*a3, a1, n16, (int)&v18);
      if ( v15 )
      {
        *a3 += v15;
        if ( n70 == 70 || v23 )
          n16 += v15;
        if ( n16 >= 1 )
        {
          if ( n16 > 16 )
            n16 = 16;
        }
        else
        {
          n16 = 1;
        }
        if ( Scale(*a3, a1, n16, (int)&v18) > 0 )
        {
          ++n16;
          ++*a3;
        }
      }
    }
    if ( !(SHIWORD(v18) | (__int16)v18 | v19 | v20) )
    {
      *a4 = 0;
      *a3 = 0;
      if ( n70 == 70 )
        n16 -= n16_1;
    }
  }
  if ( n16 >= 1 )
  {
    if ( n16 > 16 )
      n16 = 16;
  }
  else
  {
    n16 = 1;
  }
  _Bin2String(&v18, v17, n16);
  return strcpy(a6, v17);
}
