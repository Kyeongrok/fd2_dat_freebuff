/*
 * func-name: sub_37B8C
 * func-address: 0x37b8c
 * callers: 0x37b8c, 0x37d3e, 0x3ca23
 * callees: 0x365da, 0x3666c
 */

bool sub_37B8C()
{
  bool result; // eax

  if ( !dword_527E4 )
  {
    sub_365DA((unsigned int)sub_37B8C, (unsigned int)sub_3CA23);
    sub_3666C((unsigned int)&dword_54174, 4);
    sub_3666C((unsigned int)&dword_54170, 4);
    sub_3666C((unsigned int)&env, 4);
    sub_3666C((unsigned int)&dword_54168, 4);
    sub_3666C((unsigned int)&dword_5416C, 4);
    sub_3666C((unsigned int)&dword_54160, 4);
    sub_3666C((unsigned int)&dword_5415C, 4);
    result = sub_3666C((unsigned int)&dword_54158, 4);
    dword_527E4 = 1;
  }
  return result;
}
