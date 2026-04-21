/*
 * func-name: sub_4ED0B
 * func-address: 0x4ed0b
 * callers: 0x1685c
 * callees: none
 */

void __cdecl sub_4ED0B(char *dst, _WORD *a2, int a3)
{
  unsigned __int16 count; // bp
  char *src; // esi
  __int16 v6; // dx

  count = *a2;
  src = (char *)(a2 + 2);
  v6 = a2[1];
  do
  {
    qmemcpy(dst, src, count);
    src += count;
    dst += a3;
    --v6;
  }
  while ( v6 );
}
