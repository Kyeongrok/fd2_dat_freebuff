/*
 * func-name: sub_4CD98
 * func-address: 0x4cd98
 * callers: 0x4b122
 * callees: none
 */

int __fastcall sub_4CD98(unsigned __int64 a1)
{
  __int16 n0x7FFF; // cx
  unsigned int v2; // ebx
  unsigned __int16 v3; // cx
  __int16 v4; // cx
  int v5; // edi
  __int16 v6; // cx
  __int16 v7; // cx
  int v8; // et2
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rt2
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _BOOL1 v18; // cf
  int v19; // eax
  int v20; // et2
  bool v21; // ett
  _DWORD *v23; // [esp-10h] [ebp-18h]

  n0x7FFF = *(_WORD *)(a1 + 8);
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( n0x7FFF == 0x7FFF )
      return a1;
LABEL_7:
    if ( (n0x7FFF & 0x7FFF) == 0x7FFF )
      goto LABEL_5;
    v18 = __CFADD__(n0x7FFF, n0x7FFF);
    v3 = 2 * n0x7FFF;
    if ( v18 )
      goto LABEL_5;
    v4 = v3 >> 1;
    if ( v4 && !__CFADD__(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 4)) )
    {
LABEL_4:
      *(_WORD *)(a1 + 8) = -1;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
LABEL_5:
      *(_BYTE *)(a1 + 7) |= 0xC0u;
      return a1;
    }
    HIDWORD(a1) = *(_DWORD *)(a1 + 4);
    v5 = 0;
    v23 = (_DWORD *)a1;
    v6 = v4 - 0x3FFF;
    v18 = v6 & 1;
    v7 = v6 >> 1;
    if ( !v18 )
    {
      v18 = BYTE4(a1) & 1;
      HIDWORD(a1) >>= 1;
      v8 = v18 << 31;
      v18 = v2 & 1;
      v2 = (v2 >> 1) | v8;
      v5 = v18 << 31;
    }
    *(_WORD *)(a1 + 8) = v7 + 0x3FFF;
    v9 = HIDWORD(a1);
    LODWORD(a1) = v2;
    v10 = (HIDWORD(a1)++ >> 1) | 0x80000000;
    if ( HIDWORD(a1) )
    {
      --HIDWORD(a1);
      while ( 1 )
      {
        v13 = a1 % v10;
        v11 = a1 / v10;
        v12 = v13;
        v14 = v10 - 1;
        if ( v14 <= v11 )
          break;
        v10 = ((v11 + v14 + 1) >> 1) | (__CFADD__(v11, v14 + 1) << 31);
        a1 = __PAIR64__(v9, v2);
      }
      v15 = v14 + 1;
      v16 = v11;
      v17 = __PAIR64__(v12, v5) / v15;
      v10 = v16 + v15;
    }
    else
    {
      v18 = v2 < v10;
      if ( v2 == v10 )
      {
LABEL_21:
        *v23 = a1;
        v23[1] = v10 + v18;
        return a1;
      }
      v17 = __PAIR64__(v2, v5) / v10;
    }
    v18 = v10 & 1;
    v10 = (v10 >> 1) | 0x80000000;
    v20 = v18 << 31;
    v18 = v17 & 1;
    v19 = (v17 >> 1) | v20;
    v21 = v18;
    v18 = __CFADD__(v18, v19);
    LODWORD(a1) = v21 + v19;
    goto LABEL_21;
  }
  if ( 2 * n0x7FFF )
    goto LABEL_4;
  return a1;
}
