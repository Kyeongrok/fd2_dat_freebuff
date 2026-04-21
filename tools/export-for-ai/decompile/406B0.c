/*
 * func-name: sub_406B0
 * func-address: 0x406b0
 * callers: 0x40cf0
 * callees: 0x382e9, 0x49891, 0x49923
 */

int __usercall sub_406B0@<eax>(int n8_1@<ebp>, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  int n16; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  signed int n0x7FFFFFFF; // edi
  int n3_2; // ecx
  int v11; // ebx
  int v12; // ebx
  int n2048; // ebx
  int result; // eax
  signed int n0x7FFFFFFF_1; // edi
  int n8; // ecx
  int n8_2; // edi
  unsigned int v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int n2_1; // [esp+0h] [ebp-34h]
  int n3_1; // [esp+4h] [ebp-30h]
  int n2; // [esp+8h] [ebp-2Ch]
  int n3; // [esp+Ch] [ebp-28h]
  char v27[4]; // [esp+10h] [ebp-24h] BYREF
  __int16 v28; // [esp+14h] [ebp-20h]
  __int16 v29; // [esp+16h] [ebp-1Eh]
  int v30; // [esp+1Ch] [ebp-18h]
  int n2048_1; // [esp+20h] [ebp-14h]
  int n2_2; // [esp+24h] [ebp-10h]

  v2 = *(_DWORD *)(a2 + 84);
  v30 = v2;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(a2 + 96) > 0 )
    {
      v2 = 0;
      do
      {
        *(_DWORD *)(*(_DWORD *)(a2 + 92) + v2 + 2192) = *(_DWORD *)(*(_DWORD *)(a2 + 92) + v2 + 4);
        v4 = v2 + *(_DWORD *)(a2 + 92);
        if ( *(_DWORD *)(v4 + 4) == 4 )
          *(_DWORD *)(v4 + 4) = 8;
        ++v3;
        v2 += 2196;
      }
      while ( v3 < *(_DWORD *)(a2 + 96) );
    }
    if ( *(_DWORD *)(a2 + 84) )
    {
      sub_382E9(v2, *(_DWORD *)a2, 1026, 0, 0);
      *(_DWORD *)(a2 + 84) = 0;
    }
    sub_49923(a2);
    sub_49891(a2, 0);
    sub_49891(a2, 1);
  }
  switch ( dword_5432C | (2 * dword_54328) )
  {
    case 0:
      n2_1 = 0;
      n3_1 = 1;
      n2 = 2;
      n3 = 3;
      break;
    case 1:
      n2_1 = 1;
      n3_1 = 0;
      n2 = 3;
      n3 = 2;
      break;
    case 2:
      n2_1 = 2;
      n3_1 = 3;
      n2 = 0;
      n3 = 1;
      break;
    case 3:
      n2_1 = 3;
      n3_1 = 2;
      n2 = 1;
      n3 = 0;
      break;
    default:
      break;
  }
  n16 = 0;
  while ( 1 )
  {
    v6 = *(int *)((char *)&n2_1 + n16);
    if ( *(_BYTE *)(*(_DWORD *)(a2 + 4) + v6) )
      break;
    n16 += 4;
    if ( n16 >= 16 )
      goto LABEL_19;
  }
  *(_DWORD *)(a2 + 24) = v6;
