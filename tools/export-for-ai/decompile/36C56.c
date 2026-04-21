/*
 * func-name: sub_36C56
 * func-address: 0x36c56
 * callers: 0x36cab, 0x41300, 0x44180
 * callees: 0x3d074, 0x3d36c, 0x3d3a6
 */

int __cdecl sub_36C56(int a1)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi

  n3_10 = 0;
  result = open(a1, 512);
  v2 = result;
  if ( result == -1 )
  {
    n3_10 = 3;
  }
  else
  {
    v3 = filelength(result);
    if ( v3 == -1 )
      n3_10 = 5;
    close(v2);
    return v3;
  }
  return result;
}
