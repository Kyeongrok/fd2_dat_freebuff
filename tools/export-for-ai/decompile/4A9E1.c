/*
 * func-name: sub_4A9E1
 * func-address: 0x4a9e1
 * callers: 0x4a104
 * callees: none
 */

void __usercall sub_4A9E1(char *src@<ebp>, int a2@<edi>, _DWORD *dst@<esi>)
{
  _DWORD *v4; // edi
  int n8; // ecx
  _DWORD *v6; // edi

  qmemcpy(dst, src, 0x1Cu);
  v4 = dst + 7;
  n8 = 8;
  do
  {
    *v4 = *(_DWORD *)&src[a2 + 28];
    v6 = v4 + 1;
    *v6++ = *(_DWORD *)&src[a2 + 32];
    *(_WORD *)v6 = *(_WORD *)&src[a2 + 36];
    v4 = (_DWORD *)((char *)v6 + 2);
    a2 = *(unsigned __int16 *)((char *)&word_49D56 + a2);
    --n8;
  }
  while ( n8 );
  JUMPOUT(0x4B2F7);
}
