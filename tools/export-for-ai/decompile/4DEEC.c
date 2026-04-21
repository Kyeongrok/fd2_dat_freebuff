/*
 * func-name: sub_4DEEC
 * func-address: 0x4deec
 * callers: 0x219ad, 0x22046
 * callees: none
 */

char __cdecl sub_4DEEC(int a1, int a2, _BYTE *a3)
{
  _BYTE *v4; // esi
  _BYTE *v5; // edi
  int v6; // eax

  v4 = a3;
  v5 = a3;
  v6 = 0;
  do
  {
    LOBYTE(v6) = *v4++;
    LOBYTE(v6) = *(_BYTE *)(v6 + a1);
    *v5++ = v6;
    --a2;
  }
  while ( a2 );
  return v6;
}
