/*
 * func-name: sub_4E703
 * func-address: 0x4e703
 * callers: 0x4e680
 * callees: none
 */

char __fastcall sub_4E703(int a1, __int16 a2, int a3)
{
  char result; // al

  result = *(_BYTE *)(a3 - 1);
  if ( (result & 0x40) != 0 )
  {
    *(_WORD *)dword_60073 = a2;
    byte_60078 = 1;
  }
  return result;
}
