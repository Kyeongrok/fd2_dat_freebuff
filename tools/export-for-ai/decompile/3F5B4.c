/*
 * func-name: sub_3F5B4
 * func-address: 0x3f5b4
 * callers: 0x3f656
 * callees: 0x37b55, 0x46f3a
 */

int __cdecl sub_3F5B4(int a1, int a2, _DWORD *a3)
{
  unsigned int i; // edi
  char n45; // dl
  int j; // ebx
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h]
  int v9; // [esp+4h] [ebp-10h]

  v8 = 0;
  v9 = 1;
  for ( i = 0; i < strlen(a1); ++i )
  {
    n45 = *(_BYTE *)(i + a1);
    if ( n45 == 45 )
    {
      v9 = -v9;
    }
    else if ( (byte_51840[(unsigned __int8)(n45 + 1)] & 2) == 0 )
    {
      for ( j = 0; j < a2; ++j )
      {
        v6 = (unsigned __int8)byte_511B4[j];
        if ( toupper(*(unsigned __int8 *)(i + a1)) == v6 )
        {
          v8 = j + a2 * v8;
          break;
        }
      }
      if ( j == a2 )
        break;
    }
  }
  if ( a3 )
    *a3 = i + a1;
  return v9 * v8;
}
