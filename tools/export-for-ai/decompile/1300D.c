/*
 * func-name: sub_1300D
 * func-address: 0x1300d
 * callers: 0x13488
 * callees: 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x13460, 0x13a44, 0x32230, 0x3702f, 0x4e31c
 */

int __fastcall sub_1300D(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  char *v6; // esi
  int v7; // eax
  int n32904; // edi
  __int32 v9; // eax
  __int32 v10; // eax
  int v11; // eax
  char v13; // [esp+0h] [ebp-1Ch]
  int n7; // [esp+4h] [ebp-18h]
  int v15; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 56);
  v5 = 0;
  v15 = 0;
  v6 = (char *)(80 * a5 + dword_53A45);
  v7 = (unsigned __int8)*v6;
  v13 = *v6;
  v6[3] = 1;
  n32904 = 32904;
  n6_1 = 6;
  if ( v7 - dword_53AA9 < 2 && dword_53AA9 )
  {
    v5 = -4;
    v15 = -1;
  }
  else
  {
    --n10;
  }
  for ( n7 = 1; n7 < 7; ++n7 )
  {
    v9 = sub_32230(a5);
    sub_4E31C();
    LOBYTE(v9) = n7;
    v6[4] = n7;
    sub_1297D(v9, a2, a3, a4);
    n24 = 24;
    dword_53AF5 += v5;
    n6_1 += v15;
    sub_11EEE(dword_53A49 + 32880, a2, a3, a4, dword_53A49 + 32880, 456, 14, 8, dword_53AA9 - 1, dword_53AAD);
    n24 = 0;
    sub_127A9(v10, a2, a3, a4);
    n32904 += v5;
    v11 = sub_11EB0(n32904 + dword_53A49, a2, a3, a4, 656644, 320, n32904 + dword_53A49, 456, 312, 192);
    nullsub_1(v11);
  }
  *v6 = v13 - 1;
  dword_53AA9 += v15;
  --dword_53AB1;
  v6[4] = 0;
  dword_53AF5 = 0;
  n6_1 = 0;
  return sub_13A44(dword_53AB1, dword_53AB5, 0);
}
