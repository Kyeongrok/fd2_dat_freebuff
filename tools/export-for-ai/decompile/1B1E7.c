/*
 * func-name: sub_1B1E7
 * func-address: 0x1b1e7
 * callers: 0x19df7
 * callees: 0x10620, 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x1af1e, 0x1af99, 0x1b019, 0x1b0ad, 0x1b14b, 0x1b41d, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4e31c, 0x4e381
 */

void __usercall sub_1B1E7(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<ebp>)
{
  int v5; // edi
  int v6; // esi
  __int64 v7; // rax
  int n4; // ebx
  int n11; // ebx
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]

  sub_3702F(a1, a2, a4, a3, 44);
  v5 = malloc(64000);
  v7 = malloc(64000);
  v6 = v7;
  memset(v5, 0, 64000);
  sub_11EEE(dword_53A49 + 32904, SHIDWORD(v7), v5, a3, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  sub_127A9(v7, SHIDWORD(v7), v5, a3);
  sub_11EB0(dword_53A49 + 32904, SHIDWORD(v7), v5 + 1284, a3, v5 + 1284, 320, dword_53A49 + 32904, 456, 312, 192);
  sub_1B41D(v6, 320);
  for ( n4 = 0; n4 < 12; ++n4 )
  {
    LODWORD(v7) = memmove(dword_53A49, v5, 64000);
    LODWORD(v7) = sub_1AF99(v7, SHIDWORD(v7), n4, a3, v6, n4);
    LODWORD(v7) = sub_1B019(v7, SHIDWORD(v7), n4, a3, v6, n4);
    LODWORD(v7) = sub_1B0AD(v7, SHIDWORD(v7), n4, a3, v6, n4);
    sub_1B14B(v7, SHIDWORD(v7), n4, a3, v6, n4);
    memmove(655360, dword_53A49, 64000);
  }
  while ( 1 )
  {
    LOBYTE(retaddr) = sub_10620();
    if ( MEMORY[0x46C] != a5 )
    {
      sub_1297D(MEMORY[0x46C], SHIDWORD(v7), 1132, a3);
      sub_4E31C();
      sub_11EEE(dword_53A49 + 32904, SHIDWORD(v7), 1132, a3, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
      sub_127A9(v7, SHIDWORD(v7), 1132, a3);
      sub_1B41D(dword_53A49 + 31076, 456);
      sub_11EB0(dword_53A49 + 32904, SHIDWORD(v7), 1132, a3, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
    }
    if ( (_BYTE)retaddr )
    {
      sub_4E381();
      for ( n11 = 11; n11 >= 0; --n11 )
      {
        LODWORD(v7) = memmove(dword_53A49, v5, 64000);
        LODWORD(v7) = sub_1AF1E(v7, SHIDWORD(v7), n11, a3, v6, n11);
        LODWORD(v7) = sub_1B019(v7, SHIDWORD(v7), n11, a3, v6, n11);
        LODWORD(v7) = sub_1B0AD(v7, SHIDWORD(v7), n11, a3, v6, n11);
        sub_1B14B(v7, SHIDWORD(v7), n11, a3, v6, n11);
        memmove(655360, dword_53A49, 64000);
      }
      memmove(655360, v5, 64000);
      free(v5);
      free(v6);
      sub_4E381();
      JUMPOUT(0x10C49);
    }
  }
}
