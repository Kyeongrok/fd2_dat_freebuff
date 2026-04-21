/*
 * func-name: sub_3F950
 * func-address: 0x3f950
 * callers: 0x38f2b
 * callees: 0x364d4, 0x364fb, 0x36522, 0x365ab, 0x3771c, 0x38074, 0x3815f, 0x382e9, 0x387bc, 0x388a7, 0x38a10, 0x38bd9, 0x46f4f
 */

int *__cdecl sub_3F950(int a1, int a2)
{
  int *result; // eax
  int *v3; // ebp
  int v4; // eax
  unsigned int n0x10; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp-4h] [ebp-10h]

  result = (int *)sub_364D4(40);
  v3 = result;
  if ( !result )
  {
    strcpy(&Corrupted__INI_file_n, "Insufficient memory for driver descriptor\n");
    return result;
  }
  if ( !sub_36522((unsigned int)(a2 + 15) >> 4, result + 2, result, result + 1) )
  {
    strcpy(&Corrupted__INI_file_n, "Insufficient low memory\n");
    sub_364FB((int)v3, 40);
    return 0;
  }
  memmove(v3[2], a1, a2);
  v4 = v3[2];
  v3[3] = v4;
  if ( !strnicmp(v4, aAil3dig, 7) )             // "AIL3DIG"
  {
    v3[4] = 0;
  }
  else
  {
    if ( strnicmp(v3[3], aAil3mdi, 7) )         // "AIL3MDI"
    {
      strcpy(&Corrupted__INI_file_n, "Invalid driver type\n");
      sub_365AB(v3[2], *v3, v3[1]);
LABEL_9:
      sub_364FB((int)v3, 40);
      return 0;
    }
    v3[4] = 1;
  }
  for ( n0x10 = 0; n0x10 < 0x10; ++n0x10 )
  {
    if ( !dword_541B4[n0x10] )
    {
      dword_541B4[n0x10] = (int)v3;
      *(_WORD *)(v3[3] + 50) = n0x10;
      break;
    }
  }
  if ( n0x10 == 16 )
  {
    strcpy(&Corrupted__INI_file_n, "Out of driver handles\n");
    sub_365AB(v3[2], *v3, v3[1]);
    goto LABEL_9;
  }
  v6 = v3[3];
  *(_WORD *)(v6 + 48) = 0;
  v3[5] = 0;
  v3[6] = -1;
  sub_38074(v6, 102);
  *(_DWORD *)(v3[3] + 54) = v7;
  v11 = *v3 + *(unsigned __int16 *)(v3[3] + 52);
  sub_3815F(v11, 102, v11);
  v3[8] = 0;
  v3[9] = 0;
  sub_382E9(v8, (int)v3, 768, 0, 0);
  v9 = v3[3];
  if ( *(__int16 *)(v9 + 46) > 0 )
  {
    sub_387BC(v9, (int (*)())sub_3F565);
    v3[7] = v10;
    if ( v10 == -1 )
    {
      strcpy(&Corrupted__INI_file_n, "Out of timer handles\n");
      sub_3815F(v3[3], 102, *(_DWORD *)(v3[3] + 54));
      sub_365AB(v3[2], *v3, v3[1]);
      goto LABEL_9;
    }
    sub_388A7(v10, v10, (int)v3);
    sub_38A10(*(__int16 *)(v3[3] + 46), v3[7], *(__int16 *)(v3[3] + 46));
    sub_38BD9(v3[7], v3[7]);
  }
  else
  {
    v3[7] = -1;
  }
  return v3;
}
