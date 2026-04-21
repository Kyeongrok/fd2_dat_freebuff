/*
 * func-name: sub_1F1CC
 * func-address: 0x1f1cc
 * callers: 0x1a30b
 * callees: 0x11d40, 0x15f0e, 0x1f42d, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4e381, 0x4eb59
 */

__int16 __fastcall sub_1F1CC(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp
  int v6; // esi
  __int64 v7; // rax
  int n4; // ebx
  int n16; // edi

  sub_3702F(a1, a2, a3, a4, 44);
  v5 = 1;
  v7 = malloc(64000);
  v6 = v7;
  memmove(v7, 655360, 64000);
  for ( n4 = 4; n4 >= 0; --n4 )
    sub_1F42D(25 * n4, a5);
  sub_1F42D(1, a5);
  sub_1F42D(0, a5);
  memmove(n655360_0, v6, 64000);
  memset(v6, 0, 64000);
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    LODWORD(v7) = sub_4EB59(v5, v6, n655360_0);
    sub_15F0E(v7, SHIDWORD(v7), n4, a4, dword_53A81, v6, 320, 89, 86, a5);
    LODWORD(v7) = free(v7);
    sub_15F0E(v7, SHIDWORD(v7), n4, a4, dword_53A81, v6, 320, 169, 86, 81);
    LODWORD(v7) = free(v7);
    sub_11D40(v7, SHIDWORD(v7), n4, a4, 16, 255, n16);
    memmove(655360, v6, 64000);
    ++v5;
  }
  free(v6);
  return sub_4E381();
}
