/*
 * func-name: sub_4EEE0
 * func-address: 0x4eee0
 * callers: 0x11eee
 * callees: none
 */

_BYTE *__cdecl sub_4EEE0(int a1, char *dst, int n0x10)
{
  int v3; // esi
  int v6; // ebx
  __int16 n192; // bp
  _BYTE *result; // eax
  char *v9; // edi

  v3 = a1 + 4;
  v6 = 0;
  n192 = 192;
  result = byte_627C8;
  do
  {
    LOBYTE(v6) = byte_627C8[n0x10];
    qmemcpy(dst, (const void *)(v6 + v3), 0x138u);
    v9 = dst + 312;
    v3 += 320;
    LOWORD(n0x10) = n0x10 + 1;
    if ( (unsigned __int16)n0x10 >= 0x10u )
      LOWORD(n0x10) = 0;
    dst = v9 + 8;
    --n192;
  }
  while ( n192 );
  return result;
}
