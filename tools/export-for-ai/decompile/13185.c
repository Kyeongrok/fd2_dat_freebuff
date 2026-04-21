/*
 * func-name: sub_13185
 * func-address: 0x13185
 * callers: 0x13488, 0x3231b
 * callees: 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x13460, 0x32230, 0x3702f, 0x4e31c
 */

void __fastcall sub_13185(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  unsigned __int8 *v6; // esi
  int n32904; // edi
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  int n7; // [esp+0h] [ebp-1Ch]
  int v12; // [esp+4h] [ebp-18h]
  int v13; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 56);
  v5 = 0;
  v13 = 0;
  v6 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  v12 = v6[1];
  v6[3] = 2;
  n32904 = 32904;
  if ( dword_53AAD )
    n6_2 = 6;
  else
    n6_2 = 0;
  if ( v12 - dword_53AAD < 2 && dword_53AAD )
  {
    v5 = -1824;
    v13 = -1;
  }
  else
  {
    --n2_1;
  }
  for ( n7 = 1; n7 < 7; ++n7 )
  {
    v10 = sub_32230(a5);
    sub_4E31C();
    LOBYTE(v10) = n7;
    v6[4] = n7;
    sub_1297D(v10, a2, a3, a4);
    dword_53AF5 += v5;
    n6_2 += v13;
    if ( dword_53AAD )
    {
      n24_0 = 24;
      sub_11EEE(dword_53A49 + 21960, a2, a3, a4, dword_53A49 + 21960, 456, 13, 9, dword_53AA9, dword_53AAD - 1);
      n24_0 = 0;
    }
    else
    {
      sub_11EEE(dword_53A49 + 32904, a2, a3, a4, dword_53A49 + 32904, 456, 13, 9, dword_53AA9, 0);
    }
    sub_127A9(v8, a2, a3, a4);
    n32904 += v5;
    v9 = sub_11EB0(n32904 + dword_53A49, a2, a3, a4, 656644, 320, n32904 + dword_53A49, 456, 312, 192);
    nullsub_1(v9);
  }
  v6[1] = v12 - 1;
  dword_53AAD += v13;
  --dword_53AB5;
  JUMPOUT(0x12FF0);
}
