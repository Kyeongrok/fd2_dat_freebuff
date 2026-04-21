/*
 * func-name: sub_29DAA
 * func-address: 0x29daa
 * callers: 0x2670e
 * callees: 0x111ba, 0x11d40, 0x15f84, 0x16559, 0x16886, 0x187d6, 0x1956b, 0x1f525, 0x1f882, 0x26996, 0x26ce4, 0x26e38, 0x28f65, 0x2921a, 0x29620, 0x2a43e, 0x2aa00, 0x3702f, 0x3771c, 0x3790a, 0x4e809, 0x4ebff
 */

void __fastcall sub_29DAA(__int32 a1, int a2, int a3, int a4, unsigned __int8 *n3_2)
{
  int v5; // esi
  __int64 n3_1; // rax
  int n3; // ebx
  int n10; // ebx
  int v9; // ecx
  __int64 v10; // rax
  __int32 v11; // [esp-10h] [ebp-24h]
  unsigned __int8 n3_4; // [esp+0h] [ebp-14h]
  unsigned __int8 n3_3; // [esp+4h] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 60);
  n3_1 = sub_4E809(n17);
  LOBYTE(n3_1) = *(_BYTE *)n3_1;
  n3_4 = n3_1;
  dword_53F66 = (int)sub_111BA(n3_1, SHIDWORD(n3_1), a3, a4, (int)aFdotherDat, dword_53F66, 14);// "FDOTHER.DAT"
  LOBYTE(n3_1) = sub_16886(dword_53F66, SHIDWORD(n3_1), a3, a4, 655360, 320, dword_53F66, 0);
  sub_1F525(n3_1, SHIDWORD(n3_1), a3, a4);
  j___delay(200);
  sub_1956B((unsigned __int8)byte_5238B, SHIDWORD(n3_1), a3, a4, (unsigned __int8)byte_5238B);
  v5 = dword_53F66 + *(_DWORD *)(dword_53F66 + 10);
  LODWORD(n3_1) = sub_4EBFF(685765, v5, 320);
  sub_187D6(n3_1, SHIDWORD(n3_1), a3, a4, 687056, 320, n6_6, 31, 8);
  sub_4EBFF(dword_53C5F + 30405, v5, 320);
  LOBYTE(n3_1) = sub_187D6(dword_53C5F + 31696, SHIDWORD(n3_1), a3, a4, dword_53C5F + 31696, 320, n6_6, 31, 8);
  sub_15F84(n3_2, n3_1, SHIDWORD(n3_1), a4, a3, arg0, 585, 693452, 320, 205, 76, 74, 19, 1);
  LODWORD(n3_1) = sub_16559(n3_1, SHIDWORD(n3_1), a3, a4, 0);
  n3 = 0;
  while ( 1 )
  {
    ::n3_3 = n3;
    LODWORD(n3_1) = sub_26CE4(n3_1, SHIDWORD(n3_1), n3, a4, 0);
    n3_3 = sub_26E38(n3_1, SHIDWORD(n3_1), n3, a4);
    if ( n3_3 == 1 )
      n3 = ::n3_3;
    LODWORD(n3_1) = sub_26CE4(n3_3, SHIDWORD(n3_1), n3, a4, 1);
    sub_26996(n3_1, SHIDWORD(n3_1), n3, a4);
    if ( n3_3 == 1 )
    {
      if ( ::n3_3 )
      {
        if ( n3_3 == ::n3_3 )
        {
          sub_28F65(1, SHIDWORD(n3_1), a4, n3, (int)n3_2);
        }
        else if ( ::n3_3 == 2 )
        {
          sub_2A43E();
        }
        else if ( ::n3_3 == 3 )
        {
          sub_2AA00();
        }
      }
      else
      {
        sub_29620(1, SHIDWORD(n3_1), a4, n3, (int)n3_2);
      }
      LODWORD(n3_1) = sub_1956B((unsigned __int8)byte_5238B, SHIDWORD(n3_1), n3, a4, (unsigned __int8)byte_5238B);
      sub_15F84(n3_2, n3_1, SHIDWORD(n3_1), a4, n3, arg0, 586, 693452, 320, 205, 76, 74, 19, 1);
      sub_16559(n3_1, SHIDWORD(n3_1), n3, a4, 0);
    }
    LODWORD(n3_1) = n3_3;
    if ( n3_3 != 1 )
    {
      sub_16886(n3_3, SHIDWORD(n3_1), n3, a4, 655360, 320, dword_53F66, 0);
      LODWORD(n3_1) = j___delay(200);
      sub_1F882(n3_1, SHIDWORD(n3_1), n3, a4);
      for ( n10 = 10; n10 >= 0; --n10 )
      {
        v9 = 6 * n3_4 + n5;
        v11 = ((n10 * ((unsigned __int8)byte_52363[v9] - 150) / 10) << 7) + 20480;
        sub_2921A(
          v11,
          n10 * ((unsigned __int8)byte_52363[v9] - 150) % 10,
          n10,
          v9,
          v11,
          ((n10 * ((unsigned __int8)byte_52375[v9] - 100) / 10) << 7) + 12800,
          (int)n3_2,
          128 - 9 * n10);
        v10 = memmove(655360, n655360_0, 64000);
        sub_11D40(4 * n10, SHIDWORD(v10), n10, v9, 0, 255, 4 * n10);
      }
      JUMPOUT(0x295FF);
    }
  }
}
