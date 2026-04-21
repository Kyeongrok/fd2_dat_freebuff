/*
 * func-name: sub_34CF1
 * func-address: 0x34cf1
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x344f2, 0x3702f
 */

__int32 __fastcall sub_34CF1(__int32 a1, int a2, int a3, int a4, int a5)
{
  __int32 result; // eax

  sub_3702F(a1, a2, a3, a4, 16);
  result = *(unsigned __int8 *)(80 * a5 + n8_0 + 6);
  if ( *(_BYTE *)(80 * a5 + n8_0 + 6) )
  {
    sub_344F2(result, 80 * a5, a3, a4, 9, 27, 0);
    result = dword_53AD5;
    *(_BYTE *)(dword_53AD5 + 16) = 1;
  }
  return result;
}
