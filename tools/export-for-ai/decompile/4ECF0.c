/*
 * func-name: sub_4ECF0
 * func-address: 0x4ecf0
 * callers: 0x4ecbf
 * callees: none
 */

__int64 __usercall sub_4ECF0@<edx:eax>(int a1@<ebp>, char *dst@<edi>, char *src@<esi>)
{
  __int64 result; // rax
  unsigned __int16 count; // cx

  WORD2(result) = word_627B6;
  do
  {
    count = ::count;
    qmemcpy(dst, src, (unsigned __int16)::count);
    dst += count;
    src += a1 + count;
    --WORD2(result);
  }
  while ( WORD2(result) );
  return result;
}
