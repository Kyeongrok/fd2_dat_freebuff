/*
 * func-name: sub_45670
 * func-address: 0x45670
 * callers: 0x45670, 0x45e21, 0x45fed
 * callees: 0x365da
 */

bool sub_45670()
{
  bool result; // eax

  if ( !dword_5372C )
  {
    result = sub_365DA((unsigned int)sub_45670, (unsigned int)sub_45FED);
    dword_5372C = 1;
  }
  return result;
}
