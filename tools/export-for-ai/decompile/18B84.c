/*
 * func-name: sub_18B84
 * func-address: 0x18b84
 * callers: 0x18890
 * callees: 0x10620, 0x11eb0, 0x11eee, 0x122dc, 0x127a9, 0x1297d, 0x18c6d, 0x1acf3, 0x3702f, 0x4e31c
 */

void __usercall sub_18B84(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<esi>, int n6)
{
  int n2285; // edi
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax

  sub_3702F(a1, a2, a4, a3, 44);
  if ( n10 >= 7 )
    n2285 = 2285;
  else
    n2285 = 2436;
  while ( !sub_10620() )
  {
    sub_4E31C();
    v7 = MEMORY[0x46C];
    if ( a5 != MEMORY[0x46C] )
    {
      sub_4E31C();
      sub_1297D(v7, a2, a4, a3);
      sub_11EEE(dword_53A49 + 32904, a2, a4, a3, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
      v9 = sub_122DC(v8, a2, a4, a3);
      sub_127A9(v9, a2, a4, a3);
      sub_18C6D(n2285 + dword_53A49 + 32904, 456, n6);
      sub_1ACF3(dword_53A49 + 32904, 456);
      sub_11EB0(dword_53A49 + 32904, a2, a4, a3, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
      a5 = MEMORY[0x46C];
    }
  }
  JUMPOUT(0x18B7F);
}
