/*
 * func-name: sub_12C60
 * func-address: 0x12c60
 * callers: 0x13a9f, 0x15f84
 * callees: 0x34894, 0x3702f
 */

int __fastcall sub_12C60(__int32 a1, int a2, int a3, int a4, int n39)
{
  int v5; // ebx
  int n6; // esi
  int v8; // ebx
  int i; // esi

  sub_3702F(a1, a2, a3, a4, 20);
  v5 = dword_53A45;
  dword_53C1B = 0;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    if ( *(unsigned __int8 *)(v5 + 8) == n39 )
    {
      dword_53C1B = v5;
      if ( !sub_34894(n6) )
        return n6;
    }
    v5 += 80;
  }
  if ( !dword_53C1B )
  {
    v8 = dword_53BF7;
    for ( i = 0; i < dword_53BFB; ++i )
    {
      if ( *(unsigned __int8 *)(v8 + 8) == n39 )
        dword_53C1B = v8;
      v8 += 80;
    }
  }
  return -1;
}
