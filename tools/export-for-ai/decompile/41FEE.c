/*
 * func-name: sub_41FEE
 * func-address: 0x41fee
 * callers: 0x3958e
 * callees: 0x41b84, 0x41deb, 0x46f4f
 */

int __cdecl sub_41FEE(_DWORD *a1, int a2, int a3)
{
  int v3; // eax

  v3 = strnicmp(a2, aCreative, 8);              // "Creative"
  if ( v3 )
  {
    if ( strnicmp(a2 + 8, aWave, 4) )           // "WAVE"
    {
      strcpy(&Corrupted__INI_file_n, "Unrecognized digital audio file type\n");
      return 0;
    }
    v3 = 1;
  }
  if ( v3 )
  {
    a1[547] = 0;
    sub_41DEB(a2, (int)a1);
  }
  else
  {
    a1[542] = *(unsigned __int16 *)(a2 + 20) + a2;
    a1[545] = a3;
    a1[546] = a3 == -1;
    a1[547] = 0;
    sub_41B84(a1, 0);
  }
  if ( a1[547] == -1 )
  {
    strcpy(&Corrupted__INI_file_n, "Invalid or missing data block\n");
    return 0;
  }
  return 1;
}
