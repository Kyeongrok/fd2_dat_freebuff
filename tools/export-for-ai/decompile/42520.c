/*
 * func-name: sub_42520
 * func-address: 0x42520
 * callers: 0x443d0
 * callees: 0x4997e
 */

unsigned int __cdecl sub_42520(int a1, int a2)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int result; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v3 = a2;
  v4 = 0;
  // "YTEXMID"
  do
  {
    a1 += v4;
    if ( strncmp(a1, aForm, 4) && strncmp(a1, &aSizcat[3], 4) )// "sizCAT "
      return 0;
    v4 = ((*(_DWORD *)(a1 + 4) & 0xFF000000) >> 24)
       + ((*(_DWORD *)(a1 + 4) & 0xFF0000u) >> 8)
       + ((*(_DWORD *)(a1 + 4) & 0xFF00) << 8)
       + ((unsigned __int8)*(_DWORD *)(a1 + 4) << 24)
       + 8;
  }
  while ( strncmp(a1 + 8, &aYtexmid[3], 4) );
  result = strncmp(a1, aForm, 4);               // "FORM"
  if ( result )
  {
    v6 = a1 + v4;
    v7 = a1 + 12;
    if ( v7 >= v6 )
      return 0;
    // "YTEXMID"
    while ( strncmp(v7 + 8, &aYtexmid[3], 4) || v3-- )
    {
      v7 += ((*(_DWORD *)(v7 + 4) & 0xFF000000) >> 24)
          + ((*(_DWORD *)(v7 + 4) & 0xFF00) << 8)
          + ((unsigned __int8)*(_DWORD *)(v7 + 4) << 24)
          + ((*(_DWORD *)(v7 + 4) & 0xFF0000u) >> 8)
          + 8;
      if ( v7 >= v6 )
        return 0;
    }
    return v7;
  }
  else if ( !a2 )
  {
    return a1;
  }
  return result;
}
