/*
 * func-name: sub_36FAC
 * func-address: 0x36fac
 * callers: 0x36ff4
 * callees: none
 */

int __usercall sub_36FAC@<eax>(_WORD *a1@<esi>)
{
  _WORD *v1; // esi
  int n655360; // ebx
  unsigned int v3; // ecx
  int v4; // edx
  int result; // eax
  int n655360_1; // edi
  _BYTE *v7; // esi
  _WORD *dst; // edi
  _WORD *src; // esi
  unsigned int i; // ecx
  unsigned int count; // ecx

  LOWORD(result) = *a1;
  v1 = a1 + 1;
  n655360 = ::n655360;
  v3 = 0;
  v4 = (unsigned __int16)result;
  result = (unsigned __int16)result;
  n655360_1 = ::n655360;
  do
  {
    LOWORD(result) = *v1;
    v7 = v1 + 1;
    dst = (_WORD *)(result + n655360_1);
    LOBYTE(result) = *v7;
    src = v7 + 1;
    LOBYTE(v3) = result;
    for ( i = v3 >> 1; i; --i )
      *dst++ = *src++;
    __asm { rcl     ecx, 1 }
    qmemcpy(dst, src, count);
    v1 = (_WORD *)((char *)src + count);
    v3 = 0;
    n655360_1 = n655360;
    --v4;
  }
  while ( v4 );
  return result;
}
