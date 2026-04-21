/*
 * func-name: sub_3669A
 * func-address: 0x3669a
 * callers: 0x367d1
 * callees: 0x3645d, 0x3d074, 0x3d2c0, 0x3d36c
 */

int __cdecl sub_3669A(int a1, char a2)
{
  int v2; // edi
  int v3; // ebp
  int v5; // eax
  unsigned int i; // esi
  char v7[64]; // [esp+0h] [ebp-D8h] BYREF
  int v8; // [esp+40h] [ebp-98h]
  unsigned int v9; // [esp+44h] [ebp-94h]
  _DWORD v10[6]; // [esp+ACh] [ebp-2Ch] BYREF
  int v11; // [esp+C4h] [ebp-14h] BYREF
  _DWORD v12[4]; // [esp+C8h] [ebp-10h] BYREF

  v12[0] = 8224;
  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = a1;
  }
  else
  {
    v3 = open(a1, 512, v7[0]);
    if ( v3 == -1 )
      return 0;
  }
  sub_3645D(v3, 60, a2, (int)&v11, 4);
  sub_3645D(v3, v11, a2, (int)v12, 2);
  if ( strcmp(v12, aLx) )                       // "LX"
  {
    close(v3);
    return 0;
  }
  sub_3645D(v3, v11, a2, (int)v7, 172);
  v5 = v8 + v11;
  for ( i = 0; i < v9; ++i )
  {
    v5 = sub_3645D(v3, v5, a2, (int)v10, 24);
    v2 += v10[0];
  }
  if ( (a2 & 1) == 0 )
    close(v3);
  return v2 + 15 * v9;
}
