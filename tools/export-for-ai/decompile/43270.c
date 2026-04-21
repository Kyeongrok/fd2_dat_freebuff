/*
 * func-name: sub_43270
 * func-address: 0x43270
 * callers: 0x43ad0
 * callees: 0x3771c, 0x382e9, 0x3af5b, 0x42270, 0x424b0, 0x42980, 0x43230
 */

void __cdecl sub_43270(int *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  int n100; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edx
  unsigned __int8 *v12; // ebx
  unsigned int n0x80; // eax
  unsigned __int8 *v14; // ebx
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  int v22; // eax
  char v23; // dl
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // edi
  int v29; // eax
  unsigned int n512; // edi
  unsigned int n128_1; // eax
  int n3; // eax
  int n128; // eax
  int v34; // eax
  int n32; // ebx
  int v36; // esi
  int v37; // eax
  unsigned __int8 *v38; // ebx
  _DWORD *v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // edi
  int v43; // edx
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  int v47; // edx
  int v48; // esi
  int v49; // ecx
  int v50; // ebx
  int v51; // eax
  int v52; // ebx
  int v53; // edx
  int v54; // esi
  int v55; // ecx
  int v56; // ebx
  _DWORD *v57; // [esp-4h] [ebp-20h]
  _BYTE v58[4]; // [esp+0h] [ebp-1Ch] BYREF
  __int16 v59; // [esp+4h] [ebp-18h]
  int v60; // [esp+Ch] [ebp-10h]

  if ( !a1[5] && !dword_53718 )
  {
    v1 = a1[7];
    dword_53718 = 1;
    dword_543EC = v1;
    dword_543E0 = a1[6];
    while ( dword_543EC )
    {
      v2 = dword_543E0;
      if ( *(_DWORD *)(dword_543E0 + 4) == 4 )
      {
        ++*(_DWORD *)(dword_543E0 + 48);
        v3 = *(_DWORD *)(v2 + 68) + *(_DWORD *)(v2 + 84);
        dword_543F8 = 0;
        *(_DWORD *)(v2 + 84) = v3;
        while ( 1 )
        {
          n100 = *(_DWORD *)(dword_543E0 + 84);
          if ( n100 < 100 )
            break;
          v5 = *(_DWORD *)(dword_543E0 + 1296);
          *(_DWORD *)(dword_543E0 + 84) = n100 - 100;
          if ( v5 > 0 )
          {
            ::n32 = 0;
            do
            {
              v6 = dword_543E0;
              v7 = (_DWORD *)(dword_543E0 + 4 * ::n32);
              if ( v7[325] != -1 )
              {
                v8 = v7[389] - 1;
                v7[389] = v8;
                if ( v8 <= 0 )
                {
                  sub_42980(v6, v7[325] | 0x80, v7[357], 0, 0);
                  v9 = dword_543E0;
                  *(_DWORD *)(dword_543E0 + 4 * ::n32 + 1300) = -1;
                  v10 = *(_DWORD *)(v9 + 1296) - 1;
                  *(_DWORD *)(v9 + 1296) = v10;
                  if ( !v10 )
                    break;
                }
              }
              ++::n32;
            }
            while ( ::n32 < 32 );
          }
          v11 = *(_DWORD *)(dword_543E0 + 44) - 1;
          *(_DWORD *)(dword_543E0 + 44) = v11;
          if ( v11 <= 0 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v12 = *(unsigned __int8 **)(dword_543E0 + 20);
                n0x80 = *v12;
                n144 = n0x80;
                if ( n0x80 < 0x80 || dword_543F8 )
                {
                  if ( !dword_543F8 )
                  {
                    v37 = dword_543E0;
                    v38 = *(unsigned __int8 **)(dword_543E0 + 20);
                    *(_DWORD *)(dword_543E0 + 20) = v38 + 1;
                    *(_DWORD *)(v37 + 44) = *v38;
                  }
                  goto LABEL_67;
                }
                if ( n0x80 >= 0xF7 )
                  break;
                if ( n0x80 != 240 )
                  goto LABEL_41;
LABEL_38:
                dword_543DC = *(_DWORD *)(dword_543E0 + 20) + 1;
                v27 = sub_424B0(&dword_543DC);
                v28 = *(_DWORD *)(dword_543E0 + 20);
                ::n512 = dword_543DC - v28 + v27;
                v29 = v28;
                n512 = ::n512;
                v60 = v29;
                sub_42270((int)a1);
                if ( n512 > 0x200 )
                  n512 = 512;
                memmove(a1[2] + 256, v60, n512);
                ++a1[106];
                sub_42270((int)a1);
                *(_DWORD *)(dword_543E0 + 20) += ::n512;
              }
              if ( n0x80 <= 0xF7 )
                goto LABEL_38;
              if ( n0x80 == 255 )
              {
                v14 = v12 + 2;
                v57 = (_DWORD *)(dword_543E0 + 20);
                n47 = *(v14 - 1);
                *(_DWORD *)(dword_543E0 + 20) = v14;
                ::n512 = sub_424B0(v57);
                if ( (unsigned int)n47 < 0x51 )
                {
                  if ( n47 != 47 )
                    goto LABEL_37;
                  dword_543F8 = 1;
                  v15 = dword_543E0;
                  v16 = *(_DWORD *)(dword_543E0 + 40);
                  if ( v16 && (*(_DWORD *)(dword_543E0 + 40) = v16 - 1, v16 == 1) )
                  {
                    sub_3AF5B(v15, v15);
                    v19 = dword_543E0;
                    v20 = *(_DWORD *)(dword_543E0 + 36);
                    *(_DWORD *)(dword_543E0 + 4) = 2;
                    if ( !v20 )
                      goto LABEL_37;
                    (*(void (__cdecl **)(int))(v19 + 36))(v19);
                    *(_DWORD *)(dword_543E0 + 20) += ::n512;
                  }
                  else
                  {
                    v17 = (_DWORD *)dword_543E0;
                    *(_DWORD *)(dword_543E0 + 88) = 0;
                    v17[23] = -1;
                    v18 = v17[4];
                    v17[26] = 0;
                    v17[5] = v18 + 8;
                    *(_DWORD *)(dword_543E0 + 20) += ::n512;
                  }
                }
                else if ( (unsigned int)n47 <= 0x51 )
                {
                  dword_543F4 = *(unsigned __int8 *)(*(_DWORD *)(dword_543E0 + 20) + 2)
                              + (*(unsigned __int8 *)(*(_DWORD *)(dword_543E0 + 20) + 1) << 8)
                              + (**(unsigned __int8 **)(dword_543E0 + 20) << 16);
                  *(_DWORD *)(dword_543E0 + 108) = 16 * dword_543F4;
                  *(_DWORD *)(dword_543E0 + 20) += ::n512;
                }
                else
                {
                  if ( n47 == 88 )
                  {
                    v21 = dword_543E0;
                    *(_DWORD *)(dword_543E0 + 96) = **(unsigned __int8 **)(dword_543E0 + 20);
                    dword_543F4 = *(unsigned __int8 *)(*(_DWORD *)(v21 + 20) + 1) - 2;
                    v22 = 16000000 / dword_54334;
                    v23 = dword_543F4;
                    dword_543F0 = 16000000 / dword_54334;
                    if ( dword_543F4 >= 0 )
                    {
                      v24 = v22 << dword_543F4;
                    }
                    else
                    {
                      dword_543F4 = -dword_543F4;
                      v24 = v22 >> -v23;
                    }
                    *(_DWORD *)(v21 + 100) = v24;
                    v25 = (_DWORD *)dword_543E0;
                    *(_DWORD *)(dword_543E0 + 104) = 0;
                    v25[22] = 0;
                    v26 = v25[26] - v25[25];
                    ++v25[23];
                    v25[26] = v26;
                  }
LABEL_37:
                  *(_DWORD *)(dword_543E0 + 20) += ::n512;
                }
              }
              else
              {
LABEL_41:
                dword_543FC = n144 & 0xF;
                n144 &= 0xF0u;
                sub_42980(
                  dword_543E0,
                  **(_BYTE **)(dword_543E0 + 20),
                  *(unsigned __int8 *)(*(_DWORD *)(dword_543E0 + 20) + 1),
                  *(unsigned __int8 *)(*(_DWORD *)(dword_543E0 + 20) + 2),
                  1);
                if ( n144 == 144 )
                {
                  n128 = 0;
                  ::n32 = 0;
                  do
                  {
                    if ( *(_DWORD *)(dword_543E0 + n128 + 1300) == -1 )
                      break;
                    n128 += 4;
                    ++::n32;
                  }
                  while ( n128 < 128 );
                  if ( ::n32 == 32 )
                  {
                    strcpy(&Corrupted__INI_file_n, "Internal note queue overflow\n");
                    sub_3AF5B(n128, dword_543E0);
                    dword_53718 = 0;
                    *(_DWORD *)(dword_543E0 + 4) = 2;
                    return;
                  }
                  v34 = dword_543E0;
                  n32 = ::n32;
                  v36 = dword_543FC;
                  ++*(_DWORD *)(dword_543E0 + 1296);
                  *(_DWORD *)(v34 + 4 * n32 + 1300) = v36;
                  *(_DWORD *)(v34 + 4 * n32 + 1428) = *(unsigned __int8 *)(*(_DWORD *)(v34 + 20) + 1);
                  *(_DWORD *)(v34 + 20) += 3;
                  *(_DWORD *)(dword_543E0 + 4 * ::n32 + 1556) = sub_424B0((_DWORD *)(v34 + 20));
                }
                else
                {
                  n128_1 = **(_BYTE **)(dword_543E0 + 20) & 0xF0;
                  if ( n128_1 < 0xB0 )
                  {
                    if ( n128_1 < 0x90 )
                    {
                      if ( n128_1 == 128 )
                        goto LABEL_55;
                    }
                    else if ( n128_1 <= 0x90 || n128_1 == 160 )
                    {
LABEL_55:
                      n3 = 3;
                      goto LABEL_58;
                    }
                  }
                  else
                  {
                    if ( n128_1 <= 0xB0 )
                      goto LABEL_55;
                    if ( n128_1 < 0xD0 )
                    {
                      if ( n128_1 == 192 )
                      {
LABEL_56:
                        n3 = 2;
                        goto LABEL_58;
                      }
                    }
                    else
                    {
                      if ( n128_1 <= 0xD0 )
                        goto LABEL_56;
                      if ( n128_1 == 224 )
                        goto LABEL_55;
                    }
                  }
                  n3 = 0;
LABEL_58:
                  *(_DWORD *)(dword_543E0 + 20) += n3;
                }
              }
            }
          }
LABEL_67:
          if ( !dword_543F8 )
          {
            v39 = (_DWORD *)dword_543E0;
            v40 = *(_DWORD *)(dword_543E0 + 100) + *(_DWORD *)(dword_543E0 + 104);
            v41 = *(_DWORD *)(dword_543E0 + 108);
            *(_DWORD *)(dword_543E0 + 104) = v40;
            if ( v40 >= v41 )
            {
              v42 = v39[22];
              v39[26] = v40 - v41;
              ++v42;
              v43 = v39[24];
              v39[22] = v42;
              if ( v42 >= v43 )
              {
                v44 = v39[23];
                v39[22] = 0;
                v39[23] = v44 + 1;
              }
            }
          }
        }
        if ( !dword_543F8 )
        {
          if ( *(_DWORD *)(dword_543E0 + 52) != *(_DWORD *)(dword_543E0 + 56) )
          {
            *(_DWORD *)(dword_543E0 + 60) += *(_DWORD *)(*(_DWORD *)dword_543E0 + 16);
            do
            {
              v45 = dword_543E0;
              v46 = *(_DWORD *)(dword_543E0 + 60);
              v47 = *(_DWORD *)(dword_543E0 + 64);
              if ( v46 < v47 )
                break;
              v48 = *(_DWORD *)(dword_543E0 + 52);
              v49 = v46 - v47;
              v50 = *(_DWORD *)(dword_543E0 + 56);
              *(_DWORD *)(dword_543E0 + 60) = v49;
              *(_DWORD *)(v45 + 52) = v50 <= v48 ? v48 - 1 : v48 + 1;
            }
            while ( *(_DWORD *)(dword_543E0 + 52) != *(_DWORD *)(dword_543E0 + 56) );
            if ( (*(_BYTE *)(dword_543E0 + 48) & 7) == 0 )
              sub_43230(dword_543E0);
          }
          if ( *(_DWORD *)(dword_543E0 + 68) != *(_DWORD *)(dword_543E0 + 72) )
          {
            *(_DWORD *)(dword_543E0 + 76) += *(_DWORD *)(*(_DWORD *)dword_543E0 + 16);
            do
            {
              v51 = dword_543E0;
              v52 = *(_DWORD *)(dword_543E0 + 76);
              v53 = *(_DWORD *)(dword_543E0 + 80);
              if ( v52 < v53 )
                break;
              v54 = *(_DWORD *)(dword_543E0 + 68);
              v55 = v52 - v53;
              v56 = *(_DWORD *)(dword_543E0 + 72);
              *(_DWORD *)(dword_543E0 + 76) = v55;
              *(_DWORD *)(v51 + 68) = v56 <= v54 ? v54 - 1 : v54 + 1;
            }
            while ( *(_DWORD *)(dword_543E0 + 68) != *(_DWORD *)(dword_543E0 + 72) );
          }
        }
      }
      --dword_543EC;
      dword_543E0 += 1748;
    }
    if ( a1[106] > 0 )
    {
      v59 = *((_WORD *)a1 + 212);
      sub_382E9((int)v58, *a1, 1282, (int)v58, 0);
      a1[106] = 0;
      a1[107] = 0;
    }
    dword_53718 = 0;
  }
}
