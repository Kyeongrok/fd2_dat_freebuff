/*
 * func-name: sub_4BAB1
 * func-address: 0x4bab1
 * callers: 0x4ba87, 0x4c35a, 0x4c6e8, 0x4c980, 0x4cbc4
 * callees: 0x4a314
 */

int __usercall sub_4BAB1@<eax>(
        unsigned __int64 a1@<edx:eax>,
        int a2@<ecx>,
        unsigned int a3@<ebx>,
        _BYTE *src@<ebp>,
        int a5@<esi>)
{
  _BOOL1 v5; // cf
  unsigned __int16 v6; // si
  int v7; // ecx
  int v8; // esi
  int v10; // edi
  int v11; // ecx
  __int16 v12; // di
  __int16 v13; // cx
  __int16 n0x7FFF; // di
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // edi
  unsigned int i; // esi
  unsigned __int64 v22; // kr10_8
  unsigned int v23; // edi
  unsigned int v24; // eax
  unsigned __int64 v25; // kr18_8
  unsigned __int64 v26; // rax
  int v27; // edi
  unsigned __int64 j; // kr28_8
  __int16 n0x7FFF_2; // di
  char v30; // cl
  _BYTE v32[12]; // [esp-20h] [ebp-20h]
  unsigned __int64 v33; // [esp-14h] [ebp-14h]
  __int16 n0x7FFF_1; // [esp-Ch] [ebp-Ch]

  if ( a2 || a3 || (a5 & 0x7FFF0000) != 0 )
  {
    if ( !a1 )
    {
      v5 = __CFADD__((_WORD)a5, (_WORD)a5);
      v6 = 2 * a5;
      if ( !v6 )
        return a1;
      LOWORD(a5) = (v6 >> 1) | (v5 << 15);
    }
    v7 = a5;
    v8 = a2;
    v10 = __ROL4__(((int)__ROL4__(v7, 16) >> 16) & 0x80007FFF, 16);
    v11 = __ROL4__((v7 >> 16) & 0x80007FFF, 16);
    LOWORD(v10) = v11 + v10;
    v12 = __ROL4__(v10, 16);
    v13 = __ROL4__(v11, 16);
    if ( !v12 )
    {
      do
      {
        a1 *= 2LL;
        --v12;
      }
      while ( (a1 & 0x8000000000000000LL) == 0LL );
    }
    if ( !v13 )
    {
      do
      {
        v8 = __PAIR64__(v8, a3) >> 31;
        a3 *= 2;
        --v13;
      }
      while ( v8 >= 0 );
    }
    n0x7FFF = v12 - v13 + 0x3FFF;
    if ( n0x7FFF == 0x7FFF )
    {
      LODWORD(a1) = 0;
    }
    else if ( n0x7FFF >= -64 )
    {
      n0x7FFF_1 = n0x7FFF;
      v33 = __PAIR64__(v8, a3);
      v15 = v8;
      v16 = HIDWORD(a1);
      v17 = a1;
      LODWORD(a1) = 0;
      if ( v15 <= HIDWORD(a1) )
      {
        HIDWORD(a1) -= v15;
        LODWORD(a1) = 1;
      }
      *(_DWORD *)&v32[8] = a1;
      *(_DWORD *)&v32[4] = __PAIR64__(HIDWORD(a1), v17) / v15;
      v18 = ((*(unsigned int *)&v32[4] * (unsigned __int64)a3) >> 32) + *(unsigned int *)&v32[4] * (unsigned __int64)v15;
      if ( (v32[8] & 1) != 0 )
        v18 += v33;
      v19 = -(*(_DWORD *)&v32[4] * a3);
      v20 = (__PAIR64__(v16, v17) - __PAIR64__(HIDWORD(v18), (*(_DWORD *)&v32[4] * a3 != 0) + (unsigned int)v18)) >> 32;
      for ( i = v17 - ((*(_DWORD *)&v32[4] * a3 != 0) + v18); v20; v20 += v5 )
      {
        --*(_QWORD *)&v32[4];
        v5 = __CFADD__(v33, __PAIR64__(i, v19));
        v22 = v33 + __PAIR64__(i, v19);
        i = (v33 + __PAIR64__(i, v19)) >> 32;
        v19 = v22;
      }
      v23 = i;
      if ( HIDWORD(v33) <= i )
      {
        v23 = i - HIDWORD(v33);
        ++*(_QWORD *)&v32[4];
      }
      v24 = __PAIR64__(v23, v19) / HIDWORD(v33);
      *(_DWORD *)v32 = v24;
      if ( v24 )
      {
        v25 = v24 * (unsigned __int64)a3;
        v26 = HIDWORD(v25) + v24 * (unsigned __int64)HIDWORD(v33);
        v27 = (__PAIR64__(v23, v19) - __PAIR64__(HIDWORD(v26), ((_DWORD)v25 != 0) + (unsigned int)v26)) >> 32;
        for ( j = __PAIR64__(v19 - (((_DWORD)v25 != 0) + (unsigned int)v26), -(int)v25); v27; v27 += v5 )
        {
          v5 = (*(_QWORD *)v32)-- == 0;
          *(_DWORD *)&v32[8] -= v5;
          v5 = __CFADD__(v33, j);
          j += v33;
        }
      }
      a1 = *(_QWORD *)v32;
      n0x7FFF_2 = n0x7FFF_1 - 1;
      if ( v32[8] & 1 )
      {
        HIDWORD(a1) = *(__int64 *)&v32[4] >> 1;
        LODWORD(a1) = *(__int64 *)v32 >> 1;
        n0x7FFF_2 = n0x7FFF_1;
      }
      if ( n0x7FFF_2 <= 0 )
      {
        if ( n0x7FFF_2 )
          v30 = -(char)n0x7FFF_2;
        else
          v30 = 1;
        LODWORD(a1) = a1 >> v30;
      }
    }
    else
    {
      LODWORD(a1) = 0;
    }
  }
  else if ( a1 || 2 * (_WORD)a5 )
  {
    sub_4A314(4u, 0, src);
    LODWORD(a1) = 0;
  }
  else
  {
    sub_4A314(1u, 0, src);
    LODWORD(a1) = 0;
  }
  return a1;
}
