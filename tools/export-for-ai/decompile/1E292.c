/*
 * func-name: sub_1E292
 * func-address: 0x1e292
 * callers: 0x117e7, 0x1548e
 * callees: 0x15f84, 0x16559, 0x1956b, 0x196cb, 0x1b750, 0x1d79c, 0x1e529, 0x1e5c0, 0x3702f, 0x4e381, 0x4e7f2, 0x4e821
 */

void __usercall sub_1E292(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int n6@<ebx>,
        unsigned __int8 *n255_1@<edi>,
        int a6)
{
  int n2; // ebp
  _BYTE *v7; // esi
  int n110_1; // eax
  int n30_1; // edx
  int n100_1; // edx
  int v12; // eax
  __int32 v13; // eax
  __int32 n255; // eax
  __int32 v15; // eax
  int n110; // eax
  __int32 v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int32 v22; // eax
  int n30; // [esp+0h] [ebp-1Ch]
  int n100; // [esp+4h] [ebp-18h]
  char *v25; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, n6, a3, 68);
  n2 = 2;
  v7 = (_BYTE *)(80 * a6 + dword_53A45);
  n110_1 = (unsigned __int8)v7[33];
  n30_1 = (unsigned __int8)v7[7];
  n30 = n30_1;
  if ( arg4_0 && (v7[5] & 1) == 0 && !(n30_1 == 30 || n30_1 == 31 ? n110_1 == 110 : n110_1 == 50) )
  {
    v25 = sub_4E821((unsigned __int8)v7[7]);
    n100_1 = (unsigned __int8)v7[60] + arg4_0;
    n100 = n100_1;
    arg4 = arg4_0;
    sub_4E381();
    v12 = sub_1956B((unsigned __int8)v7[7], n100_1, n6, a3, (unsigned __int8)v7[7]);
    sub_15F84(n255_1, v12, n100_1, a3, n6, arg0, 488, 693535, 320, 205, 76, 74, 19, 1);
    sub_16559(v13, n100_1, n6, a3, 0);
    while ( n100 >= 100 )
    {
      LOWORD(v17) = sub_4E381();
      ++v7[33];
      sub_15F84(n255_1, v17, n100_1, a3, n6, arg0, 489, 699615, 320, 205, 76, 74, 19, 1);
      v18 = sub_1E529(v7 + 55, v25, 490, n2);
      v19 = sub_1E529(v7 + 57, v25 + 2, 491, v18);
      v20 = sub_1E529(v7 + 62, v25 + 4, 492, v19);
      v21 = sub_1E529(v7 + 66, v25 + 6, 493, v20);
      n2 = sub_1E529(v7 + 70, v25 + 8, 494, v21);
      n255 = (unsigned __int8)v25[10];
      if ( n255 != 255 )
      {
        n255 = sub_4E7F2((unsigned __int8)v25[10]);
        n255_1 = (unsigned __int8 *)n255;
        for ( n6 = 0; n6 < 6; ++n6 )
        {
          n255 = n255_1[2 * n6];
          n100_1 = (unsigned __int8)v7[33];
          if ( n100_1 == n255 )
          {
            v15 = n255_1[2 * n6 + 1];
            n100_1 = v15 + 441;
            dword_53AD9 = v15 + 441;
            sub_1D79C(v15, v15 + 441, n6, a3, a6, v15);
            sub_15F84(
              n255_1,
              6080 * n2 + 693535,
              n100_1,
              a3,
              n6,
              arg0,
              587,
              6080 * n2 + 693535,
              320,
              205,
              76,
              74,
              19,
              1);
          }
        }
      }
      sub_1B750(n255, n100_1, n6, a3, a6);
      n110 = (unsigned __int8)v7[33];
      n100 -= 100;
      if ( (n30 == 30 || n30 == 31) && n110 == 110 || n110 == 50 )
        n100 = 0;
    }
    v22 = sub_1E5C0(11);
    sub_196CB(v22, n100_1, n6, a3);
    v7[60] = n100;
    arg4_0 = 0;
  }
  JUMPOUT(0x1317D);
}
