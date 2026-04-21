/*
 * func-name: sub_4C523
 * func-address: 0x4c523
 * callers: 0x4c4bd, 0x4c980
 * callees: none
 */

int __usercall sub_4C523@<eax>(
        __int64 a1@<edx:eax>,
        unsigned int a2@<ecx>,
        unsigned int a3@<ebx>,
        __int16 a4@<di>,
        __int16 a5@<si>)
{
  int v5; // esi
  int v6; // edi
  _BOOL1 v7; // cc
  int v8; // esi
  int v9; // edi
  _BOOL1 v10; // cf
  int v11; // esi
  int v12; // ett

  v5 = a5 & 0x7FFF;
  v6 = a4 & 0x7FFF;
  v7 = v5 < v6;
  v8 = v5 - v6;
  if ( !v7 )
  {
    v9 = 0;
LABEL_3:
    v10 = a2 < HIDWORD(a1);
    if ( a2 == HIDWORD(a1) && (v10 = a3 < (unsigned int)a1, a3 == (_DWORD)a1) || v10 )
    {
LABEL_6:
      a1 -= __PAIR64__(a2, a3);
      v10 = 1;
    }
    while ( 1 )
    {
      v9 += v10 + v9;
      v7 = v8-- < 1;
      if ( v7 )
        break;
      v10 = __CFADD__(a1, a1);
      a1 *= 2;
      if ( v10 )
        goto LABEL_6;
      v10 = 0;
      if ( a1 < 0 )
        goto LABEL_3;
    }
    v11 = 0;
    if ( a1 )
    {
      while ( a1 >= 0 )
      {
        v12 = (a1 + (unsigned __int64)(unsigned int)a1) >> 32;
        LODWORD(a1) = 2 * a1;
        HIDWORD(a1) += v12;
        --v11;
      }
    }
  }
  return a1;
}
