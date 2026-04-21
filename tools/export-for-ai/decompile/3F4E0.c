/*
 * func-name: sub_3F4E0
 * func-address: 0x3f4e0
 * callers: 0x3f4e0, 0x3fca9, 0x3fddc
 * callees: 0x365da, 0x3666c
 */

bool sub_3F4E0()
{
  bool result; // eax

  if ( !dword_53608 )
  {
    sub_365DA((unsigned int)sub_3F4E0, (unsigned int)sub_3FDDC);
    sub_3666C((unsigned int)&dword_541B4, 64);
    sub_3666C((unsigned int)&dword_5430C, 72);
    sub_3666C((unsigned int)&byte_541F4, 256);
    sub_3666C((unsigned int)&unk_542F4, 24);
    sub_3666C((unsigned int)&dword_53604, 4);
    result = sub_3666C((unsigned int)&dword_54354, 4);
    dword_53608 = 1;
  }
  return result;
}
