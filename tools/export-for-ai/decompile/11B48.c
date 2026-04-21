/*
 * func-name: sub_11B48
 * func-address: 0x11b48
 * callers: 0x115b6, 0x117e7, 0x12cea
 * callees: 0x11cac, 0x3702f
 */

int __fastcall sub_11B48(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax

  result = sub_3702F(a1, a2, a3, a4, 8);
  if ( dword_53AB5 )
  {
    if ( n2_1 < 2 && dword_53AAD )
    {
      --dword_53AB5;
      --dword_53AAD;
    }
    else
    {
      --dword_53AB5;
      --n2_1;
      if ( !dword_51A83 )
        return result;
    }
  }
  return sub_11CAC(0);
}
