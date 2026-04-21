/*
 * func-name: sub_4C117
 * func-address: 0x4c117
 * callers: 0x4a75b, 0x4a797, 0x4ab58, 0x4aba0, 0x4ac14, 0x4b681
 * callees: none
 */

unsigned int __fastcall sub_4C117(unsigned int result, __int16 n1024)
{
  int v3; // ebx
  _BOOL1 v4; // zf
  __int16 n16447; // bx
  char v6; // cc
  __int16 v7; // bx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  _BOOL1 v11; // tt
  _BOOL1 v12; // zf
  _BOOL1 v13; // cf
  int v14; // esi
  int v15; // eax
  unsigned int v16; // esi
  _BOOL1 v17; // tt
  _BOOL1 v18; // zf

  _EDI = result;
  v3 = *(unsigned __int16 *)(result + 8);
  v4 = n1024 == 1024;
  if ( n1024 != 1024 )
    v4 = n1024 == 2048;
  if ( v4 && (v3 & 0x8000) != 0 )
    n1024 ^= 0xC00u;
  if ( n1024 == 3072 )
    n1024 = 1024;
  n16447 = v3 & 0x7FFF;
  v6 = n16447 < 16447;
  v7 = n16447 - 16447;
  if ( v6 )
  {
    v8 = *(_DWORD *)result;
    v6 = ((__int16)(v7 + 32) < 0) ^ __OFADD__(32, v7);
    LOWORD(v3) = v7 + 32;
    if ( !v6 )
    {
      v9 = dword_4C097[v3];
      v10 = v9 & v8;
      *(_DWORD *)_EDI ^= v10;
      result = v9 + 1;
      if ( n1024 == 1024 )
        return result;
      if ( !n1024 )
      {
        v10 *= 2;
        if ( result > v10 )
          return result;
        if ( result == v10 )
        {
          v11 = __CFSHL__(result, 1);
          result = __ROL4__(result, 1);
          if ( v11 )
            v12 = (result & *(_DWORD *)(_EDI + 4)) == 0;
          else
            v12 = (result & *(_DWORD *)_EDI) == 0;
          if ( v12 )
            return result;
          result = __ROR4__(result, 1);
        }
      }
      if ( v10 )
      {
        v13 = __CFADD__(result, *(_QWORD *)_EDI);
        *(_QWORD *)_EDI += result;
        if ( v13 )
        {
          __asm { rcr     dword ptr [edi+4], 1 }
          ++*(_WORD *)(_EDI + 8);
        }
      }
      return result;
    }
    *(_DWORD *)result = 0;
    v14 = *(_DWORD *)(result + 4);
    v6 = ((__int16)(v3 + 32) < 0) ^ __OFADD__(32, (_WORD)v3);
    LOWORD(v3) = v3 + 32;
    if ( v6 )
    {
      if ( n1024 != 1024 && (n1024 || (_WORD)v3 == 0xFFFF && (v14 != 0x80000000 || v8)) )
      {
        *(_DWORD *)(result + 4) = 0x80000000;
        *(_WORD *)(result + 8) |= 0x3FFFu;
      }
      else
      {
        result = 0;
        *(_DWORD *)(_EDI + 4) = 0;
        *(_WORD *)(_EDI + 8) = 0;
      }
      return result;
    }
    v15 = dword_4C097[v3];
    v16 = v15 & v14;
    *(_DWORD *)(_EDI + 4) ^= v16;
    result = v15 + 1;
    if ( n1024 == 1024 )
      return result;
    if ( !n1024 )
    {
      v17 = __CFSHL__(v8, 1);
      v8 = __ROL4__(v8, 1);
      v16 += v17 + v16;
      if ( result > v16 )
        return result;
      if ( result == v16 )
      {
        if ( v8 )
        {
LABEL_34:
          v13 = __CFADD__(result, *(_DWORD *)(_EDI + 4));
          *(_DWORD *)(_EDI + 4) += result;
          if ( v13 )
          {
            __asm { rcr     dword ptr [edi+4], 1 }
            ++*(_WORD *)(_EDI + 8);
          }
          return result;
        }
        v13 = __CFADD__(result, result);
        v18 = 2 * result == 0;
        result *= 2;
        if ( !v13 )
          v18 = (result & *(_DWORD *)(_EDI + 4)) == 0;
        if ( v18 )
          return result;
        result >>= 1;
      }
    }
    if ( !(v16 | v8) )
      return result;
    goto LABEL_34;
  }
  return result;
}
