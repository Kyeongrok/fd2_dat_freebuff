/*
 * func-name: sub_29AB2
 * func-address: 0x29ab2
 * callers: 0x29bcb
 * callees: 0x15f84, 0x3702f
 */

void __fastcall sub_29AB2(__int32 a1, int a2, int a3, int a4, int n4_1, int a6, int a7)
{
  int n4; // ebx
  int n201; // edi
  int v9; // ebp
  int n255; // eax
  int v11; // esi

  sub_3702F(a1, a2, a3, a4, 56);
  for ( n4 = 0; n4 < 4; ++n4 )
  {
    v11 = 2600 * n4 + a7 + 12587;
    if ( n4 == n4_1 )
      n201 = 201;
    else
      n201 = 205;
    arg4 = n4 + 1;
    v9 = 320 * (19 * n4 + 119) + a6;
    sub_15F84((unsigned __int8 *)n201, v9 + 10, n4 + 1, a4, n4, arg0, 549, v9 + 10, 320, n201, 76, 0, 0, 0);
    n255 = *(unsigned __int8 *)(v11 + 2560);
    if ( n255 == 255 )
    {
      sub_15F84((unsigned __int8 *)n201, 255, n4 + 1, a4, n4, arg0, 514, v9 + 88, 320, n201, 76, 0, 0, 0);
    }
    else
    {
      sub_15F84((unsigned __int8 *)n201, n255 + 514, v9 + 40, a4, n4, arg0, n255 + 514, v9 + 40, 320, n201, 76, 0, 0, 0);
      sub_15F84(
        (unsigned __int8 *)n201,
        *(unsigned __int8 *)(v11 + 2560) + 550,
        v9 + 40,
        a4,
        n4,
        arg0,
        *(unsigned __int8 *)(v11 + 2560) + 550,
        v9 + 130,
        320,
        n201,
        76,
        0,
        0,
        0);
    }
  }
  JUMPOUT(0x28B3C);
}
