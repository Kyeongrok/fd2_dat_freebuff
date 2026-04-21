/*
 * func-name: sub_37042
 * func-address: 0x37042
 * callers: 0x3702f
 * callees: none
 */

char *__fastcall sub_37042(unsigned int a1)
{
  char *__SS__; // eax
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  if ( a1 >= (unsigned int)&retaddr || (__SS__ = (char *)&retaddr - a1, (unsigned int)__SS__ <= _SS___0) )
  {
    __SS__ = (char *)__SS__;
    if ( __SS__ == _SS_ )
      return (char *)sub_3705F();
  }
  return __SS__;
}
