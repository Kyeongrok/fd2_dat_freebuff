/*
 * func-name: sub_208CF
 * func-address: 0x208cf
 * callers: 0x117e7, 0x1a866, 0x1d80b, 0x1d8ba
 * callees: 0x34894, 0x3702f
 */

int __fastcall sub_208CF(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  if ( sub_34894(0) || sub_34894(16) || sub_34894(17) )
    n2_0 = 1;
  result = sub_34894(52);
  if ( result )
    n2_0 = 2;
  return result;
}
