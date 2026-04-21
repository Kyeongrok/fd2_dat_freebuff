/*
 * func-name: sub_4E795
 * func-address: 0x4e795
 * callers: none
 * callees: none
 */

char __cdecl sub_4E795(_BYTE *a1, __int16 *a2, int a3, int a4)
{
  int v5; // ebx
  _BYTE *v6; // esi
  __int16 v7; // dx
  int v8; // ecx
  int v9; // eax

  word_6017B = *a2;
  v5 = a3 - (unsigned __int16)word_6017B;
  v6 = a2 + 2;
  v7 = a2[1];
  HIWORD(v8) = 0;
  v9 = 0;
  do
  {
    LOWORD(v8) = word_6017B;
    do
    {
      LOBYTE(v9) = *v6++;
      if ( (_BYTE)v9 )
      {
        LOBYTE(v9) = *a1;
        LOBYTE(v9) = *(_BYTE *)(v9 + a4);
        *a1 = v9;
      }
      ++a1;
      --v8;
    }
    while ( v8 );
    a1 += v5;
    --v7;
  }
  while ( v7 );
  return v9;
}
