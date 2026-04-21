/*
 * func-name: sub_1CA89
 * func-address: 0x1ca89
 * callers: 0x21227, 0x213b7, 0x214ad, 0x21548, 0x21b18, 0x2218a, 0x226ea, 0x2282f, 0x22960, 0x22aa8, 0x22c04, 0x22cda, 0x30e9d
 * callees: 0x3702f, 0x4e866
 */

int __fastcall sub_1CA89(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 12);
  v6 = sub_4E866(a6);
  result = 80 * a5 + dword_53A45;
  *(_WORD *)(result + 68) -= *(unsigned __int8 *)(v6 + 5);
  return result;
}
