/*
 * func-name: sub_17D6F
 * func-address: 0x17d6f
 * callers: 0x18795
 * callees: 0x1685c, 0x3702f
 */

int __fastcall sub_17D6F(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int n101; // ebx
  int i; // ebx
  __int32 v11; // eax
  __int32 v13; // eax

  v8 = sub_3702F(a1, a2, a3, a4, 36);
  n101 = 0;
  if ( a7 )
  {
    sub_1685C(v8, a2, 0, a4, a5, a6, dword_53A81, a8);
    for ( i = 1; ; ++i )
    {
      v11 = a5 + i;
      if ( i >= a7 )
        break;
      sub_1685C(v11, a8 + 1, i, a4, a5 + i, a6, dword_53A81, a8 + 1);
    }
    return sub_1685C(v11, a8 + 2, i, a4, v11, a6, dword_53A81, a8 + 2);
  }
  else
  {
    while ( 1 )
    {
      ++n101;
      v13 = a5 + n101;
      if ( n101 > 101 )
        break;
      sub_1685C(v13, a2, n101, a4, a5 + n101, a6, dword_53A81, 29);
    }
    return sub_1685C(v13, a2, n101, a4, v13, a6, dword_53A81, 30);
  }
}
