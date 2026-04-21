/*
 * func-name: sub_15880
 * func-address: 0x15880
 * callers: 0x1567e
 * callees: 0x3702f, 0x4e866, 0x4e8bc
 */

void __fastcall sub_15880(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edi
  char *v8; // eax
  int v9; // ebp
  int n24; // esi
  int i; // esi
  int n3; // eax
  int v13; // ebx
  int v14; // ebp
  unsigned __int16 *v15; // eax
  int j; // esi
  int n18; // eax

  sub_3702F(a1, a2, a3, a4, 28);
  v7 = 0;
  v8 = sub_4E8BC(a5);
  v9 = *((unsigned __int16 *)v8 + 7);
  n24 = (unsigned __int8)v8[13];
  if ( n24 == 5 || n24 == 13 )
  {
    for ( i = 0; i < a6; ++i )
    {
      v13 = 80 * *(unsigned __int8 *)(i + a7) + dword_53A45;
      v14 = *(unsigned __int16 *)(v13 + 64);
      if ( v14 > *(unsigned __int16 *)(v13 + 66) / 3 )
      {
        if ( v14 > *(unsigned __int16 *)(v13 + 66) / 2 )
          n3 = 0;
        else
          n3 = 3;
      }
      else
      {
        n3 = 8;
      }
      if ( *(char *)(v13 + 52) < 0 )
        n3 *= 3;
      v7 += n3;
    }
  }
  else if ( n24 == 20 || n24 == 21 || n24 == 24 )
  {
    v15 = (unsigned __int16 *)sub_4E866(*((unsigned __int16 *)v8 + 7));
    if ( n24 != 24 )
      v9 = *v15;
    for ( j = 0; j < a6; ++j )
    {
      if ( v9 >= *(unsigned __int16 *)(dword_53A45 + 80 * *(unsigned __int8 *)(j + a7) + 64) )
        n18 = 18;
      else
        n18 = 8;
      v7 += n18;
    }
  }
  JUMPOUT(0x22BBE);
}
