/*
 * func-name: sub_26CE4
 * func-address: 0x26ce4
 * callers: 0x279bc, 0x29300, 0x29daa
 * callees: 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4ed34
 */

int __fastcall sub_26CE4(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n20; // esi
  int v6; // ebp
  int n4_1; // edi
  int n4; // esi
  int v9; // eax
  _DWORD dst_[4]; // [esp+0h] [ebp-24h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+20h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 52);
  v13 = a3;
  qmemcpy(dst_, &src__43, sizeof(dst_));
  v12 = malloc(64000);
  memmove(v12, 655360, 64000);
  for ( n20 = 0; n20 < 20; ++n20 )
    memset(v12 + 320 * (n20 + 169) + 201, 74, 104);
  memmove(n655360_0, v12, 64000);
  v6 = n655360_0 + 54320;
  for ( n4_1 = 0; n4_1 < 4; ++n4_1 )
  {
    memmove(n655360_0, v12, 64000);
    for ( n4 = 0; n4 < 4; ++n4 )
    {
      v9 = *(_DWORD *)(dword_53F66 + 4 * (2 * n4 + 3) + 6) + dword_53F66;
      if ( a5 )
        sub_4ED34(v6 + dst_[n4] / (n4_1 + 1), v9, 320);
      else
        sub_4ED34(v6 + dst_[n4] / (4 - n4_1), v9, 320);
    }
    memmove(655360, n655360_0, 64000);
  }
  if ( a5 )
    memmove(655360, v12, 64000);
  return free(v12);
}
