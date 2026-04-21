/*
 * func-name: sub_135DD
 * func-address: 0x135dd
 * callers: 0x22f37, 0x23296, 0x235bc, 0x23b5f, 0x24336, 0x244b6, 0x24754, 0x24df2, 0x250cc, 0x2548c, 0x25757, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3347c, 0x334d9, 0x335da, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34778, 0x34818, 0x34984, 0x34b9a, 0x34c7a, 0x34d2f, 0x34eb3, 0x34fcc, 0x35022, 0x350c8, 0x35321, 0x35468, 0x3553f, 0x355b7, 0x356b3, 0x357dd, 0x35b78, 0x362e8
 * callees: 0x11cac, 0x3702f, 0x4e381
 */

void __fastcall sub_135DD(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  v6 = sub_3702F(a1, a2, a3, a4, 20);
  dword_51A83 = 0;
  while ( a5 != dword_53AA9 )
  {
    if ( a5 >= dword_53AA9 )
    {
      ++dword_53AB1;
      ++dword_53AA9;
    }
    else
    {
      --dword_53AB1;
      --dword_53AA9;
    }
    sub_11CAC(v6, a2, a3, a4, 0);
    LOWORD(v6) = sub_4E381();
  }
  while ( a6 != dword_53AAD )
  {
    if ( a6 >= dword_53AAD )
    {
      ++dword_53AB5;
      ++dword_53AAD;
    }
    else
    {
      --dword_53AB5;
      --dword_53AAD;
    }
    sub_11CAC(v6, a2, a3, a4, 0);
    LOWORD(v6) = sub_4E381();
  }
  JUMPOUT(0x13181);
}
