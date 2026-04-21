/*
 * func-name: sub_1B14B
 * func-address: 0x1b14b
 * callers: 0x1b1e7
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1B14B(__int32 a1, int a2, int a3, int a4, int a5, int n12)
{
  int result; // eax
  int n15; // ebp
  int n172; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  int n15_1; // ebx

  result = sub_3702F(a1, a2, a3, a4, 32);
  n15 = 15;
  if ( n12 >= 8 )
  {
    if ( n12 <= 12 )
    {
      v9 = 4 * (4 - (n12 - 8));
      n172 = v9 + 172;
      if ( v9 + 187 > 200 )
        n15 = v9 - 28;
    }
    else
    {
      n172 = 172;
    }
    result = 320 * n172;
    v10 = a5 + 55169;
    v11 = result + 129;
    for ( n15_1 = 0; n15_1 < n15; ++n15_1 )
    {
      result = memmove(v11 + dword_53A49, v10, 63);
      v10 += 320;
      v11 += 320;
    }
  }
  return result;
}
