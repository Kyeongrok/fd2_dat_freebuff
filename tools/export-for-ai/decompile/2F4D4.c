/*
 * func-name: sub_2F4D4
 * func-address: 0x2f4d4
 * callers: 0x2cf30, 0x2ebe1
 * callees: 0x11eb0, 0x2eb9f, 0x2facd, 0x3702f, 0x37910, 0x4e98d
 */

char __fastcall sub_2F4D4(__int32 a1, int a2, int n3_1, int a4, int n6, int n3, int a7, int arg8a, __int16 *_BG.DAT_)
{
  int n9; // esi
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  char result; // al
  int n9_1; // esi
  __int32 v15; // eax

  sub_3702F(a1, a2, n3_1, a4, 40);
  for ( n9 = 9; n9 >= 0; --n9 )
  {
    n3_1 = 3;
    LOBYTE(v10) = sub_4E98D((__int16 *)dword_5413F[n9 % 3], 0, 50, arg8a, 640, -1);
    a2 = arg8a + 32 * n9;
    sub_11EB0(v10, a2, 3, a4, 655360, 320, a2, 640, 320, 200);
  }
  memset(arg8a, 0, &loc_1F400);
  memset(a7, 0, 64000);
  sub_4E98D(_BG.DAT_, 0, 50, a7, 320, -1);
  v11 = sub_2FACD(a7, n6);
  v12 = sub_11EB0(v11, a2, n3_1, a4, arg8a, 640, a7, 320, 320, 200);
  result = sub_2EB9F(v12, a2, n3_1, a4, n3, 0, arg8a, 640, -1);
  for ( n9_1 = 9; n9_1 >= 0; --n9_1 )
  {
    LOBYTE(v15) = sub_4E98D((__int16 *)dword_5413F[(n9_1 + 2) % 3], 0, 50, arg8a + 320, 640, -1);
    result = sub_11EB0(v15, arg8a + 32 * n9_1, 3, a4, 655360, 320, arg8a + 32 * n9_1, 640, 320, 200);
  }
  return result;
}
