/*
 * func-name: sub_1E739
 * func-address: 0x1e739
 * callers: 0x1e611, 0x1e7f6, 0x1e856
 * callees: 0x1685c, 0x3702f
 */

int __fastcall sub_1E739(__int32 a1, int n69_1, int a3, int a4, int a5, int n456, int n55)
{
  int v7; // eax
  int n69; // ebx
  __int32 v9; // eax
  int result; // eax
  __int32 v11; // eax

  v7 = sub_3702F(a1, n69_1, a3, a4, 36);
  n69 = 0;
  if ( n55 <= 0 )
  {
    while ( 1 )
    {
      v11 = a5 + n69;
      if ( n69 >= 69 )
        break;
      sub_1685C(v11, n69_1, n69, a4, a5 + n69, n456, dword_53A81, 29);
      ++n69;
    }
    return sub_1685C(v11, n69_1, n69, a4, v11, n456, dword_53A81, 30);
  }
  sub_1685C(v7, n69_1, 0, a4, a5, n456, dword_53A81, 23);
  for ( n69 = 1; ; ++n69 )
  {
    v9 = a5 + n69;
    if ( n69 >= n55 )
      break;
    sub_1685C(v9, n69_1, n69, a4, a5 + n69, n456, dword_53A81, 24);
  }
  result = sub_1685C(v9, n69_1, n69, a4, a5 + n69, n456, dword_53A81, 25);
  if ( n55 < 70 )
  {
    while ( 1 )
    {
      n69_1 = n69++;
      v11 = a5 + n69;
      if ( n69_1 >= 69 )
        break;
      sub_1685C(v11, n69_1, n69, a4, a5 + n69, n456, dword_53A81, 29);
    }
    return sub_1685C(v11, n69_1, n69, a4, v11, n456, dword_53A81, 30);
  }
  return result;
}
