/*
 * func-name: sub_11B9B
 * func-address: 0x11b9b
 * callers: 0x115b6, 0x117e7, 0x12cea
 * callees: 0x11cac, 0x3702f
 */

int __fastcall sub_11B9B(__int32 n80, int a2, int a3, int a4)
{
  int result; // eax

  sub_3702F(n80, a2, a3, a4, 8);
  result = dword_53AC5 - 1;
  if ( dword_53AC5 - 1 != dword_53AB5 )
  {
    if ( n2_1 <= 5 || (result = dword_53AC5 - 8, dword_53AC5 - 8 == dword_53AAD) )
    {
      ++dword_53AB5;
      ++n2_1;
      if ( !dword_51A83 )
        return result;
    }
    else
    {
      ++dword_53AB5;
      ++dword_53AAD;
    }
  }
  return sub_11CAC(0);
}
