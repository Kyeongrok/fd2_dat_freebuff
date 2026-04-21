/*
 * func-name: sub_4BC86
 * func-address: 0x4bc86
 * callers: 0x4bc5c, 0x4c35a, 0x4c6a5, 0x4c6e8, 0x4c980, 0x4cbc4, 0x4ce84, 0x4ced6
 * callees: none
 */

int __usercall sub_4BC86@<eax>(
        unsigned __int64 a1@<edx:eax>,
        unsigned int a2@<ecx>,
        unsigned int a3@<ebx>,
        int a4@<esi>)
{
  _BOOL1 v4; // cf
  unsigned __int16 v5; // si
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int n0x3FFE; // ecx
  __int16 n0x7FFF; // cx
  unsigned __int64 v11; // rax
  int v12; // esi
  int v13; // et1
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr08_8
  int v20; // ebx
  __int16 n0x7FFF_2; // cx
  _BOOL1 v22; // cf
  bool v23; // ett
  _BOOL1 v24; // cf
  int v25; // ett
  int v26; // et2
  __int16 v27; // cx
  unsigned __int64 v29; // [esp-18h] [ebp-18h]
  unsigned int v30; // [esp-10h] [ebp-10h]
  __int16 n0x7FFF_1; // [esp-Ch] [ebp-Ch]

  if ( !a1 )
  {
    v4 = __CFADD__((_WORD)a4, (_WORD)a4);
    v5 = 2 * a4;
    if ( !v5 )
      return a1;
    LOWORD(a4) = (v5 >> 1) | (v4 << 15);
  }
  if ( a2 || a3 || (a4 & 0x7FFF0000) != 0 )
  {
    v6 = a4;
    v7 = a2;
    n0x3FFE = (((int)__ROL4__(v6, 16) >> 16) & 0x80007FFF) + ((v6 >> 16) & 0x80007FFF);
    v4 = (unsigned __int16)n0x3FFE < 0x3FFEu;
    n0x7FFF = n0x3FFE - 16382;
    if ( !v4 && (unsigned __int16)n0x7FFF >= 0x7FFFu )
      goto LABEL_25;
    if ( n0x7FFF < -64 )
    {
      LODWORD(a1) = 0;
      return a1;
    }
    n0x7FFF_1 = n0x7FFF;
    v30 = v7;
    v29 = a1;
    v11 = a3 * (unsigned __int64)(unsigned int)a1;
    v13 = v11;
    LODWORD(v11) = v7;
    v12 = v13;
    v14 = HIDWORD(v11);
    v15 = (unsigned int)v29 * (unsigned __int64)(unsigned int)v11;
    v4 = __CFADD__((unsigned int)v15, __PAIR64__(HIDWORD(v15), v14));
    v17 = (v15 + v14) >> 32;
    v16 = v15 + v14;
    v18 = HIDWORD(v29) * (unsigned __int64)a3;
    v19 = v18 + __PAIR64__(v17, v16);
    a1 = __PAIR64__(__CFADD__(v18, __PAIR64__(v17, v16)) + (unsigned int)v4, (v18 + __PAIR64__(v17, v16)) >> 32)
       + v30 * (unsigned __int64)HIDWORD(v29);
    v20 = v19;
    n0x7FFF_2 = n0x7FFF_1;
    if ( (a1 & 0x8000000000000000LL) == 0LL )
    {
      v4 = __CFADD__(__PAIR64__(a1, v19), __PAIR64__(a1, v19));
      LODWORD(a1) = __PAIR64__(a1, v19) >> 31;
      v20 = 2 * v19;
      HIDWORD(a1) += v4 + HIDWORD(a1);
      n0x7FFF_2 = n0x7FFF_1 - 1;
    }
    v22 = __CFADD__(v20, v20);
    if ( __CFADD__(v20, v20) )
    {
      if ( !(2 * v20) )
      {
        v22 = v12 != 0;
        if ( !v12 )
          v22 = a1 & 1;
      }
      v23 = v22;
      v4 = __CFADD__(v22, (_DWORD)a1);
      LODWORD(a1) = v23 + a1;
      v25 = v4;
      v24 = __CFADD__(v4, HIDWORD(a1));
      HIDWORD(a1) += v25;
      if ( v24 )
      {
        v26 = v24 << 31;
        v4 = BYTE4(a1) & 1;
        HIDWORD(a1) = (HIDWORD(a1) >> 1) | v26;
        LODWORD(a1) = ((unsigned int)a1 >> 1) | (v4 << 31);
        if ( ++n0x7FFF_2 == 0x7FFF )
        {
LABEL_25:
          LODWORD(a1) = 0;
          return a1;
        }
      }
    }
    if ( n0x7FFF_2 <= 0 )
    {
      if ( n0x7FFF_2 )
        v27 = -n0x7FFF_2;
      else
        LOBYTE(v27) = 1;
      LODWORD(a1) = a1 >> v27;
    }
  }
  else
  {
    LODWORD(a1) = 0;
  }
  return a1;
}
