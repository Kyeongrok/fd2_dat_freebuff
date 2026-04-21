/*
 * func-name: sub_4B882
 * func-address: 0x4b882
 * callers: 0x4b828, 0x4b852, 0x4c35a, 0x4c6e8, 0x4cbc4, 0x4ce84
 * callees: none
 */

int __usercall sub_4B882@<eax>(__int64 a1@<edx:eax>, int a2@<ecx>, int a3@<ebx>, int a4@<esi>)
{
  _BOOL1 v4; // cf
  unsigned __int16 v5; // si
  int v6; // ecx
  int v7; // esi
  unsigned int v9; // ebp
  int v10; // edi
  int v11; // ecx
  unsigned __int16 n64_1; // di
  _BOOL1 v13; // cf
  int n64; // ecx
  int v15; // et1
  int v16; // et2
  int v17; // edi
  int v18; // ebx
  char v19; // ch
  int v20; // ebx
  int v21; // edi
  char v22; // cf
  char v23; // tt
  int v24; // ett
  int v25; // ett
  __int16 n0x7FFF; // bp
  int v27; // et2
  _BOOL1 v28; // cf
  int v29; // eax
  _BOOL1 v30; // tt
  bool v31; // ett
  int v32; // ett
  int v34; // [esp-Ch] [ebp-Ch]

  if ( !a1 )
  {
    v4 = __CFADD__((_WORD)a4, (_WORD)a4);
    v5 = 2 * a4;
    if ( !v5 )
    {
      LODWORD(a1) = a3;
      return a1;
    }
    LOWORD(a4) = (v5 >> 1) | (v4 << 15);
  }
  if ( a2 || a3 || (a4 & 0x7FFF0000) != 0 )
  {
    v6 = a4;
    v7 = a2;
    v9 = (v6 >> 16) & 0x80007FFF;
    v10 = __ROL4__(((int)__ROL4__(v6, 16) >> 16) & 0x80007FFF, 16);
    v11 = __ROL4__(v9, 16);
    LOWORD(v11) = v10 + v11;
    n64_1 = __ROL4__(v10, 16);
    n64 = __ROL4__(v11, 16);
    v13 = (unsigned __int16)n64 < n64_1;
    LOWORD(n64) = n64 - n64_1;
    if ( !(_WORD)n64 )
      goto LABEL_13;
    if ( v13 )
    {
      LOWORD(v9) = n64_1;
      LOWORD(n64) = -(__int16)n64;
      v15 = a1;
      LODWORD(a1) = a3;
      a3 = v15;
      v16 = HIDWORD(a1);
      HIDWORD(a1) = v7;
      v7 = v16;
    }
    if ( (unsigned __int16)n64 > 0x40u )
    {
      LODWORD(a1) = a3;
    }
    else
    {
LABEL_13:
      BYTE1(n64) = 0;
      if ( n64 < 0 )
      {
        BYTE1(n64) = -1;
        a3 = -a3;
        v7 = -v7 - (a3 != 0);
      }
      v17 = 0;
      if ( (_BYTE)n64 )
      {
        v34 = a3;
        v18 = 0;
        if ( (unsigned __int8)n64 >= 0x20u )
        {
          LOBYTE(v18) = (_DWORD)a1 != 0;
          v17 = v18;
          if ( (_BYTE)n64 == 64 )
          {
            v17 = HIDWORD(a1) | v18;
            HIDWORD(a1) = 0;
          }
          a1 = HIDWORD(a1);
        }
        v17 |= __PAIR64__(a1, 0) >> n64;
        LODWORD(a1) = (unsigned __int64)a1 >> n64;
        HIDWORD(a1) = (unsigned __int64)HIDWORD(a1) >> n64;
        a3 = v34;
      }
      v4 = __CFADD__(__PAIR64__(v7, a3), a1);
      a1 += __PAIR64__(v7, a3);
      v19 = v4 + BYTE1(n64);
      if ( v19 < 0 )
      {
        if ( (_BYTE)n64 == 64 )
          a1 += (v17 & 0x7FFFFFFF) != 0;
        a1 = -a1;
        v19 = 0;
      }
      v20 = a1;
      LOBYTE(v20) = v19 | a1;
      if ( HIDWORD(a1) | v20 && (_WORD)v9 )
      {
        if ( v19 )
        {
LABEL_31:
          n0x7FFF = v9 + 1;
          if ( n0x7FFF == 0x7FFF )
            goto LABEL_37;
          v4 = BYTE4(a1) & 1;
          HIDWORD(a1) = (HIDWORD(a1) >> 1) | 0x80000000;
          v27 = v4 << 31;
          v4 = a1 & 1;
          LODWORD(a1) = ((unsigned int)a1 >> 1) | v27;
          if ( v4 )
          {
            v28 = __CFADD__(v17, v17);
            if ( !(2 * v17) )
            {
              v29 = __ROR4__(a1, 1);
              v30 = __CFSHL__(v29, 1);
              LODWORD(a1) = __ROL4__(v29, 1);
              v28 = v30;
            }
            v31 = v28;
            v4 = __CFADD__(v28, (_DWORD)a1);
            LODWORD(a1) = v31 + a1;
            v32 = v4;
            v4 = __CFADD__(v4, HIDWORD(a1));
            HIDWORD(a1) += v32;
            if ( v4 )
            {
              LODWORD(a1) = a1 >> 1;
              if ( n0x7FFF == 32766 )
LABEL_37:
                LODWORD(a1) = 0;
            }
          }
        }
        else
        {
          v21 = __ROL4__(v17, 1);
          v23 = v21 & 1;
          v17 = __ROR4__(v21, 1);
          v22 = v23;
          while ( 1 )
          {
            LOWORD(v9) = v9 - 1;
            if ( !(_WORD)v9 )
              break;
            v24 = v22 + (_DWORD)a1;
            v4 = __CFADD__(v22, (_DWORD)a1) | __CFADD__((_DWORD)a1, v24);
            LODWORD(a1) = a1 + v24;
            v25 = v4 + HIDWORD(a1);
            v22 = __CFADD__(v4, HIDWORD(a1)) | __CFADD__(HIDWORD(a1), v25);
            HIDWORD(a1) += v25;
            if ( v22 )
              goto LABEL_31;
          }
        }
      }
    }
  }
  return a1;
}
