/*
 * func-name: sub_279BC
 * func-address: 0x279bc
 * callers: 0x2670e
 * callees: 0x111ba, 0x11d40, 0x15f84, 0x16559, 0x16886, 0x187d6, 0x1956b, 0x1f525, 0x1f882, 0x26996, 0x26a0d, 0x26ce4, 0x26e38, 0x2872b, 0x28cbd, 0x28efe, 0x28f65, 0x2921a, 0x3702f, 0x3771c, 0x3776e, 0x3790a, 0x4e809, 0x4ebff
 */

void __fastcall sub_279BC(__int32 a1, int a2, int n3_4, int a4, int a5)
{
  unsigned __int8 *n3; // edi
  int n12; // esi
  __int64 n3_1; // rax
  int v8; // esi
  int n501; // esi
  int n503; // esi
  int n10; // ebx
  int v12; // ecx
  __int64 v13; // rax
  _BYTE v14[12]; // [esp-Ch] [ebp-28h] BYREF
  int v15; // [esp+0h] [ebp-1Ch]
  unsigned __int8 n3_2; // [esp+4h] [ebp-18h]
  unsigned __int8 n3_3; // [esp+8h] [ebp-14h]
  int n3_5; // [esp+18h] [ebp-4h]

  sub_3702F(a1, a2, n3_4, a4, 80);
  n3_5 = n3_4;
  n3 = 0;
  v15 = 0;
  n12 = 12;
  n3_1 = sub_4E809(n17);
  LOBYTE(n3_1) = *(_BYTE *)n3_1;
  n3_3 = n3_1;
  if ( n5 == 3 )
  {
    n12 = 29;
  }
  else if ( n5 == 5 )
  {
    n12 = 63;
  }
  dword_53F66 = (int)sub_111BA(n3_1, SHIDWORD(n3_1), n3_4, a4, (int)aFdotherDat, dword_53F66, n12);// "FDOTHER.DAT"
  LOBYTE(n3_1) = sub_16886(dword_53F66, SHIDWORD(n3_1), n3_4, a4, 655360, 320, dword_53F66, 0);
  sub_1F525(n3_1, SHIDWORD(n3_1), n3_4, a4);
  j___delay(200);
  sub_1956B((unsigned __int8)byte_52387[n5], SHIDWORD(n3_1), n3_4, a4, (unsigned __int8)byte_52387[n5]);
  v8 = dword_53F66 + *(_DWORD *)(dword_53F66 + 10);
  LODWORD(n3_1) = sub_4EBFF(685765, v8, 320);
  sub_187D6(n3_1, SHIDWORD(n3_1), n3_4, a4, 687056, 320, n6_6, 31, 8);
  sub_4EBFF(dword_53C5F + 30405, v8, 320);
  LOBYTE(n3_1) = sub_187D6(dword_53C5F + 31696, SHIDWORD(n3_1), n3_4, a4, dword_53C5F + 31696, 320, n6_6, 31, 8);
  if ( n5 == 1 )
    n501 = 501;
  else
    n501 = 440;
  sub_15F84(0, n3_1, SHIDWORD(n3_1), a4, n3_4, arg0, n501, 693452, 320, 205, 76, 74, 19, 1);
  LODWORD(n3_1) = sub_16559(n3_1, SHIDWORD(n3_1), n3_4, a4, 0);
  dword_53F6A = 0;
  dword_53F6E = 0;
  while ( 1 )
  {
    ::n3_3 = (int)n3;
    LODWORD(n3_1) = sub_26CE4(n3_1, SHIDWORD(n3_1), n3_4, a4, 0);
    n3_2 = sub_26E38(n3_1, SHIDWORD(n3_1), n3_4, a4);
    if ( n3_2 == 1 )
      n3 = (unsigned __int8 *)::n3_3;
    sub_26CE4(n3_2, SHIDWORD(n3_1), n3_4, a4, 1);
    LODWORD(n3_1) = sub_26A0D((__int32)v14, SHIDWORD(n3_1), n3_4, a4, (int)v14);
    n3_4 = (unsigned __int8)n3_1;
    ::n3_5 = (unsigned __int8)n3_1;
    sub_26996(n3_1, SHIDWORD(n3_1), (unsigned __int8)n3_1, a4);
    if ( n3_2 == 1 )
    {
      if ( ::n3_3 )
      {
        if ( n3_2 == ::n3_3 )
        {
          sub_28CBD();
        }
        else if ( ::n3_3 == 2 )
        {
          sub_28EFE();
        }
        else
        {
          sub_28F65();
        }
      }
      else
      {
        sub_2872B(n3_4, v14);
      }
      LODWORD(n3_1) = sub_1956B(
                        (unsigned __int8)byte_52387[n5],
                        SHIDWORD(n3_1),
                        n3_4,
                        a4,
                        (unsigned __int8)byte_52387[n5]);
      if ( n5 == 1 )
        n503 = 503;
      else
        n503 = 440;
      sub_15F84(n3, n3_1, SHIDWORD(n3_1), a4, n3_4, arg0, n503, 693452, 320, 205, 76, 74, 19, 1);
      sub_16559(n3_1, SHIDWORD(n3_1), n3_4, a4, 0);
    }
    LODWORD(n3_1) = n3_2;
    if ( n3_2 != 1 )
    {
      sub_16886(n3_2, SHIDWORD(n3_1), n3_4, a4, 655360, 320, dword_53F66, 0);
      LODWORD(n3_1) = j___delay(200);
      sub_1F882(n3_1, SHIDWORD(n3_1), n3_4, a4);
      for ( n10 = 10; n10 >= 0; --n10 )
      {
        v12 = 6 * n3_3 + n5;
        sub_2921A(
          ((n10 * ((unsigned __int8)byte_52363[v12] - 150) / 10) << 7) + 20480,
          ((n10 * ((unsigned __int8)byte_52375[v12] - 100) / 10) << 7) + 12800,
          a5,
          128 - 9 * n10);
        v13 = memmove(655360, n655360_0, 64000);
        sub_11D40(4 * n10, SHIDWORD(v13), n10, v12, 0, 255, 4 * n10);
      }
      free(dword_53F66);
      dword_53F66 = 0;
      if ( !n5 )
        v15 = 1;
      JUMPOUT(0x27071);
    }
  }
}
