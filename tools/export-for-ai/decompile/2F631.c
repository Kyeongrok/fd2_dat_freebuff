/*
 * func-name: sub_2F631
 * func-address: 0x2f631
 * callers: 0x2ebe1
 * callees: 0x11eb0, 0x2eb9f, 0x2facd, 0x3702f, 0x37910, 0x4e98d
 */

char __fastcall sub_2F631(
        __int32 a1,
        int a2,
        int n3_1,
        int a4,
        int n6,
        _BYTE *n3,
        __int16 *a7,
        int a8,
        int arg8a,
        __int16 *n26)
{
  int n10; // esi
  __int32 v11; // eax
  int v12; // eax
  char result; // al
  int n10_1; // esi
  int v15; // edx

  sub_3702F(a1, a2, n3_1, a4, 44);
  for ( n10 = 1; n10 < 10; ++n10 )
  {
    n3_1 = 3;
    a2 = n10 % 3;
    sub_4E98D((__int16 *)dword_5413F[n10 % 3], 0, 50, arg8a + 320, 640, -1);
    sub_11EB0(arg8a + 32 * n10, n10 % 3, 3, a4, 655360, 320, arg8a + 32 * n10, 640, 320, 200);
  }
  memset(arg8a, 0, &loc_1F400);
  memset(a8, 0, 64000);
  sub_4E98D(n26, 0, 50, a8, 320, -1);
  sub_4E98D(a7, 164, 157, a8, 320, -1);
  v11 = sub_2FACD(a8, n6);
  v12 = sub_11EB0(v11, a2, n3_1, a4, arg8a + 320, 640, a8, 320, 320, 200);
  result = sub_2EB9F(v12, a2, n3_1, a4, (int)n3, 0, arg8a + 320, 640, -1);
  for ( n10_1 = 1; n10_1 <= 10; ++n10_1 )
  {
    v15 = (n10_1 + 1) % 3;
    sub_4E98D((__int16 *)dword_5413F[v15], 0, 50, arg8a, 640, -1);
    result = sub_11EB0(arg8a + 32 * n10_1, v15, 3, a4, 655360, 320, arg8a + 32 * n10_1, 640, 320, 200);
  }
  return result;
}
