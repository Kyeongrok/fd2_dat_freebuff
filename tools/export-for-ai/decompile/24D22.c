/*
 * func-name: sub_24D22
 * func-address: 0x24d22
 * callers: 0x10652, 0x11eee, 0x24c1e
 * callees: 0x3702f, 0x3706e, 0x3771c, 0x3776e
 */

char __fastcall sub_24D22(__int32 a1, int a2, int a3, int a4, int n2)
{
  char n2_1; // al
  int v6; // esi
  int i; // ebx

  sub_3702F(a1, a2, a3, a4, 24);
  if ( n2 )
  {
    n2_1 = n2;
    n2_3 = n2;
  }
  else
  {
    v6 = malloc(312 * (unsigned int)(unsigned __int8)n2_3);
    memmove(v6, dword_53AFF + 312 * (192 - (unsigned __int8)n2_3), 312 * (unsigned __int8)n2_3);
    for ( i = 191 - (unsigned __int8)n2_3; i >= 0; --i )
      memmove(312 * (unsigned __int8)n2_3 + dword_53AFF + 312 * i, dword_53AFF + 312 * i, 312);
    memmove(dword_53AFF, v6, 312 * (unsigned __int8)n2_3);
    return free(v6);
  }
  return n2_1;
}
