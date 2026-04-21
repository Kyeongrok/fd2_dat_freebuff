/*
 * func-name: sub_11BFA
 * func-address: 0x11bfa
 * callers: 0x115b6, 0x117e7, 0x12cea
 * callees: 0x11cac, 0x3702f
 */

int __fastcall sub_11BFA(__int32 n77, int a2, int a3, int a4)
{
  int result; // eax

  sub_3702F(n77, a2, a3, a4, 8);
  result = dword_53AC1 - 1;
  if ( dword_53AC1 - 1 != dword_53AB1 )
  {
    if ( n10 <= 10 || (result = dword_53AC1 - 13, dword_53AC1 - 13 == dword_53AA9) )
    {
      ++dword_53AB1;
      ++n10;
      if ( !dword_51A83 )
        return result;
    }
    else
    {
      ++dword_53AB1;
      ++dword_53AA9;
    }
  }
  return sub_11CAC(0);
}
