/*
 * func-name: sub_4C2A4
 * func-address: 0x4c2a4
 * callers: 0x4b681
 * callees: 0x4b852, 0x4ba87, 0x4c35a
 */

__int16 __fastcall sub_4C2A4(__int64 a1, int a2)
{
  __int16 v2; // cx

  if ( 2 * *(_WORD *)(a1 + 8) )
  {
    v2 = 2 * *(_WORD *)(HIDWORD(a1) + 8);
    if ( v2 )
    {
      HIBYTE(v2) = *(_BYTE *)(a1 + 9);
      a1 = sub_4BA87(a1, (_DWORD *)HIDWORD(a1));
      LOWORD(a1) = sub_4C35A(a2, HIDWORD(a1));
      BYTE4(a1) = *(_BYTE *)(a2 + 9);
      if ( v2 < 0 )
      {
        if ( SBYTE4(a1) > 0 )
          LOWORD(a1) = sub_4B852(a2, SHIDWORD(a1), a2, v2, 560513589, -921707870, 49152);
      }
      else if ( (a1 & 0x8000000000LL) != 0 )
      {
        LOWORD(a1) = sub_4B852(a2, SHIDWORD(a1), a2, v2, 560513589, -921707870, 0x4000);
      }
    }
    else
    {
      LOWORD(a1) = *(_WORD *)(a1 + 8) & 0x8000 | 0x3FFF;
      *(_WORD *)(a2 + 8) = a1;
      *(_DWORD *)(a2 + 4) = -921707870;
      *(_DWORD *)a2 = 560513589;
    }
  }
  else if ( *(char *)(HIDWORD(a1) + 9) >= 0 )
  {
    *(_WORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  else
  {
    *(_WORD *)(a2 + 8) = 0x4000;
    *(_DWORD *)(a2 + 4) = -921707870;
    *(_DWORD *)a2 = 560513589;
  }
  return a1;
}
