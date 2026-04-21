/*
 * func-name: sub_205DA
 * func-address: 0x205da
 * callers: 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x3314b, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3346b, 0x3347c, 0x334d9, 0x335aa, 0x335da, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c
 * callees: 0x1088d, 0x11cac, 0x1f525, 0x3702f, 0x37910
 */

void __fastcall sub_205DA(__int32 a1, int a2, int a3, int a4)
{
  __int32 v4; // eax
  int v5; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  n6_5 = 0;
  n2_0 = 0;
  sub_1088D(n17);
  v4 = memset(dword_53AD5, 0, 32);
  dword_53AA9 = 0;
  dword_53AAD = 0;
  dword_53AB1 = 0;
  dword_53AB5 = 0;
  n10 = 0;
  n2_1 = 0;
  v5 = sub_11CAC(v4, a2, a3, a4, 1);
  n6_5 = 1;
  sub_1F525(v5, a2, a3, a4);
  n999 = 1;
  JUMPOUT(0x17EE8);
}
