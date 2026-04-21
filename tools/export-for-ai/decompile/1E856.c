/*
 * func-name: sub_1E856
 * func-address: 0x1e856
 * callers: 0x1548e
 * callees: 0x1b722, 0x1b83d, 0x1e739, 0x1e98c, 0x1ecc7, 0x3702f, 0x3790a, 0x4e8bc, 0x4ebe3
 */

void __fastcall sub_1E856(__int32 a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int n3; // eax
  int n55; // ebx
  __int32 v13; // [esp-Ch] [ebp-28h]
  int v14; // [esp+0h] [ebp-1Ch]
  int n2; // [esp+4h] [ebp-18h]
  int v16; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 44);
  n2 = 1;
  v7 = 80 * a6 + dword_53A45;
  v8 = sub_1B83D(80 * a6, a6, a3, a4, a5, 0);
  v9 = sub_1B722(v8, a6, a3, a4, a5, v8);
  n3 = (unsigned __int8)sub_4E8BC(v9)[9];
  if ( n3 == 3 )
    n2 = 2;
  if ( sub_4EBE3(n3) % 100 < 3 )
    n2 = 2;
  do
  {
    if ( !n2-- )
      break;
    v14 = *(unsigned __int16 *)(v7 + 66);
    n55 = 70 * *(unsigned __int16 *)(v7 + 64) / v14;
    v16 = sub_1ECC7(a5, a6);
    sub_1E98C(a5, a6);
    while ( n55 >= 69 * v16 / v14 + 1 )
    {
      v13 = *a7 + 320 * (a7[1] + 6) + 655360 + 7;
      sub_1E739(v13, a7[1] + 6, n55, a4, v13, 320, n55);
      j___delay(8);
      --n55;
    }
  }
  while ( v16 );
  JUMPOUT(0x1317D);
}
