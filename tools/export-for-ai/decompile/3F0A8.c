/*
 * func-name: sub_3F0A8
 * func-address: 0x3f0a8
 * callers: 0x382d6
 * callees: none
 */

unsigned int sub_3F0A8()
{
  unsigned int callerseflags; // kr00_4
  unsigned int callerseflags_1; // eax

  callerseflags = __getcallerseflags();
  callerseflags_1 = callerseflags;
  _disable();
  return callerseflags_1;
}
