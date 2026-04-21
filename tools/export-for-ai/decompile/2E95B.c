/*
 * func-name: sub_2E95B
 * func-address: 0x2e95b
 * callers: 0x2cf30, 0x2e2b0, 0x2ff01
 * callees: 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c
 */

int __fastcall sub_2E95B(__int32 a1, int a2, int a3, int a4)
{
  int v4; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  v4 = fopen((int)aFd2Tmp_1, (int)&unk_502BA);  // "FD2.TMP"
  dword_53A61 = malloc((char *)&loc_329FE + 2);
  sub_373CA((_BYTE *)dword_53A61, 1u, (int)&loc_329FE + 2, v4);
  return fclose(v4);
}
