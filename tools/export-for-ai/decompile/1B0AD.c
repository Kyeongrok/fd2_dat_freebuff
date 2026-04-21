/*
 * func-name: sub_1B0AD
 * func-address: 0x1b0ad
 * callers: 0x1b1e7
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1B0AD(__int32 a1, int a2, int a3, int a4, int a5, int n9)
{
  int n9_1; // eax
  int n16; // ebp
  int n155; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  int n16_1; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  n9_1 = n9;
  n16 = 16;
  if ( n9 >= 5 )
  {
    if ( n9 <= 9 )
    {
      v9 = 9 * (4 - (n9 - 5));
      n155 = v9 + 155;
      if ( v9 + 171 > 200 )
        n16 = v9 - 45;
    }
    else
    {
      n155 = 155;
    }
    n9_1 = 320 * n155;
    v10 = a5 + 49675;
    v11 = n9_1 + 75;
    for ( n16_1 = 0; n16_1 < n16; ++n16_1 )
    {
      n9_1 = memmove(v11 + dword_53A49, v10, 170);
      v10 += 320;
      v11 += 320;
    }
  }
  return n9_1;
}
