/*
 * func-name: sub_1FF79
 * func-address: 0x1ff79
 * callers: 0x1f894
 * callees: 0x16886, 0x3702f
 */

char __fastcall sub_1FF79(__int32 a1, int a2, int a3, int a4, int _FDOTHER.DAT_, int n3, int n2)
{
  __int32 n2_1; // eax
  char result; // al
  __int32 n3_1; // eax
  __int32 n5; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  n2_1 = 1;
  if ( !n3 )
    n2_1 = 2;
  result = sub_16886(n2_1, a2, a3, a4, 707969, 320, _FDOTHER.DAT_, n2_1);
  if ( n2 > 1 )
  {
    n3_1 = 3;
    if ( n3 == 1 )
      n3_1 = 4;
    result = sub_16886(n3_1, a2, a3, a4, 710849, 320, _FDOTHER.DAT_, n3_1);
  }
  if ( n2 > 2 )
  {
    n5 = 5;
    if ( n3 == 2 )
      n5 = 6;
    return sub_16886(n5, a2, a3, a4, 713729, 320, _FDOTHER.DAT_, n5);
  }
  return result;
}
