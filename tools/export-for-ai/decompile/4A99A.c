/*
 * func-name: sub_4A99A
 * func-address: 0x4a99a
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4A99A@<eax>(
        _DWORD *dst@<ebp>,
        _DWORD *src@<esi>,
        int a3,
        __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int16 a17)
{
  _DWORD *v17; // esi
  unsigned int v18; // ebx
  int n8; // ecx
  _DWORD *v20; // esi

  qmemcpy(dst, src, 0x1Cu);
  v17 = src + 7;
  v18 = 10 * ((dst[1] & 0x3800u) >> 11);
  n8 = 8;
  do
  {
    *(_DWORD *)((char *)dst + v18 + 28) = *v17;
    v20 = v17 + 1;
    *(_DWORD *)((char *)dst + v18 + 32) = *v20++;
    *(_WORD *)((char *)dst + v18 + 36) = *(_WORD *)v20;
    v17 = (_DWORD *)((char *)v20 + 2);
    v18 = *(unsigned __int16 *)((char *)&word_49D56 + v18);
    --n8;
  }
  while ( n8 );
  return sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
