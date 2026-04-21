/*
 * func-name: sub_46F9C
 * func-address: 0x46f9c
 * callers: 0x3f656
 * callees: 0x3dd11
 */

_BYTE *__cdecl sub_46F9C(_BYTE *a1, int n80, int a3)
{
  _BYTE *v4; // ebx
  int v5; // eax
  int v7; // [esp+0h] [ebp-8h]
  int n10; // [esp+4h] [ebp-4h]

  v4 = a1;
  v5 = *(_DWORD *)(a3 + 12) & 0x30;
  *(_BYTE *)(a3 + 12) &= 0xCFu;
  v7 = v5;
  do
  {
    if ( --n80 <= 0 )
      break;
    n10 = fgetc(a3);
    if ( n10 == -1 )
      break;
    *v4++ = n10;
  }
  while ( (_BYTE)n10 != 10 );
  if ( n10 == -1 && (v4 == a1 || (*(_BYTE *)(a3 + 12) & 0x20) != 0) )
    a1 = 0;
  else
    *v4 = 0;
  *(_DWORD *)(a3 + 12) |= v7;
  return a1;
}
