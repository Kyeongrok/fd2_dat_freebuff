/*
 * func-name: sub_36EA7
 * func-address: 0x36ea7
 * callers: 0x36ff4
 * callees: none
 */

int __usercall sub_36EA7@<eax>(_BYTE *a1@<esi>)
{
  _BYTE *v1; // esi
  int buf; // ebx
  int v3; // edx
  int result; // eax
  int buf_1; // edi
  _BYTE *v6; // esi
  _WORD *dst; // edi
  unsigned __int8 v8; // al
  _WORD *src; // esi
  __int16 v10; // cx
  int i; // ecx
  unsigned int count; // ecx

  LOBYTE(result) = *a1;
  v1 = a1 + 1;
  buf = ::buf;
  v3 = (unsigned __int8)result;
  HIWORD(result) = 0;
  buf_1 = ::buf;
  do
  {
    LOBYTE(result) = *v1;
    v6 = v1 + 1;
    LOWORD(result) = 3 * (unsigned __int8)result;
    dst = (_WORD *)(result + buf_1);
    v8 = *v6;
    src = v6 + 1;
    v10 = v8;
    LOWORD(result) = 2 * v8;
    for ( i = (unsigned __int16)(result + v10) >> 1; i; --i )
      *dst++ = *src++;
    __asm { rcl     ecx, 1 }
    qmemcpy(dst, src, count);
    v1 = (char *)src + count;
    buf_1 = buf;
    --v3;
  }
  while ( v3 );
  return result;
}
