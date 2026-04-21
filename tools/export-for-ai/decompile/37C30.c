/*
 * func-name: p_sub_37C30
 * func-address: 0x37c30
 * callers: 0x37d3e
 * callees: none
 */

int p_sub_37C30()
{
  int result; // eax

  if ( (n99 != 99 || n59 != 59 || n59_0 != 59 || n99 != n99_0) && ++n99_0 == 100 )
  {
    result = 0;
    n99_0 = 0;
    if ( ++n59_0 == 60 )
    {
      n59_0 = 0;
      if ( ++n59 == 60 )
      {
        n59 = 0;
        ++n99;
      }
    }
  }
  return result;
}
