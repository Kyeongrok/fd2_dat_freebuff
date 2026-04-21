/*
 * func-name: sub_2BF83
 * func-address: 0x2bf83
 * callers: 0x2bd6c
 * callees: 0x2eb9f, 0x3702f
 */

int __fastcall sub_2BF83(__int32 a1, int a2, int a3, int a4, char *p_n16, char *a6, int a7, int a8, int a9)
{
  int v9; // eax
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 32);
  sub_2EB9F(a9, (unsigned __int8)*p_n16, a7, a8, -1);
  v9 = *(_DWORD *)(a9 + 4 * (unsigned __int8)*p_n16 + 8) + a9;
  ++*a6;
  result = *(unsigned __int8 *)(v9 + 6);
  if ( (unsigned __int8)*a6 == result )
  {
    *a6 = 0;
    ++*p_n16;
  }
  return result;
}
