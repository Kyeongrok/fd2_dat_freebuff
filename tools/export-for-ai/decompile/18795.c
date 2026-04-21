/*
 * func-name: sub_18795
 * func-address: 0x18795
 * callers: 0x17fc0, 0x18c6d
 * callees: 0x17d6f, 0x3702f
 */

int __fastcall sub_18795(__int32 a1, int a2, int a3, int a4, unsigned __int8 *a5, int n320, int n23, int a8, int a9)
{
  int result; // eax
  __int32 v10; // eax

  result = sub_3702F(a1, a2, a3, a4, 20);
  if ( a9 )
  {
    if ( a8 )
    {
      a2 = 101 * a8 % a9;
      v10 = 101 * a8 / a9 + 1;
    }
    else
    {
      v10 = 0;
    }
    return sub_17D6F(v10, a2, a3, a4, (int)a5, n320, v10, n23);
  }
  return result;
}
