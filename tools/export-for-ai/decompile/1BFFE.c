/*
 * func-name: sub_1BFFE
 * func-address: 0x1bffe
 * callers: 0x1bbdc, 0x28efe
 * callees: 0x17e0b, 0x17eef, 0x18409, 0x184c0, 0x1b722, 0x1b750, 0x1b8a6, 0x1b9de, 0x1c142, 0x1c1c3, 0x3702f, 0x3771c, 0x3776e
 */

void __fastcall sub_1BFFE(__int32 a1, int a2, int a3, int a4, int n6)
{
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edi
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  int n6_1; // ebx

  v5 = sub_3702F(a1, a2, a3, a4, 32);
  LOWORD(v6) = sub_17E0B(v5, a2, n6, a4, n6);
  n3_3 = 0;
  while ( 1 )
  {
    do
    {
      v6 = sub_1B9DE(v6, a2, n6, a4, n6, 0);
      v7 = v6;
    }
    while ( !v6 );
    v8 = sub_1B722(v6, a2, n6, a4, n6, n3_3);
    v9 = v8;
    if ( v7 == -1 || (v8 = sub_1B8A6(v8, a2, n6, a4, n6)) == 0 )
    {
      for ( n6_1 = 0; n6_1 <= 11; ++n6_1 )
        v8 = sub_18409(v8, a2, n6_1, a4, n6_1, dword_53C5B, n30, dword_53C5F);
      memmove(655360, dword_53C5F, 64000);
      free(dword_53C5B);
      free(dword_53C5F);
      free(n30);
      JUMPOUT(0x10C49);
    }
    v6 = sub_1C1C3(n6, v9);
    if ( v6 )
    {
      v10 = sub_1C142(n6, n3_3);
      sub_1B750(v10, a2, n6, a4, n6);
      v11 = memmove(n655360_0, 655360, 64000);
      v12 = sub_17EEF(v11, a2, n6, a4, n6, n655360_0);
      sub_184C0(v12, a2, n6, a4, n6, -1, n655360_0);
      v6 = memmove(655360, n655360_0, 64000);
    }
  }
}
