/*
 * func-name: sub_4E4BE
 * func-address: 0x4e4be
 * callers: 0x4e42c
 * callees: none
 */

char __usercall sub_4E4BE@<al>(unsigned __int8 a1@<cl>, char *a2@<ebx>, int a3@<esi>)
{
  __int16 v3; // ax
  int v4; // eax
  _BOOL1 v5; // cf
  char v6; // cl

  v3 = *(_WORD *)(a2 - 3);
  HIBYTE(v3) &= 3u;
  v4 = *(unsigned __int8 *)(dword_60060 + (unsigned __int16)(4 * v3) + 1);
  v5 = a1 < *(_BYTE *)(a3 + v4);
  v6 = a1 - *(_BYTE *)(a3 + v4);
  if ( !v5 && v6 > *a2 )
  {
    LOBYTE(v4) = *(a2 - 1);
    if ( (v4 & 0x40) == 0 )
    {
      if ( (v4 & 0x80u) != 0 )
        v6 = 0;
      *a2 = v6;
    }
  }
  return v4;
}
