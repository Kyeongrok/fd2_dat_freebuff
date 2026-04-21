/*
 * func-name: sub_4ECA4
 * func-address: 0x4eca4
 * callers: 0x4ec7c
 * callees: none
 */

__int64 __usercall sub_4ECA4@<edx:eax>(int a1@<ebp>, char *dst@<edi>, char *src@<esi>)
{
  __int64 result; // rax
  unsigned __int16 count; // cx

  WORD2(result) = word_627B6;
  do
  {
    count = ::count;
    qmemcpy(dst, src, (unsigned __int16)::count);
    src += count;
    dst += a1 + count;
    --WORD2(result);
  }
  while ( WORD2(result) );
  return result;
}
