/*
 * func-name: sub_24336
 * func-address: 0x24336
 * callers: 0x240fa
 * callees: 0x111ba, 0x11df2, 0x135dd, 0x17aa9, 0x20421, 0x2eb9f, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a, 0x4e31c, 0x4e381
 */

void __fastcall sub_24336(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebp
  _BYTE *v6; // edi
  __int64 v7; // rax
  int n69; // esi
  __int64 v9; // rax

  v4 = sub_3702F(a1, a2, a3, a4, 40);
  sub_135DD(v4, a2, a3, a4, 14, 8);
  v5 = malloc(64000);
  v7 = memmove(v5, 655360, 64000);
  v6 = sub_111BA(v7, SHIDWORD(v7), a3, a4, (int)aFdotherDat, 0, 34);// "FDOTHER.DAT"
  LOBYTE(v7) = sub_2EB9F((int)v6, 0, v5, 320, -1);
  for ( n69 = 1; n69 < 69; ++n69 )
  {
    memmove(n655360_0, v5, 64000);
    sub_2EB9F((int)v6, n69, n655360_0, 320, -1);
    v7 = memmove(655360, n655360_0, 64000);
    sub_4E31C();
    sub_17AA9(v7, SHIDWORD(v7), a3, a4, 3);
    LOWORD(v7) = sub_4E381();
  }
  sub_20421(v7, SHIDWORD(v7), a3, a4, 0, 15, 0);
  sub_11DF2(v7, SHIDWORD(v7), a3, a4, 0, 255, 63);
  LODWORD(v7) = j___delay(100);
  sub_11DF2(v7, SHIDWORD(v7), a3, a4, 0, 255, 0);
  j___delay(500);
  while ( n69 < 101 )
  {
    memmove(n655360_0, v5, 64000);
    sub_2EB9F((int)v6, n69, n655360_0, 320, -1);
    v9 = memmove(655360, n655360_0, 64000);
    sub_17AA9(v9, SHIDWORD(v9), a3, a4, 3);
    sub_4E381();
    ++n69;
  }
  free(v5);
  free(v6);
  JUMPOUT(0x22BB7);
}
