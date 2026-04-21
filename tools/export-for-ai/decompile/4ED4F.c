/*
 * func-name: sub_4ED4F
 * func-address: 0x4ed4f
 * callers: 0x4ed34
 * callees: none
 */

char __usercall sub_4ED4F@<al>(_BYTE *a1@<edi>, __int16 *a2@<esi>)
{
  __int16 v2; // ax
  _WORD *v3; // esi
  __int16 v4; // bp
  __int16 v5; // ax
  char *v6; // esi
  __int16 v7; // dx
  int v8; // ecx
  int v9; // ebx
  char result; // al
  _BYTE *v11; // [esp-4h] [ebp-4h]

  v2 = *a2;
  v3 = a2 + 1;
  v4 = v2;
  v5 = *v3;
  v6 = (char *)(v3 + 1);
  v7 = v5;
  HIWORD(v8) = 0;
  v9 = (unsigned __int16)word_627A3;
  do
  {
    v11 = a1;
    LOWORD(v8) = v4;
    do
    {
      result = *v6++;
      if ( result )
        *a1 = result;
      ++a1;
      --v8;
    }
    while ( v8 );
    a1 = &v11[v9];
    --v7;
  }
  while ( v7 );
  return result;
}
