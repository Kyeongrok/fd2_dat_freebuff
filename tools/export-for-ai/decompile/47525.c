/*
 * func-name: sub_47525
 * func-address: 0x47525
 * callers: 0x3fee0, 0x47153, 0x47654
 * callees: 0x4768d
 */

unsigned int *__cdecl sub_47525(int n25567, unsigned int n0xA8C0, int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int i; // eax
  unsigned int v9; // eax
  unsigned int *result; // eax
  __int16 *v11; // [esp+0h] [ebp-4h]
  unsigned int n25567a; // [esp+18h] [ebp+14h]

  if ( n0xA8C0 >= 0xA8C0 || a3 <= 0 )
  {
    v4 = n0xA8C0 - a3;
    n25567a = (n0xA8C0 - a3) / (unsigned int)&loc_15180 + n25567;
  }
  else
  {
    v4 = (unsigned int)&loc_15180 + n0xA8C0 - a3;
    n25567a = v4 / (unsigned int)&loc_15180 + n25567 - 1;
  }
  v5 = v4 % (unsigned int)&loc_15180;
  a4[2] = v5 / 0xE10;
  v5 %= 0xE10u;
  a4[1] = v5 / 0x3C;
  *a4 = v5 % 0x3C;
  v6 = n25567a / 0x16E;
  v7 = n25567a - 365 * (n25567a / 0x16E);
  if ( n25567a / 0x16E )
    v7 -= (v6 - 1) >> 2;
  for ( i = _leapyear(v6 + 1900) + 365; v7 >= i; v7 -= i )
    ++v6;
  a4[7] = v7;
  a4[5] = v6;
  v11 = &word_51944;
  if ( _leapyear(v6 + 1900) )
    v11 = &word_5195E;
  v9 = v7 / 0x1F;
  if ( v7 >= v11[v7 / 0x1F + 1] )
    ++v9;
  a4[4] = v9;
  a4[3] = v7 - v11[v9] + 1;
  result = a4;
  a4[6] = (n25567a + 1) % 7;
  return result;
}
