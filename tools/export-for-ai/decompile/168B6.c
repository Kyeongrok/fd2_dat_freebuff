/*
 * func-name: sub_168B6
 * func-address: 0x168b6
 * callers: 0x165ac, 0x17eef, 0x1956b, 0x31c49
 * callees: 0x1685c, 0x3702f
 */

void __fastcall sub_168B6(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  __int32 v10; // eax
  int v11; // ebp
  int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // edx
  int v20; // eax
  int i; // ebx
  int j; // ebx
  int v23; // edi
  int v24; // ebx
  int k; // edi
  int m; // ebx
  int v27; // [esp+10h] [ebp-20h]
  int v28; // [esp+18h] [ebp-18h]
  int v29; // [esp+1Ch] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 68);
  v27 = a10 - 2;
  v28 = 16 * a6;
  v29 = 3 * a6;
  v10 = a5 + a6 * a8;
  v11 = v10 + a7;
  sub_1685C(v10, a2, a3, a4, v10 + a7, a6, dword_53A81, 1);
  v12 = 16 * a9 + v11 + 3;
  sub_1685C(16 * a9, v12, a3, a4, v12, a6, dword_53A81, 2);
  v13 = a10 * v28;
  sub_1685C(v11 + v29 + a10 * v28, v12, a10 * v28, a4, v11 + v29 + a10 * v28, a6, dword_53A81, 3);
  v14 = sub_1685C(v13 + v29 + v12, v12, v13, a4, v13 + v29 + v12, a6, dword_53A81, 4);
  sub_1685C(v14, v12, a10 * 16 * a6, a4, v11 + 3, a6, dword_53A81, 5);
  v15 = v11 + 19 + 16 * (a9 - 2);
  sub_1685C(v11 + 19, v15, a10 * 16 * a6, a4, v15, a6, dword_53A81, 6);
  sub_1685C(v13 + v29 + v11 + 3, v15, v13, a4, v13 + v29 + v11 + 3, a6, dword_53A81, 7);
  v16 = sub_1685C(v13 + v29 + v15, v15, v13, a4, v13 + v29 + v15, a6, dword_53A81, 8);
  v17 = sub_1685C(v16, v15, a10 * 16 * a6, a4, v11 + 3 * a6, a6, dword_53A81, 14);
  v18 = 16 * (a9 - 2) + v11 + 3 * a6 + 35;
  sub_1685C(v17, v15, v18, a4, v18, a6, dword_53A81, 15);
  v19 = (a10 - 1) * 16 * a6;
  v20 = sub_1685C(a10 - 1, v19, v18, a4, v19 + v11 + 3 * a6, a6, dword_53A81, 16);
  sub_1685C(v20, v19, v19 + v18, a4, v19 + v18, a6, dword_53A81, 17);
  if ( a9 - 2 > 0 )
  {
    for ( i = 0; i < a9 - 2; ++i )
    {
      sub_1685C(16 * i, v19, i, a4, 16 * i + v11 + 19, a6, dword_53A81, 9);
      sub_1685C(a10 * v28, v19, i, a4, v29 + a10 * v28 + 16 * i + v11 + 19, a6, dword_53A81, 12);
    }
  }
  if ( v27 > 0 )
  {
    for ( j = 0; j < v27; j = v23 )
    {
      v23 = j + 1;
      v24 = v11 + v29 + (j + 1) * v28;
      sub_1685C(v11 + v29, v19, v24, a4, v24, a6, dword_53A81, 10);
      sub_1685C(v24 + 16 * a9 + 3, v19, v24, a4, v24 + 16 * a9 + 3, a6, dword_53A81, 11);
    }
  }
  for ( k = 0; k < a10; ++k )
  {
    for ( m = 0; m < a9; ++m )
      sub_1685C(
        16 * m + v11 + v29 + 3 + k * v28,
        16 * m + v11 + v29 + 3,
        m,
        a4,
        16 * m + v11 + v29 + 3 + k * v28,
        a6,
        dword_53A81,
        13);
  }
  JUMPOUT(0x11452);
}
