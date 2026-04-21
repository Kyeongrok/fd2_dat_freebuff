/*
 * func-name: sub_41300
 * func-address: 0x41300
 * callers: 0x39176
 * callees: 0x36c56, 0x36cab, 0x3776e, 0x38f2b, 0x3901e, 0x40cf0
 */

int __cdecl sub_41300(int a1, const void *src)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int *v7; // esi

  result = sub_36CAB(a1, 0);
  v3 = result;
  if ( result )
  {
    v4 = sub_36C56(a1);
    sub_38F2B(v4, v3, v4);
    v6 = v5;
    free_0(v3);
    if ( v6 )
    {
      v7 = sub_40CF0(v6, src);
      if ( !v7 )
        sub_3901E(0, v6);
      return (int)v7;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    strcpy(&Corrupted__INI_file_n, "Driver file not found\n");
  }
  return result;
}
