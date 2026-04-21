/*
 * func-name: sub_10B4E
 * func-address: 0x10b4e
 * callers: 0x1088d, 0x214ad, 0x22f37, 0x23296, 0x235bc, 0x238dc, 0x23b5f, 0x23e74, 0x24df2, 0x2548c, 0x3231b, 0x32999, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x33169, 0x33367, 0x333f5, 0x335aa, 0x336a0, 0x338c4, 0x34531, 0x346cd, 0x34778, 0x34818, 0x348bb, 0x34984, 0x349ec, 0x34b6f, 0x34b9a, 0x34c7a, 0x34d2f, 0x34dd0, 0x34eb3, 0x34f38, 0x34fcc, 0x35022, 0x350c8, 0x35298, 0x35321, 0x353b5, 0x35422, 0x35468, 0x3553f, 0x355b7, 0x356b3, 0x357dd, 0x35833, 0x35a0d, 0x35b78, 0x360b6, 0x362e8
 * callees: 0x10c50, 0x111ba, 0x3702f, 0x370f0, 0x37324, 0x3759c, 0x3776e, 0x377a3
 */

int __fastcall sub_10B4E(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int i; // ebx
  int v7; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  v5 = fopen((int)aFdiconB24_0, (int)aRb_11);   // "rb"
  if ( !v5 )
  {
    n3 = 3;
    int386(16, &n3, &n3);
    JUMPOUT(0x10056);
  }
  dword_53A59 = sub_111BA((int)aFdfieldDat, dword_53A59, 3 * n17 + 2);// "FDFIELD.DAT"
  for ( i = 0; i < dword_53BE3; ++i )
  {
    if ( *(unsigned __int8 *)(dword_53A55 + 26 * i + 152) == a5 )
      sub_10C50(i, v5);
  }
  fclose(v5);
  free(dword_53A59);
  dword_53A59 = 0;
  v7 = fopen((int)aFd2Tmp_0, (int)aWb_1);       // "wb"
  fwrite(dword_53A61, 1, (char *)&loc_329FE + 2, v7);
  return fclose(v7);
}
