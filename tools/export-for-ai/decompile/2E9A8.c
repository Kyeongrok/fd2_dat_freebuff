/*
 * func-name: sub_2E9A8
 * func-address: 0x2e9a8
 * callers: 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2ff01, 0x31c49
 * callees: 0x11d40, 0x11eb0, 0x2eb9f, 0x3702f, 0x4e98d
 */

char __fastcall sub_2E9A8(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int16 *a11)
{
  int v11; // eax
  int v12; // ebx
  int n8_1; // esi
  __int32 v14; // eax
  int v15; // eax
  int n8; // esi
  int v18; // eax
  __int32 v19; // eax

  v11 = sub_3702F(a1, a2, a3, a4, 44);
  v12 = *(unsigned __int8 *)(n8_0 + 80 * a5 + 6);
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    if ( !a6 )
      LOBYTE(v11) = sub_4E98D(a11, 164, 157, a10, 320, -1);
    for ( n8 = 8; n8 >= 0; --n8 )
    {
      sub_11EB0(v11, a2, a9 + 320, a4, a9 + 320, 640, a10, 320, 320, 200);
      LOBYTE(v19) = sub_2EB9F(a7, 0, a9 + 320 - 10 * n8, 640, -1);
      if ( !a6 )
        LOBYTE(v19) = sub_2EB9F(a8, 0, a9 + 320, 640, -1);
      v18 = sub_11EB0(v19, a2, a9 + 320, a4, 655360, 320, a9 + 320, 640, 320, 200);
      sub_11D40(v18, a2, 6 * n8, a4, 0, 255, 6 * n8);
    }
    JUMPOUT(0x2E956);
  }
  for ( n8_1 = 8; n8_1 >= 0; --n8_1 )
  {
    sub_11EB0(v11, a2, v12, a4, a9, 640, a10, 320, 320, 200);
    if ( !a6 )
      sub_2EB9F(a8, 0, a9, 640, -1);
    sub_4E98D(a11, 164, 157, a9 + 10 * n8_1, 640, -1);
    LOBYTE(v14) = sub_2EB9F(a7, 0, a9 + 10 * n8_1, 640, -1);
    v15 = sub_11EB0(v14, a2, v12, a4, 655360, 320, a9, 640, 320, 200);
    v12 = 6 * n8_1;
    sub_11D40(v15, a2, 6 * n8_1, a4, 0, 255, 6 * n8_1);
  }
  return sub_4E98D(a11, 164, 157, a10, 320, -1);
}
