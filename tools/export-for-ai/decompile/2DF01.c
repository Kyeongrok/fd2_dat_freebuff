/*
 * func-name: sub_2DF01
 * func-address: 0x2df01
 * callers: 0x1f894, 0x2d80d
 * callees: 0x3702f, 0x37ae5
 */

int __fastcall sub_2DF01(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  int result; // eax

  result = sub_3702F(a1, a2, a3, a4, 28);
  while ( a5 < a6 )
  {
    outp(968, a5);
    outp(969, a8 + a7 * (*(unsigned __int8 *)(3 * a5 + FDOTHER_DAT) - a8) / 40);
    outp(969, a9 + a7 * (*(unsigned __int8 *)(3 * a5 + FDOTHER_DAT + 1) - a9) / 40);
    result = outp(969, a10 + a7 * (*(unsigned __int8 *)(3 * a5++ + FDOTHER_DAT + 2) - a10) / 40);
  }
  return result;
}
