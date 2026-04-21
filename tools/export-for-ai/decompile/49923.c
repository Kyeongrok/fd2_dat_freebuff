/*
 * func-name: sub_49923
 * func-address: 0x49923
 * callers: 0x404c0, 0x406b0, 0x40c40, 0x40cf0
 * callees: none
 */

int __cdecl sub_49923(int a1)
{
  char *buf; // edi
  int result; // eax
  unsigned int v3; // [esp-Ch] [ebp-18h]

  buf = *(char **)(a1 + 80);
  result = 0;
  v3 = *(_DWORD *)(a1 + 76);
  memset(buf, 0, v3 & 3);
  memset(&buf[v3 & 3], 0, 4 * (v3 >> 2));
  return result;
}
