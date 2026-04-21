/*
 * func-name: sub_4C59E
 * func-address: 0x4c59e
 * callers: 0x4ad7c
 * callees: none
 */

char __usercall sub_4C59E@<al>(int a1@<eax>, int a2@<ebp>, int a3@<edi>)
{
  unsigned __int16 v4; // dx
  char n65; // al
  char v6; // dh
  __int16 v7; // ax
  __int16 n0x7FFF; // ax
  _BOOL1 v9; // zf
  char result; // al
  __int16 v11; // dx

  v4 = *(__int16 *)((char *)&word_49DAE + a3);
  if ( (*(_WORD *)(a2 + 8) & v4) == v4 )
  {
    n65 = 65;
    v6 = 0;
  }
  else
  {
    *(_WORD *)(a2 + 8) &= ~v4;
    v7 = *(_WORD *)(a1 + 8);
    v6 = 2 * __ROL1__(HIBYTE(v7) & 0x80, 1);
    n0x7FFF = v7 & 0x7FFF;
    if ( n0x7FFF )
    {
      if ( n0x7FFF == 0x7FFF )
      {
        *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DAC + a3);
        v9 = *(_DWORD *)a1 == 0;
        if ( !*(_DWORD *)a1 )
          v9 = *(_DWORD *)(a1 + 4) == 0x80000000;
        n65 = 1;
        if ( v9 )
          n65 = 5;
      }
      else
      {
        n65 = 4;
        if ( *(char *)(a1 + 7) >= 0 )
        {
          *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DAC + a3);
          n65 = 68;
        }
      }
    }
    else
    {
      n65 = 68;
      if ( !*(_QWORD *)a1 )
      {
        *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DA8 + a3);
        n65 = 64;
      }
    }
  }
  result = v6 | n65;
  v11 = *(_WORD *)(a2 + 4) & 0xB8FF;
  HIBYTE(v11) |= result;
  *(_WORD *)(a2 + 4) = v11;
  return result;
}
