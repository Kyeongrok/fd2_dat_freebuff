/*
 * func-name: sub_4BF8B
 * func-address: 0x4bf8b
 * callers: 0x4a952, 0x4a985
 * callees: 0x4a314
 */

int __usercall sub_4BF8B@<eax>(__int64 *a1@<eax>, _BYTE *src@<ebp>)
{
  __int16 v2; // cx
  unsigned __int64 v3; // rax
  int v4; // esi
  _BOOL1 v5; // cf
  __int16 n2047; // cx
  int result; // eax
  unsigned __int8 n0x20; // cl
  int v9; // [esp-4h] [ebp-10h]

  v2 = *((_WORD *)a1 + 4);
  v3 = *a1;
  v4 = -2048;
  if ( __CFSHL__(v3, 22) )
  {
    if ( !((_DWORD)v3 << 22) )
      v4 = -4096;
    v5 = __CFADD__(v3, 2048);
    v3 += 2048LL;
    if ( v5 )
    {
      HIDWORD(v3) = 0x80000000;
      ++v2;
    }
  }
  LODWORD(v3) = v4 & v3;
  n2047 = (v2 & 0x7FFF) - 15360;
  if ( (unsigned __int16)n2047 >= 0x7FFu )
  {
    if ( (unsigned __int16)n2047 < 0xC400u )
    {
      result = v3 >> 11;
      if ( n2047 != 17407 )
      {
        v9 = result;
        sub_4A314(8u, n2047, src);
        return v9;
      }
    }
    else if ( n2047 < -52 )
    {
      return 0;
    }
    else
    {
      n0x20 = 12 - n2047;
      if ( n0x20 >= 0x20u )
      {
        n0x20 -= 32;
        v4 = v3;
        v3 = HIDWORD(v3);
      }
      return ((unsigned int)(__PAIR64__(v3, v4) >> n0x20) + __PAIR64__(
                                                              v3 >> (n0x20 & 0x1F),
                                                              __PAIR64__(v3, v4) >> n0x20)) >> 32;
    }
  }
  else if ( n2047 )
  {
    return v3 >> 11;
  }
  else
  {
    return v3 >> 12;
  }
  return result;
}