LABEL_19:
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 14 * *(_DWORD *)(a2 + 24) + 26);
  if ( n2_5 )
  {
    if ( (unsigned int)n2_5 <= 1 )
    {
      v7 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 14 * *(_DWORD *)(a2 + 24) + 18);
    }
    else if ( n2_5 == 2 )
    {
      v7 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 14 * *(_DWORD *)(a2 + 24) + 20);
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 24);
      n2_2 = n2_5;
      n2_1 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 14 * v8 + 16);
      n3_1 = *(unsigned __int16 *)(14 * *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 4) + 18);
      n0x7FFFFFFF = 0x7FFFFFFF;
      n3_2 = 0;
      n2 = *(unsigned __int16 *)(14 * *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 4) + 20);
      v11 = 0;
      do
      {
        if ( (int)abs32(n2_2 - *(int *)((char *)&n2_1 + v11)) <= n0x7FFFFFFF )
        {
          n8_1 = n3_2;
          n0x7FFFFFFF = abs32(n2_2 - *(int *)((char *)&n2_1 + v11));
        }
        ++n3_2;
        v11 += 4;
      }
      while ( n3_2 < 3 );
      v7 = *(&n2_1 + n8_1);
    }
  }
  else
  {
    v7 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 14 * *(_DWORD *)(a2 + 24) + 16);
  }
  *(_DWORD *)(a2 + 20) = v7;
  switch ( *(_DWORD *)(a2 + 24) )
  {
    case 0:
      *(_DWORD *)(a2 + 60) = 1;
      *(_DWORD *)(a2 + 64) = 1;
      break;
    case 1:
      *(_DWORD *)(a2 + 60) = 1;
      goto LABEL_35;
    case 2:
      *(_DWORD *)(a2 + 60) = 2;
      *(_DWORD *)(a2 + 64) = 1;
      break;
    case 3:
      *(_DWORD *)(a2 + 60) = 2;
LABEL_35:
      *(_DWORD *)(a2 + 64) = 2;
      break;
    default:
      break;
  }
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 60) * dword_54318 * *(_DWORD *)(a2 + 20) / 1000 * *(_DWORD *)(a2 + 64);
  v12 = 14 * *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 4);
  n2048_1 = *(unsigned __int16 *)(v12 + 22);
  n2048 = *(unsigned __int16 *)(v12 + 24);
  if ( !dword_54350 )
    goto LABEL_41;
  if ( n2048 > 2048 )
    n2048 = 2048;
  if ( n2048_1 > 2048 )
  {
    result = 0;
    strcpy(&Corrupted__INI_file_n, "Minimum DMA buffer size too large for VDM\n");
  }
  else
  {
LABEL_41:
    n0x7FFFFFFF_1 = 0x7FFFFFFF;
    for ( n8 = 8; n8 <= dword_54314 / 2; n8 *= 2 )
    {
      if ( (int)abs32(n8 - *(_DWORD *)(a2 + 16)) <= n0x7FFFFFFF_1 )
      {
        n8_1 = n8;
        n0x7FFFFFFF_1 = abs32(n8 - *(_DWORD *)(a2 + 16));
      }
    }
    n8_2 = n2048_1;
    *(_DWORD *)(a2 + 16) = n8_1;
    if ( n8_1 < n8_2 )
      *(_DWORD *)(a2 + 16) = n8_2;
    if ( n2048 < *(_DWORD *)(a2 + 16) )
      *(_DWORD *)(a2 + 16) = n2048;
    v18 = *(_DWORD *)(a2 + 32);
    if ( dword_54350 )
      v18 = (((v18 >> 12) + 4095) & 0xFF000) << 12;
    **(_DWORD **)(a2 + 8) = v18;
    *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4) = *(_DWORD *)(a2 + 16) + v18;
    v19 = *(_DWORD **)(a2 + 8);
    *(_DWORD *)(a2 + 44) = (unsigned __int16)*v19 + 16 * HIWORD(*v19);
    v20 = v30;
    *(_DWORD *)(a2 + 48) = (unsigned __int16)v19[1] + 16 * HIWORD(v19[1]);
    if ( v20 )
    {
      v21 = 0;
      if ( *(int *)(a2 + 96) > 0 )
      {
        v22 = 0;
        do
        {
          *(_DWORD *)(*(_DWORD *)(a2 + 92) + v22 + 4) = *(_DWORD *)(*(_DWORD *)(a2 + 92) + v22 + 2192);
          ++v21;
          v22 += 2196;
        }
        while ( v21 < *(_DWORD *)(a2 + 96) );
      }
      sub_49923(a2);
      sub_49891(a2, 0);
      sub_49891(a2, 1);
      if ( !*(_DWORD *)(a2 + 84) )
      {
        v29 = *(_WORD *)(a2 + 24);
        v28 = *(_WORD *)(a2 + 20);
        sub_382E9((int)v27, *(_DWORD *)a2, 1025, (int)v27, 0);
        *(_DWORD *)(a2 + 84) = 1;
      }
    }
    return 1;
  }
  return result;
}
