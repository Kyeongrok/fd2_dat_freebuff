/*
 * func-name: sub_41EC1
 * func-address: 0x41ec1
 * callers: 0x393b5
 * callees: 0x392d0, 0x39521, 0x3a644, 0x41af4, 0x41b84, 0x41deb, 0x46f4f
 */

void __cdecl sub_41EC1(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  bool v9; // eax

  sub_41AF4();
  if ( !strnicmp(a2, aCreative, 8) )            // "Creative"
  {
    v4 = 0;
  }
  else
  {
    if ( strnicmp(a2 + 8, aWave, 4) )           // "WAVE"
    {
      strcpy(&Corrupted__INI_file_n, "Unrecognized digital audio file type\n");
      return;
    }
    v4 = 1;
  }
  sub_392D0(0, a2, a1, v3, a1);
  v6 = (_DWORD *)v5;
  v7 = v5;
  if ( v5 )
  {
    sub_39521(v5, v5);
    v6[541] = 0;
    if ( v4 )
    {
      v6[547] = 1;
      sub_3A644(v8, (int)v6, (int)sub_41B26);
      sub_41DEB(a2, (int)v6);
    }
    else
    {
      v6[542] = *(unsigned __int16 *)(a2 + 20) + a2;
      v6[545] = a3;
      v9 = a3 == -1;
      v6[546] = v9;
      v6[547] = 1;
      sub_3A644(v9, (int)v6, (int)sub_41DDB);
      sub_41B84(v6, 0);
    }
    if ( *(_DWORD *)(v7 + 2188) == -1 )
      strcpy(&Corrupted__INI_file_n, "Invalid or missing data block\n");
  }
}
