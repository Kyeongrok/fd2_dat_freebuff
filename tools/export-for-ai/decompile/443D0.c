/*
 * func-name: sub_443D0
 * func-address: 0x443d0
 * callers: 0x3adf5
 * callees: 0x3771c, 0x37b29, 0x382e9, 0x3845e, 0x42520, 0x43160, 0x4997e
 */

unsigned int __cdecl sub_443D0(int *a1, int _FDMUS.DAT_, int a3)
{
  unsigned int result; // eax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  unsigned int v10; // esi
  _WORD *v11; // edi
  unsigned int v12; // edx
  char *v13; // eax
  int v14; // esi
  char v15[4]; // [esp+0h] [ebp-24h] BYREF
  __int16 v16; // [esp+4h] [ebp-20h]
  __int16 v17; // [esp+Ch] [ebp-18h] BYREF
  int v18; // [esp+Eh] [ebp-16h]

  if ( !a1 )
    return 0;
  a1[1] = 2;
  result = sub_42520(_FDMUS.DAT_, a3);
  if ( !result )
  {
    strcpy(&Corrupted__INI_file_n, "Invalid XMIDI sequence\n");
    return result;
  }
  v4 = ((*(_DWORD *)(result + 4) & 0xFF000000) >> 24)
     + ((*(_DWORD *)(result + 4) & 0xFF00) << 8)
     + ((unsigned __int8)*(_DWORD *)(result + 4) << 24)
     + ((*(_DWORD *)(result + 4) & 0xFF0000u) >> 8);
  v5 = result + 12;
  a1[2] = 0;
  a1[3] = 0;
  v6 = result + v4 + 8;
  a1[4] = 0;
  if ( result + 12 < v6 )
  {
    do
    {
      if ( !strncmp(v5, aTimb, 4) )             // "TIMB"
        a1[2] = v5;
      if ( !strncmp(v5, &aCrbrn[1], 4) )        // "CRBRN"
        a1[3] = v5;
      if ( !strncmp(v5, &aNotevnt[3], 4) )      // "notEVNT"
        a1[4] = v5;
      v5 += ((*(_DWORD *)(v5 + 4) & 0xFF000000) >> 24)
          + ((*(_DWORD *)(v5 + 4) & 0xFF00) << 8)
          + ((unsigned __int8)*(_DWORD *)(v5 + 4) << 24)
          + ((*(_DWORD *)(v5 + 4) & 0xFF0000u) >> 8)
          + 8;
    }
    while ( v5 < v6 );
  }
  if ( !a1[4] )
  {
    result = 0;
    strcpy(&Corrupted__INI_file_n, "Invalid XMIDI sequence\n");
    return result;
  }
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 1;
  sub_43160(a1);
  a1[5] = a1[4] + 8;
  v7 = dword_5433C;
  a1[13] = dword_5433C;
  a1[14] = v7;
  a1[16] = 0;
  a1[15] = 0;
  a1[17] = 100;
  a1[18] = 100;
  a1[20] = 0;
  a1[19] = 0;
  v8 = a1[2];
  a1[21] = 0;
  if ( !v8 )
    return 1;
  memmove(&unk_54400, v8, 512);
  v9 = *a1;
  if ( *(_DWORD *)(*a1 + 420) )
  {
    v10 = 0;
    v11 = &unk_54400;
    while ( 1 )
    {
      v9 = word_54408[0];
      if ( v10 >= word_54408[0] )
        break;
      if ( (*(int (__cdecl **)(int, int, _DWORD))(*a1 + 420))(
             *a1,
             (unsigned __int16)(v11[5] & 0xFF00) >> 8,
             (unsigned __int8)v11[5]) )
      {
        v12 = v10 + 1;
        v13 = (char *)&unk_54400 + 2 * v10 + 2;
        while ( v12 < word_54408[0] )
        {
          v13 += 2;
          ++v12;
          *((_WORD *)v13 + 3) = *((_WORD *)v13 + 4);
        }
        --word_54408[0];
        if ( n2_6 >= 2u )
        {
          n2_6 -= 2;
        }
        else
        {
          n2_6 -= 2;
          --unk_54404;
        }
      }
      else
      {
        ++v11;
        ++v10;
      }
    }
  }
  if ( !word_54408[0] )
    return 1;
  if ( sub_3845E(v9) )
  {
    result = -1;
    strcpy(&Corrupted__INI_file_n, "No timbres loaded\n");
    return result;
  }
  ++*(_DWORD *)(*a1 + 20);
  v14 = *a1;
  if ( *(int *)(*a1 + 424) > 0 )
  {
    v16 = *(_WORD *)(v14 + 424);
    sub_382E9(*(_DWORD *)v14, *(_DWORD *)v14, 1282, (int)v15, 0);
    *(_DWORD *)(v14 + 424) = 0;
    *(_DWORD *)(v14 + 428) = 0;
  }
  memmove(*(_DWORD *)(*a1 + 8) + 256, &unk_54400, 512);
  sub_382E9(*a1, *(_DWORD *)*a1, 1283, 0, (int)&v17);
  --*(_DWORD *)(*a1 + 20);
  if ( v17 )
    return 1;
  sprintf(
    &Corrupted__INI_file_n,
    "Driver could not install timbre bank %u, patch %u\n",
    (__int16)v18 >> 8,
    (unsigned __int8)v18);
  return -1;
}
