/*
 * func-name: sub_43AD0
 * func-address: 0x43ad0
 * callers: 0x44180, 0x44200
 * callees: 0x364d4, 0x364fb, 0x3706e, 0x37910, 0x382e9, 0x383f1, 0x387bc, 0x388a7, 0x38a10, 0x38bd9, 0x38e46, 0x3f48b, 0x42110, 0x422c0, 0x439a0, 0x47006
 */

int *__cdecl sub_43AD0(int a1, const void *src)
{
  int *n8_2; // eax
  int *n8_1; // ebp
  _BYTE *v4; // eax
  _BYTE *env; // eax
  int n8; // edx
  char *p_SAMPLE; // esi
  char *v8; // edi
  char v9; // al
  char v10; // al
  char *n8_3; // esi
  char *v12; // edi
  char v13; // al
  char v14; // al
  int src_1; // eax
  const void *src_3; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int *n8_4; // esi
  int n8_5; // eax
  int v26; // eax
  int n16; // edi
  int v28; // eax
  int v29; // eax
  _BYTE dst_[24]; // [esp+0h] [ebp-50h] BYREF
  _BYTE v31[4]; // [esp+18h] [ebp-38h] BYREF
  __int16 v32; // [esp+1Ch] [ebp-34h]
  _WORD v33[6]; // [esp+24h] [ebp-2Ch] BYREF
  int v34; // [esp+30h] [ebp-20h]
  const void *src_2; // [esp+34h] [ebp-1Ch]
  int v36; // [esp+38h] [ebp-18h]
  const void *src_4; // [esp+3Ch] [ebp-14h]
  int v38; // [esp+40h] [ebp-10h]

  sub_42110();
  n8_2 = (int *)sub_364D4(464);
  n8_1 = n8_2;
  if ( n8_2 )
  {
    *n8_2 = a1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      sub_382E9(a1, a1, 769, 0, (int)v33);
      n8_1[1] = v33[0] + 16 * v33[3];
      n8_1[2] = v33[1] + 16 * v33[2];
      v4 = (_BYTE *)(16 * HIWORD(*(_DWORD *)n8_1[1]) + (unsigned __int16)*(_DWORD *)n8_1[1]);
      if ( v4 )
      {
        if ( *v4 )
        {
          env = (_BYTE *)getenv(v4);
          if ( env )
          {
            if ( *env )
              strncpy(n8_1[2], env, 128);
          }
        }
      }
      n8 = 16 * HIWORD(*(_DWORD *)(n8_1[1] + 4)) + (unsigned __int16)*(_DWORD *)(n8_1[1] + 4);
      if ( n8 && *(_BYTE *)n8 )
      {
        p_SAMPLE = aSample;                     // "SAMPLE"
        v8 = (char *)(n8_1[2] + 128);
        do
        {
          v9 = *p_SAMPLE;
          *v8 = *p_SAMPLE;
          if ( !v9 )
            break;
          v10 = p_SAMPLE[1];
          p_SAMPLE += 2;
          v8[1] = v10;
          v8 += 2;
        }
        while ( v10 );
        n8_3 = (char *)n8;
        v12 = (char *)(n8_1[2] + 128 + strlen((const char *)(n8_1[2] + 128)));
        do
        {
          v13 = *n8_3;
          *v12 = *n8_3;
          if ( !v13 )
            break;
          v14 = n8_3[1];
          n8_3 += 2;
          v12[1] = v14;
          v12 += 2;
        }
        while ( v14 );
      }
      else
      {
        *(_BYTE *)(n8_1[2] + 128) = 0;
      }
      src_1 = memset(&dst__0, -1, 24);
      v36 = 0;
      if ( src )
      {
        qmemcpy(&dst__0, src, 0x18u);
        sub_439A0(n8_1, src);
        if ( src_1 )
        {
          n8 = 1;
          v36 = 1;
          qmemcpy(dst_, src, sizeof(dst_));
        }
      }
      if ( !v36 )
      {
        sub_38E46(src_1, n8, 1, *n8_1, *n8_1);
        src_2 = (const void *)src_1;
        if ( src_1 )
        {
          qmemcpy(&dst__0, (const void *)src_1, 0x18u);
          sub_439A0(n8_1, (const void *)src_1);
          if ( src_1 )
          {
            src_1 = 1;
            v36 = 1;
            qmemcpy(dst_, src_2, sizeof(dst_));
          }
        }
      }
      if ( !v36 && dword_5434C == 1 )
      {
        v38 = v36;
        v34 = v36;
        while ( 1 )
        {
          src_1 = *(_DWORD *)(*n8_1 + 12);
          if ( *(unsigned __int16 *)(src_1 + 16) <= v38 )
            break;
          src_3 = (const void *)(16 * HIWORD(*(_DWORD *)(src_1 + 12)) + (unsigned __int16)*(_DWORD *)(src_1 + 12) + v34);
          src_4 = src_3;
          if ( !v38 )
            qmemcpy(&dst__0, src_3, 0x18u);
          sub_439A0(n8_1, src_4);
          if ( v17 )
          {
            src_1 = 1;
            v36 = 1;
            qmemcpy(dst_, src_4, sizeof(dst_));
            break;
          }
          v34 += 24;
          ++v38;
        }
      }
      if ( v36 )
      {
        qmemcpy(&dst__0, dst_, 0x18u);
        sub_382E9(src_1, *n8_1, 773, 0, 0);
        *(_DWORD *)(*n8_1 + 20) = 1;
        sub_382E9((int)v33, *n8_1, 1281, 0, (int)v33);
        if ( v33[0] )
        {
          v19 = dword_54338;
          n8_1[7] = dword_54338;
          v20 = malloc_0(1748 * v19);
          n8_1[6] = v20;
          if ( v20 )
          {
            v21 = 0;
            if ( n8_1[7] > 0 )
            {
              v22 = 0;
              do
              {
                *(_DWORD *)(n8_1[6] + v22 + 4) = 1;
                *(_DWORD *)(n8_1[6] + v22) = n8_1;
                ++v21;
                v22 += 1748;
              }
              while ( v21 < n8_1[7] );
            }
            v23 = 1000000 / n100;
            n8_1[104] = 0;
            n8_1[105] = 0;
            n8_1[106] = 0;
            n8_1[107] = 0;
            n8_1[5] = 0;
            n8_4 = n8_1;
            n8_1[4] = v23;
            n8_5 = (int)(n8_1 + 16);
            do
            {
              ++n8_4;
              n8_4[7] = 0;
              n8_4[23] = 0;
              n8_4[39] = 0;
              n8_4[55] = 0;
              n8_4[71] = 0;
              n8_4[87] = 0;
            }
            while ( n8_4 != (int *)n8_5 );
            sub_387BC(n8_5, (int (*)())sub_43270);
            n8_1[3] = v26;
            if ( v26 == -1 )
            {
              strcpy(&Corrupted__INI_file_n, "Out of timer handles\n");
              sub_382E9(*n8_1, *n8_1, 774, 0, 0);
              *(_DWORD *)(*n8_1 + 20) = 0;
              sub_364FB(n8_1[6], 1748 * n8_1[7]);
              sub_364FB((int)n8_1, 464);
              return 0;
            }
            else
            {
              sub_388A7(v26, v26, (int)n8_1);
              *(_DWORD *)(*n8_1 + 32) = sub_43A70;
              n16 = 0;
              *(_DWORD *)(*n8_1 + 36) = n8_1;
              do
              {
                sub_422C0((int)n8_1, n16 | 0xB0, 114, 0);
                sub_422C0((int)n8_1, n16 | 0xC0, 0, 0);
                sub_422C0((int)n8_1, n16 | 0xE0, 0, 64);
                sub_422C0((int)n8_1, n16 | 0xB0, 112, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 1, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 7, dword_5433C);
                sub_422C0((int)n8_1, n16 | 0xB0, 10, 64);
                sub_422C0((int)n8_1, n16 | 0xB0, 11, 127);
                sub_422C0((int)n8_1, n16 | 0xB0, 64, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 91, 40);
                sub_422C0((int)n8_1, n16 | 0xB0, 93, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 100, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 101, 0);
                sub_422C0((int)n8_1, n16 | 0xB0, 38, 0);
                v28 = sub_422C0((int)n8_1, n16 | 0xB0, 6, dword_54348);
                if ( n8_1[106] > 0 )
                {
                  v32 = *((_WORD *)n8_1 + 212);
                  sub_382E9((int)v31, *n8_1, 1282, (int)v31, 0);
                  n8_1[106] = 0;
                  n8_1[107] = 0;
                }
                if ( (n16 & 3) == 0 )
                  sub_383F1(v28, 3);
                ++n16;
              }
              while ( n16 < 16 );
              sub_38A10(v28, n8_1[3], n100);
              sub_38BD9(v29, n8_1[3]);
              return n8_1;
            }
          }
          else
          {
            strcpy(&Corrupted__INI_file_n, "Could not allocate SEQUENCE structures\n");
            sub_382E9(0, *n8_1, 774, 0, 0);
            *(_DWORD *)(*n8_1 + 20) = 0;
            sub_364FB((int)n8_1, 464);
            return 0;
          }
        }
        else
        {
          strcpy(&Corrupted__INI_file_n, "Could not initialize instrument manager\n");
          sub_382E9(v18, *n8_1, 774, 0, 0);
          *(_DWORD *)(*n8_1 + 20) = 0;
          sub_364FB((int)n8_1, 464);
          return 0;
        }
      }
      else
      {
        strcpy(&Corrupted__INI_file_n, "XMIDI sound hardware not found\n");
        sub_364FB((int)n8_1, 464);
        return 0;
      }
    }
    else
    {
      strcpy(&Corrupted__INI_file_n, ".MDI driver required\n");
      sub_364FB((int)n8_2, 464);
      return 0;
    }
  }
  else
  {
    strcpy(&Corrupted__INI_file_n, "Could not allocate memory for driver\n");
  }
  return n8_2;
}
