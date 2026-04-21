/*
 * func-name: sub_219AD
 * func-address: 0x219ad
 * callers: 0x2189a, 0x22046
 * callees: 0x3702f, 0x37932, 0x37af4, 0x3ca4c, 0x4deec
 */

void __fastcall sub_219AD(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        char *a5,
        int a6,
        int a7,
        int n12,
        int n192_1,
        int n192,
        int a11)
{
  char *v12; // ebx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  double v16; // st7
  int v17; // eax
  char *v18; // eax

  sub_3702F(a1, a2, a3, a4, 52);
  while ( n192_1 < n192 )
  {
    if ( n192_1 > a6 - a7 && n192_1 < a7 + a6 )
    {
      v14 = abs(a6 - n192_1);
      v15 = a7 * a7 - v14 * v14;
      v16 = (double)v15;
      v17 = sqrt(v16);
      _CHP(v17, v15, v16);
      v18 = &a5[-(int)v16];
      if ( (int)v18 >= 0 )
      {
        v12 = (char *)(int)v16;
      }
      else
      {
        v18 = 0;
        v12 = a5;
      }
      if ( (int)&a5[(int)v16] < 312 )
        v13 = (int)v16;
      else
        v13 = 312 - (_DWORD)a5;
      sub_4DEEC(a11, &v12[v13], &v18[456 * n192_1 + 32904 + n655360_0]);
    }
    ++n192_1;
  }
  JUMPOUT(0x1951B);
}
