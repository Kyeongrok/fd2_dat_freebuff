/*
 * func-name: sub_12EAA
 * func-address: 0x12eaa
 * callers: 0x13488
 * callees: 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x13460, 0x32230, 0x3702f, 0x4e31c
 */

void __fastcall sub_12EAA(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n1824; // edi
  unsigned __int8 *v6; // esi
  int v7; // eax
  int n32904; // ebp
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int n7; // [esp+0h] [ebp-1Ch]
  unsigned __int8 v13; // [esp+4h] [ebp-18h]
  int v14; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 56);
  n1824 = 0;
  v14 = 0;
  v6 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  v7 = v6[1];
  v13 = v6[1];
  v6[3] = 0;
  n32904 = 32904;
  dword_53B0B = 0;
  if ( v7 - dword_53AAD <= 5 || dword_53AC5 - dword_51A8B == dword_53AAD )
  {
    ++n2_1;
  }
  else
  {
    n1824 = 1824;
    v14 = 1;
  }
  for ( n7 = 1; n7 < 7; ++n7 )
  {
    v10 = sub_32230(a5);
    sub_4E31C();
    LOBYTE(v10) = n7;
    v6[4] = n7;
    sub_1297D(v10, a2, a3, a4);
    dword_53AF5 += n1824;
    dword_53B0B += v14;
    if ( n1824 )
      sub_11EEE(dword_53A49 + 32904, a2, a3, a4, dword_53A49 + 32904, 456, 13, 9, dword_53AA9, dword_53AAD);
    else
      sub_11EEE(dword_53A49 + 32904, a2, a3, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
    sub_127A9(v11, a2, a3, a4);
    n32904 += n1824;
    v9 = sub_11EB0(n32904 + dword_53A49, a2, a3, a4, 656644, 320, n32904 + dword_53A49, 456, 312, 192);
    nullsub_1(v9);
  }
  v6[1] = v13 + 1;
  dword_53AAD += v14;
  ++dword_53AB5;
  v6[4] = 0;
  dword_53AF5 = 0;
  dword_53B0B = 0;
  JUMPOUT(0x13167);
}
