/*
 * func-name: sub_4E680
 * func-address: 0x4e680
 * callers: 0x4e5cc
 * callees: 0x4e703, 0x4e71f, 0x4e751
 */

unsigned __int8 __usercall sub_4E680@<al>(
        __int16 a1@<dx>,
        unsigned __int8 a2@<cl>,
        unsigned __int8 *a3@<ebx>,
        int a4@<esi>)
{
  __int16 v4; // ax
  int v5; // eax
  _BOOL1 v6; // cf
  signed __int8 v7; // cl
  unsigned __int8 result; // al
  __int16 v9; // ax

  v4 = *(_WORD *)(a3 - 3);
  HIBYTE(v4) &= 3u;
  v5 = *(unsigned __int8 *)(dword_60060 + (unsigned __int16)(4 * v4) + 1);
  v6 = a2 < *(_BYTE *)(a4 + v5);
  v7 = a2 - *(_BYTE *)(a4 + v5);
  if ( v6 )
    goto LABEL_14;
  result = *a3;
  if ( v7 < (char)*a3 )
    return result;
  if ( v7 > (char)*a3 )
  {
    result = sub_4E71F();
  }
  else
  {
    if ( n2 != 1 )
      return result;
    result = sub_4E71F();
    if ( result <= (unsigned __int8)(*(a3 - 2) & 0xFC) )
      return result;
  }
  HIBYTE(v9) = *(a3 - 2) & 3;
  *(a3 - 2) = HIBYTE(v9) | result;
  if ( n2 == 2 )
  {
    *a3 = v7;
    return sub_4E703();
  }
  LOBYTE(v9) = *(a3 - 1);
  if ( (v9 & 0x40) != 0 )
LABEL_14:
    JUMPOUT(0x4E4F4);
  if ( (v9 & 0x80u) != 0 )
    v7 = 0;
  *a3 = v7;
  return sub_4E751(v9, a1);
}
