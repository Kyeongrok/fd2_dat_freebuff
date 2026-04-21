/*
 * func-name: sub_41AF4
 * func-address: 0x41af4
 * callers: 0x41af4, 0x41ec1, 0x420e1
 * callees: 0x365da
 */

bool sub_41AF4()
{
  bool result; // eax

  if ( !dword_53694 )
  {
    result = sub_365DA((unsigned int)sub_41AF4, (unsigned int)sub_420E1);
    dword_53694 = 1;
  }
  return result;
}
