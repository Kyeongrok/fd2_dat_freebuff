/*
 * func-name: sub_42110
 * func-address: 0x42110
 * callers: 0x42110, 0x43ad0, 0x45380
 * callees: 0x365da, 0x3666c
 */

bool sub_42110()
{
  bool result; // eax

  if ( !dword_5371C )
  {
    sub_365DA((unsigned int)sub_42110, (unsigned int)sub_45380);
    sub_3666C((unsigned int)aSample, 128);      // "SAMPLE"
    sub_3666C((unsigned int)&dword_53718, 4);
    sub_3666C((unsigned int)&dword_543E0, 4);
    sub_3666C((unsigned int)&dword_543E8, 4);
    sub_3666C((unsigned int)&dword_543EC, 4);
    sub_3666C((unsigned int)&dword_543F8, 4);
    sub_3666C((unsigned int)&dword_543F0, 4);
    sub_3666C((unsigned int)&dword_543F4, 4);
    sub_3666C((unsigned int)&dword_543FC, 4);
    sub_3666C((unsigned int)&dword_543D4, 4);
    sub_3666C((unsigned int)&dword_543E4, 4);
    sub_3666C((unsigned int)&dword_543D8, 4);
    result = sub_3666C((unsigned int)&dword_543DC, 4);
    dword_5371C = 1;
  }
  return result;
}
