/*
 * func-name: sub_29300
 * func-address: 0x29300
 * callers: 0x2670e
 * callees: 0x111ba, 0x11d40, 0x15f84, 0x16559, 0x16886, 0x1956b, 0x197e5, 0x19953, 0x1f525, 0x1f882, 0x26996, 0x26ce4, 0x26e38, 0x2921a, 0x29620, 0x2968d, 0x2986f, 0x3702f, 0x3771c, 0x3776e, 0x3790a, 0x4e809
 */

int __fastcall sub_29300(__int32 a1, int a2, int n3_2, int a4, unsigned __int8 *a5)
{
  __int64 n3_1; // rax
  int n3; // esi
  int n10; // ebx
  int v8; // ecx
  __int64 v9; // rax
  __int32 v11; // [esp-10h] [ebp-24h]
  unsigned __int8 n3_4; // [esp+0h] [ebp-14h]
  unsigned __int8 n3_3; // [esp+4h] [ebp-10h]

  sub_3702F(a1, a2, n3_2, a4, 60);
  n3_1 = sub_4E809(n17);
  LOBYTE(n3_1) = *(_BYTE *)n3_1;
  n3_4 = n3_1;
  dword_53F66 = (int)sub_111BA(n3_1, SHIDWORD(n3_1), n3_2, a4, (int)aFdotherDat, dword_53F66, 13);// "FDOTHER.DAT"
  LOBYTE(n3_1) = sub_16886(dword_53F66, SHIDWORD(n3_1), n3_2, a4, 655360, 320, dword_53F66, 0);
  sub_1F525(n3_1, SHIDWORD(n3_1), n3_2, a4);
  j___delay(200);
  LODWORD(n3_1) = sub_1956B((unsigned __int8)byte_52387[0], SHIDWORD(n3_1), n3_2, a4, (unsigned __int8)byte_52387[0]);
  sub_15F84(a5, n3_1, SHIDWORD(n3_1), a4, n3_2, arg0, 585, 693452, 320, 205, 76, 74, 19, 1);
  LODWORD(n3_1) = sub_16559(n3_1, SHIDWORD(n3_1), n3_2, a4, 0);
  n3 = 0;
  do
  {
    ::n3_3 = n3;
    LODWORD(n3_1) = sub_26CE4(n3_1, SHIDWORD(n3_1), n3_2, a4, 0);
    n3_3 = sub_26E38(n3_1, SHIDWORD(n3_1), n3_2, a4);
    if ( n3_3 == 1 )
      n3 = ::n3_3;
    LODWORD(n3_1) = sub_26CE4(n3_3, SHIDWORD(n3_1), n3_2, a4, 1);
    sub_26996(n3_1, SHIDWORD(n3_1), n3_2, a4);
    if ( n3_3 == 1 )
    {
      if ( ::n3_3 )
      {
        if ( n3_3 == ::n3_3 )
        {
          sub_2968D(n3_3);
        }
        else if ( ::n3_3 == 2 )
        {
          sub_2986F();
        }
        else
        {
          LODWORD(n3_1) = sub_1956B(
                            (unsigned __int8)byte_52387[0],
                            SHIDWORD(n3_1),
                            n3_2,
                            a4,
                            (unsigned __int8)byte_52387[0]);
          sub_15F84(a5, n3_1, SHIDWORD(n3_1), a4, n3_2, arg0, 415, 693452, 320, 205, 76, 74, 19, 1);
          LODWORD(n3_1) = sub_16559(n3_1, SHIDWORD(n3_1), n3_2, a4, 0);
          sub_19953(n3_1, SHIDWORD(n3_1), n3_2, a4);
          n3_2 = n3_1;
          sub_197E5(n3_1, SHIDWORD(n3_1), n3_1, a4);
          if ( n3_2 != -1 && !::n3_3 )
          {
            sub_15F84(a5, n3_1, SHIDWORD(n3_1), a4, n3_2, arg0, 416, 699532, 320, 205, 76, 74, 19, 1);
            LODWORD(n3_1) = j___delay(200);
            sub_26996(n3_1, SHIDWORD(n3_1), n3_2, a4);
            LODWORD(n3_1) = 1;
            return n3_1;
          }
          sub_26996(n3_1, SHIDWORD(n3_1), n3_2, a4);
        }
      }
      else
      {
        sub_29620();
      }
      LODWORD(n3_1) = sub_1956B(
                        (unsigned __int8)byte_52387[0],
                        SHIDWORD(n3_1),
                        n3_2,
                        a4,
                        (unsigned __int8)byte_52387[0]);
      sub_15F84(a5, n3_1, SHIDWORD(n3_1), a4, n3_2, arg0, 586, 693452, 320, 205, 76, 74, 19, 1);
      sub_16559(n3_1, SHIDWORD(n3_1), n3_2, a4, 0);
    }
    LODWORD(n3_1) = n3_3;
  }
  while ( n3_3 == 1 );
  sub_16886(n3_3, SHIDWORD(n3_1), n3_2, a4, 655360, 320, dword_53F66, 0);
  LODWORD(n3_1) = j___delay(200);
  sub_1F882(n3_1, SHIDWORD(n3_1), n3_2, a4);
  for ( n10 = 10; n10 >= 0; --n10 )
  {
    v8 = 6 * n3_4 + n5;
    v11 = ((n10 * ((unsigned __int8)byte_52363[v8] - 150) / 10) << 7) + 20480;
    sub_2921A(
      v11,
      n10 * ((unsigned __int8)byte_52363[v8] - 150) % 10,
      n10,
      v8,
      v11,
      ((n10 * ((unsigned __int8)byte_52375[v8] - 100) / 10) << 7) + 12800,
      (int)a5,
      128 - 9 * n10);
    v9 = memmove(655360, n655360_0, 64000);
    sub_11D40(4 * n10, SHIDWORD(v9), n10, v8, 0, 255, 4 * n10);
  }
  free(dword_53F66);
  dword_53F66 = 0;
  LODWORD(n3_1) = 0;
  return n3_1;
}
