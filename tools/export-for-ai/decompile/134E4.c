/*
 * func-name: sub_134E4
 * func-address: 0x134e4
 * callers: 0x13a9f, 0x15055, 0x1548e, 0x16f55, 0x18890, 0x18d8c, 0x3231b, 0x32d18, 0x33049, 0x3327d, 0x333f5, 0x336a0, 0x33c9d, 0x34531, 0x3460b, 0x34673, 0x346cd, 0x34984, 0x34fcc, 0x35022, 0x350c8, 0x357dd
 * callees: 0x3702f, 0x3790a
 */

int __fastcall sub_134E4(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int n6; // edx

  sub_3702F(a1, a2, a3, a4, 8);
  v4 = dword_53A45;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    *(_BYTE *)(v4 + 3) = 0;
    v4 += 80;
  }
  return j___delay(20);
}
