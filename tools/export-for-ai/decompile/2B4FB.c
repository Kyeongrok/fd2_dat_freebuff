/*
 * func-name: sub_2B4FB
 * func-address: 0x2b4fb
 * callers: 0x2af28, 0x2b67f
 * callees: 0x1297d, 0x17fc0, 0x187d6, 0x2b749, 0x3702f, 0x3771c, 0x4e1a6, 0x4e22a
 */

void __fastcall sub_2B4FB(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int n999,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rax
  int n3; // edi
  int i; // esi
  int v15; // edx
  char *src; // ebx

  sub_3702F(a1, a2, a3, a4, 40);
  v12 = memmove(n30, a5, 64000);
  sub_187D6(n30 + 11261, SHIDWORD(v12), a3, a4, n30 + 11261, 320, n999, 31, 2);
  sub_2B749(a7);
  LODWORD(v12) = sub_2B749(a7);
  LOBYTE(v12) = sub_187D6(n30 + 23421, SHIDWORD(v12), a3, a4, n30 + 23421, 320, a10 - v12, 42, 2);
  sub_1297D(v12, SHIDWORD(v12), a3, a4);
  n3 = n3_1;
  if ( n3_1 == 3 )
    n3 = 1;
  sub_17FC0(a12 + 1, SHIDWORD(v12), a3, a4, a12 + 1, (unsigned __int8 *)n30);
  sub_4E22A(
    (char *)(*(_DWORD *)(FDOTHER_DAT__2 + 6) + FDOTHER_DAT__2),
    (char *)(n30 + 320 * (30 * (a12 / 10) + 104) + 28 * (a12 % 10) + 23),
    320);
  for ( i = 0; i < n16_1 - 1; ++i )
  {
    v15 = 320 * (30 * (i / 10) + 100) + 28 * (i % 10) + 23;
    src = (char *)(*(_DWORD *)(dword_53A61 + 4 * (n3 + 12 * i + 12)) + dword_53A61);
    if ( *(_BYTE *)(i + a7) )
      sub_4E22A(src, (char *)(v15 + n30 + 960), 320);
    else
      sub_4E1A6(src, v15 + n30, 320);
  }
  JUMPOUT(0x2B434);
}
