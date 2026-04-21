/*
 * func-name: sub_43160
 * func-address: 0x43160
 * callers: 0x44330, 0x443d0, 0x44790
 * callees: 0x37910
 */

_DWORD *__cdecl sub_43160(_DWORD *a1)
{
  _DWORD *v1; // edx
  int n16; // eax
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v1 = a1;
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    v1[36] = n16;
    ++v1;
  }
  memset(a1 + 52, -1, 1088);
  v3 = a1;
  do
  {
    ++v3;
    v3[31] = -1;
  }
  while ( v3 != a1 + 4 );
  result = a1;
  do
  {
    ++result;
    result[324] = -1;
  }
  while ( result != a1 + 32 );
  a1[324] = 0;
  a1[11] = 0;
  a1[22] = 0;
  a1[23] = -1;
  a1[26] = 0;
  a1[25] = 0;
  a1[24] = 4;
  a1[27] = 8000000;
  a1[12] = 0;
  a1[10] = 1;
  return result;
}
