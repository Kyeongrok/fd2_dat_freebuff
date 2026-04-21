/*
 * func-name: sub_36CAB
 * func-address: 0x36cab
 * callers: 0x41300, 0x44180
 * callees: 0x36c56, 0x3706e, 0x3776e, 0x3cf9b, 0x3d074, 0x3d36c
 */

int __cdecl sub_36CAB(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // esi

  n3_10 = 0;
  v2 = sub_36C56(a1);
  v3 = v2;
  if ( v2 == -1 )
    goto LABEL_2;
  if ( a2 )
    v5 = a2;
  else
    v5 = malloc_0(v2);
  if ( !v5 )
  {
    n3_10 = 2;
    return 0;
  }
  v6 = open(a1, 512);
  v7 = v6;
  if ( v6 == -1 )
  {
    free_0(v5);
LABEL_2:
    n3_10 = 3;
    return 0;
  }
  if ( read(v6, v5, v3) != v3 )
  {
    free_0(v5);
    n3_10 = 5;
    return 0;
  }
  close(v7);
  return v5;
}
