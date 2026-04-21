/*
 * func-name: sub_197E5
 * func-address: 0x197e5
 * callers: 0x16f55, 0x190ac, 0x19df7, 0x1aa1d, 0x26152, 0x2670e, 0x2872b, 0x28cbd, 0x29300, 0x2a43e, 0x2aa00, 0x2af28
 * callees: 0x11eb0, 0x11eee, 0x127a9, 0x1297d, 0x3702f, 0x3771c, 0x4ed34
 */

void __fastcall sub_197E5(__int32 a1, int a2, int a3, int a4)
{
  int v4; // eax
  char *v5; // edi
  __int32 v6; // eax
  int n4; // ebp
  int n86; // esi
  int n2; // esi
  int n86_1; // esi
  _DWORD v11[2]; // [esp+0h] [ebp-20h]
  int v12; // [esp+8h] [ebp-18h]
  int n16; // [esp+Ch] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-4h]

  v4 = sub_3702F(a1, a2, a3, a4, 60);
  v14 = a3;
  v11[0] = unk_51EE5;
  v11[1] = unk_51EE9;
  v5 = (char *)&loc_1A599 + dword_53A49 + 3;
  v12 = -16;
  n16 = 16;
  if ( (unsigned int)dword_53A51 > 1 )
  {
    sub_1297D(v4, a2, a3, a4);
    sub_11EEE(dword_53A49 + 32904, a2, a3, a4, dword_53A49 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
    sub_127A9(v6, a2, a3, a4);
  }
  for ( n4 = 0; n4 < 4; ++n4 )
  {
    n86 = 0;
    v12 += 4;
    n16 -= 4;
    while ( n86 < 86 )
    {
      a3 = dword_53C63 + 35845;
      a2 = dword_53A49 + 32905;
      memmove(dword_53A49 + 32905 + 456 * (n86 + 108), dword_53C63 + 35845 + 320 * n86, 310);
      ++n86;
    }
    for ( n2 = 0; n2 < 2; ++n2 )
    {
      a3 = dword_53A89;
      a2 = dword_53A89 + *(_DWORD *)(12 * v11[n2] + dword_53A89);
      sub_4ED34(&v5[*(&v12 + n2)], a2, 456);
    }
    sub_11EB0(dword_53A49 + 32904, a2, a3, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  }
  for ( n86_1 = 0; n86_1 < 86; ++n86_1 )
    memmove(320 * n86_1 + 691205, 320 * (n86_1 + 112) + dword_53C63 + 5, 310);
  JUMPOUT(0x17E03);
}
