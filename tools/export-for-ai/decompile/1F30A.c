/*
 * func-name: sub_1F30A
 * func-address: 0x1f30a
 * callers: 0x1a30b
 * callees: 0x11d40, 0x11eee, 0x127a9, 0x15f0e, 0x1f42d, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4eb59
 */

int __fastcall sub_1F30A(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n17; // ebp
  int v6; // esi
  __int64 v7; // rax
  int n16; // edi
  int result; // eax
  int n4; // esi

  sub_3702F(a1, a2, a3, a4, 44);
  n17 = 17;
  v7 = malloc(64000);
  v6 = v7;
  memset(v7, 0, 64000);
  for ( n16 = 16; n16 >= 0; --n16 )
  {
    LODWORD(v7) = sub_4EB59(n17, v6, n655360_0);
    sub_15F0E(v7, SHIDWORD(v7), a3, a4, dword_53A81, v6, 320, 89, 86, a5);
    LODWORD(v7) = free(v7);
    sub_15F0E(v7, SHIDWORD(v7), a3, a4, dword_53A81, v6, 320, 169, 86, 81);
    LODWORD(v7) = free(v7);
    sub_11D40(v7, SHIDWORD(v7), a3, a4, 16, 255, n16);
    memmove(655360, v6, 64000);
    --n17;
  }
  free(v6);
  sub_11EEE(n655360_0 + 32904, SHIDWORD(v7), a3, a4, n655360_0 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  result = sub_127A9(v7, SHIDWORD(v7), a3, a4);
  for ( n4 = 0; n4 <= 4; ++n4 )
    result = sub_1F42D(25 * n4, a5);
  return result;
}
