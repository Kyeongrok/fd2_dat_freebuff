/*
 * func-name: sub_40CF0
 * func-address: 0x40cf0
 * callers: 0x41300, 0x41380
 * callees: 0x364d4, 0x364fb, 0x36522, 0x365ab, 0x37910, 0x38262, 0x382e9, 0x387bc, 0x388a7, 0x38a10, 0x38bd9, 0x38e46, 0x40100, 0x406b0, 0x40b40, 0x49891, 0x49923
 */

int *__cdecl sub_40CF0(int a1, const void *src)
{
  int *n8_1; // eax
  int *n8; // ebp
  int v4; // edx
  int v5; // eax
  int n8_2; // edx
  int v7; // eax
  const void *src_1; // eax
  int v9; // eax
  const void *src_3; // edx
  int v11; // eax
  int v12; // eax
  int n0x2000; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _BYTE dst_[24]; // [esp+0h] [ebp-50h] BYREF
  _WORD v29[6]; // [esp+18h] [ebp-38h] BYREF
  int v30; // [esp+24h] [ebp-2Ch] BYREF
  unsigned int v31; // [esp+28h] [ebp-28h] BYREF
  int v32; // [esp+2Ch] [ebp-24h] BYREF
  int v33; // [esp+30h] [ebp-20h]
  const void *src_4; // [esp+34h] [ebp-1Ch]
  const void *src_2; // [esp+38h] [ebp-18h]
  int v36; // [esp+3Ch] [ebp-14h]
  int v37; // [esp+40h] [ebp-10h]

  sub_40100();
  n8_1 = (int *)sub_364D4(136);
  n8 = n8_1;
  if ( n8_1 )
  {
    *n8_1 = a1;
    if ( *(_DWORD *)(a1 + 16) )
    {
      strcpy(&Corrupted__INI_file_n, ".DIG driver required\n");
      sub_364FB((int)n8_1, 136);
      return 0;
    }
    else
    {
      sub_382E9(a1, a1, 769, 0, (int)v29);
      n8[1] = v29[0] + 16 * v29[3];
      v4 = v29[1] + 16 * v29[2];
      n8[2] = v4;
      v5 = v4 + 8;
      n8_2 = (int)n8;
      n8[14] = -1;
      n8[21] = 0;
      n8[22] = 0;
      n8[25] = 0;
      n8[13] = v5;
      v7 = memset(&dst__0, -1, 24);
      v36 = 0;
      if ( src )
      {
        qmemcpy(&dst__0, src, 0x18u);
        sub_40B40(n8, src);
        if ( v7 )
        {
          n8_2 = 1;
          v36 = 1;
          qmemcpy(dst_, src, sizeof(dst_));
        }
      }
      if ( !v36 )
      {
        sub_38E46(v7, n8_2, 0, *n8, *n8);
        src_2 = src_1;
        if ( src_1 )
        {
          qmemcpy(&dst__0, src_1, 0x18u);
          sub_40B40(n8, src_1);
          if ( v9 )
          {
            v36 = 1;
            qmemcpy(dst_, src_2, sizeof(dst_));
          }
        }
      }
      if ( !v36 && dword_5434C == 1 )
      {
        v37 = v36;
        v33 = v36;
        while ( 1 )
        {
          v12 = *(_DWORD *)(*n8 + 12);
          if ( *(unsigned __int16 *)(v12 + 16) <= v37 )
            break;
          src_3 = (const void *)(16 * HIWORD(*(_DWORD *)(v12 + 12)) + (unsigned __int16)*(_DWORD *)(v12 + 12) + v33);
          src_4 = src_3;
          if ( !v37 )
            qmemcpy(&dst__0, src_3, 0x18u);
          sub_40B40(n8, src_4);
          if ( v11 )
          {
            v36 = 1;
            qmemcpy(dst_, src_4, sizeof(dst_));
            break;
          }
          v33 += 24;
          ++v37;
        }
      }
      if ( v36 )
      {
        qmemcpy(&dst__0, dst_, 0x18u);
        if ( dword_54350 )
          n0x2000 = 0x2000;
        else
          n0x2000 = ::n0x2000;
        n8[10] = 0;
        do
        {
          if ( !sub_36522(
                  (n0x2000 + 15 - (__CFSHL__((n0x2000 + 15) >> 31, 4) + 16 * ((n0x2000 + 15) >> 31))) >> 4,
                  &v32,
                  &v31,
                  &v30) )
          {
            strcpy(&Corrupted__INI_file_n, "Could not allocate DMA buffers\n");
            sub_364FB((int)n8, 136);
            return 0;
          }
          v14 = n8[10];
          if ( v14 )
            sub_365AB(v14, n8[8], n8[9]);
          n8[10] = v32;
          n8[8] = v31;
          n8[9] = v30;
        }
        while ( ((v31 >> 12) & 0xF0000) != ((n0x2000 + (v31 >> 12) - 1) & 0xF0000) );
        v15 = sub_406B0((int)n8, (int)n8);
        if ( v15 )
        {
          sub_382E9(v15, *n8, 773, 0, 0);
          *(_DWORD *)(*n8 + 20) = 1;
          v16 = n8[16];
          v17 = n8[4];
          n8[18] = v17 / (v16 * n8[15]);
          n8[17] = v17 / v16;
          n8[19] = 4 * (v17 / v16);
          v18 = sub_364D4(4 * (v17 / v16));
          n8[20] = v18;
          if ( v18 )
          {
            v20 = dword_5431C;
            n8[24] = dword_5431C;
            v21 = sub_364D4(2196 * v20);
            n8[23] = v21;
            if ( v21 )
            {
              v23 = 0;
              if ( n8[24] > 0 )
              {
                v21 = 0;
                do
                {
                  *(_DWORD *)(n8[23] + v21 + 4) = 1;
                  *(_DWORD *)(n8[23] + v21) = n8;
                  ++v23;
                  v21 += 2196;
                }
                while ( v23 < n8[24] );
              }
              sub_387BC(v21, (int (*)())sub_404C0);
              n8[3] = v24;
              if ( v24 == -1 )
              {
                v25 = a1;
                strcpy(&Corrupted__INI_file_n, "Out of timer handles\n");
                if ( *(_DWORD *)(a1 + 24) != -1 )
                  v25 = sub_38262(a1, *(_DWORD *)(a1 + 24));
                sub_382E9(v25, *n8, 774, 0, 0);
                *(_DWORD *)(*n8 + 20) = 0;
                sub_365AB(n8[10], n8[8], n8[9]);
                sub_364FB(n8[23], 2196 * n8[24]);
                sub_364FB(n8[20], n8[19]);
                sub_364FB((int)n8, 136);
                return 0;
              }
              else
              {
                sub_388A7(v24, v24, (int)n8);
                sub_38A10(v26, n8[3], dword_5430C[0]);
                sub_38BD9(v27, n8[3]);
                *(_DWORD *)(*n8 + 32) = sub_40C40;
                *(_DWORD *)(*n8 + 36) = n8;
                sub_49923(n8);
                sub_49891(n8, 0);
                sub_49891(n8, 1);
                return n8;
              }
            }
            else
            {
              v22 = a1;
              strcpy(&Corrupted__INI_file_n, "Could not allocate SAMPLE structures\n");
              if ( *(_DWORD *)(a1 + 24) != -1 )
                v22 = sub_38262(a1, *(_DWORD *)(a1 + 24));
              sub_382E9(v22, *n8, 774, 0, 0);
              *(_DWORD *)(*n8 + 20) = 0;
              sub_365AB(n8[10], n8[8], n8[9]);
              sub_364FB(n8[20], n8[19]);
              sub_364FB((int)n8, 136);
              return 0;
            }
          }
          else
          {
            v19 = a1;
            strcpy(&Corrupted__INI_file_n, "Could not allocate build buffer\n");
            if ( *(_DWORD *)(a1 + 24) != -1 )
              v19 = sub_38262(a1, *(_DWORD *)(a1 + 24));
            sub_382E9(v19, *n8, 774, 0, 0);
            *(_DWORD *)(*n8 + 20) = 0;
            sub_365AB(n8[10], n8[8], n8[9]);
            sub_364FB((int)n8, 136);
            return 0;
          }
        }
        else
        {
          sub_365AB(n8[10], n8[8], n8[9]);
          sub_364FB((int)n8, 136);
          return 0;
        }
      }
      else
      {
        strcpy(&Corrupted__INI_file_n, "Digital sound hardware not found\n");
        sub_364FB((int)n8, 136);
        return 0;
      }
    }
  }
  else
  {
    strcpy(&Corrupted__INI_file_n, "Could not allocate memory for driver\n");
  }
  return n8_1;
}
