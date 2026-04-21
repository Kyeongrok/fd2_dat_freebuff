/*
 * func-name: sub_1B019
 * func-address: 0x1b019
 * callers: 0x1b1e7
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1B019(__int32 a1, int a2, int a3, int a4, int a5, int n7)
{
  int n17; // ebp
  int n19; // eax
  int n19_1; // ebx
  int n19_2; // esi
  int v10; // edi
  int v11; // esi
  int n17_1; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  n17 = 17;
  n19 = 19;
  if ( n7 >= 3 )
  {
    if ( n7 <= 7 )
    {
      n19_2 = 19 - 6 * (4 - (n7 - 3));
      n19_1 = n19_2;
      if ( n19_2 < 0 )
      {
        n19 = 6 * (4 - (n7 - 3));
        n17 = n19_2 + 17;
        n19_1 = 0;
      }
    }
    else
    {
      n19_1 = 19;
    }
    v10 = 320 * n19 + 109 + a5;
    n19 = 320 * n19_1;
    v11 = 320 * n19_1 + 109;
    for ( n17_1 = 0; n17_1 < n17; ++n17_1 )
    {
      n19 = memmove(v11 + dword_53A49, v10, 102);
      v10 += 320;
      v11 += 320;
    }
  }
  return n19;
}
