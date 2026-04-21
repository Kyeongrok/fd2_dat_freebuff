/*
 * func-name: sub_11019
 * func-address: 0x11019
 * callers: 0x10010, 0x1088d, 0x10c50, 0x26152, 0x2986f, 0x2aa00, 0x2af28, 0x2b843
 * callees: 0x3702f, 0x3706e, 0x373ca, 0x3776e, 0x37940
 */

int __fastcall sub_11019(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // ebp
  int n13; // eax
  int n12_1; // eax
  int i; // eax
  int n12; // eax
  _DWORD v13[13]; // [esp+0h] [ebp-48h]
  int v14; // [esp+34h] [ebp-14h]
  int v15; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 92);
  v15 = a3;
  fseek(a6, 6, 0);
  v6 = (_BYTE *)malloc(6720);
  sub_373CA(v6, 1u, 6720, a6);
  for ( n13 = 0; n13 < 13; ++n13 )
    v13[n13] = *(_DWORD *)&v6[48 * a5 + 4 * n13];
  v14 = v13[12] - v13[0];
  free(v6);
  if ( dword_53BDF )
  {
    for ( i = 0; i < dword_53BDF; ++i )
    {
      if ( a5 == dword_53B17[i] )
        return i;
    }
    dword_53B17[i] = a5;
    fseek(a6, v13[0], 0);
    sub_373CA((_BYTE *)(buf + dword_53A61), 1u, v14, a6);
    for ( n12 = 0; n12 < 12; ++n12 )
      *(_DWORD *)(dword_53A61 + 4 * (n12 + 12 * dword_53BDF)) = v13[n12] - v13[0] + buf;
    buf += v14;
    return dword_53BDF++;
  }
  else
  {
    dword_53B17[0] = a5;
    dword_53A61 = malloc((char *)&loc_329FE + 2);
    fseek(a6, v13[0], 0);
    sub_373CA((_BYTE *)(dword_53A61 + 1920), 1u, v14, a6);
    for ( n12_1 = 0; n12_1 < 12; ++n12_1 )
      *(_DWORD *)(dword_53A61 + 4 * n12_1) = v13[n12_1] - v13[0] + 1920;
    ++dword_53BDF;
    buf = v14 + 1920;
    return 0;
  }
}
