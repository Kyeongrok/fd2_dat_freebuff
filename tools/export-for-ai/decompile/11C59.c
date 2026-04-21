/*
 * func-name: sub_11C59
 * func-address: 0x11c59
 * callers: 0x115b6, 0x117e7, 0x12cea
 * callees: 0x11cac, 0x3702f
 */

int __fastcall sub_11C59(__int32 n75, int a2, int a3, int a4)
{
  int result; // eax

  result = sub_3702F(n75, a2, a3, a4, 8);
  if ( dword_53AB1 )
  {
    if ( n10 < 2 && dword_53AA9 )
    {
      --dword_53AB1;
      --dword_53AA9;
    }
    else
    {
      --dword_53AB1;
      --n10;
      if ( !dword_51A83 )
        return result;
    }
  }
  return sub_11CAC(0);
}
