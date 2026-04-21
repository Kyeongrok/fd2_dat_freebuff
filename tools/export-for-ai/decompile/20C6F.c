/*
 * func-name: sub_20C6F
 * func-address: 0x20c6f
 * callers: 0x15055, 0x1bbdc
 * callees: 0x11cac, 0x1aa1d, 0x1b6b7, 0x1b722, 0x1b8e7, 0x1c2da, 0x1c4cc, 0x1c75e, 0x1c9dd, 0x1cd17, 0x1d4cb, 0x1d4f6, 0x1db65, 0x1df58, 0x1e0db, 0x1e1dc, 0x21082, 0x2111a, 0x211a4, 0x2218a, 0x22721, 0x22866, 0x22997, 0x22af6, 0x22d1b, 0x3702f, 0x4e8bc
 */

void __fastcall sub_20C6F(
        __int32 a1,
        int a2,
        int n11,
        int n4,
        unsigned __int8 *n6,
        int n3,
        int n30,
        unsigned __int8 *a8)
{
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // eax
  char *v11; // eax
  int n950_1; // edx
  int n11_1; // eax
  int v14; // eax
  int v15; // eax
  int n30_2; // esi
  __int32 v17; // eax
  __int32 v18; // eax
  int v19; // eax
  int v20; // eax
  int n30_1; // esi
  int v22; // eax
  int v23; // eax
  __int32 v24; // eax
  int v25; // ebx
  _BYTE v26[100]; // [esp-64h] [ebp-7Ch] BYREF
  int v27; // [esp+0h] [ebp-18h]
  int n950; // [esp+4h] [ebp-14h]
  int n11_2; // [esp+14h] [ebp-4h]

  v8 = sub_3702F(a1, a2, n11, n4, 156);
  n11_2 = n11;
  v9 = sub_1D4CB(v8, a2, n11, n4);
  dword_53EC4 = 0;
  v10 = sub_1B722((__int32)v9, a2, n11, n4, (int)n6, n3);
  v11 = sub_4E8BC(v10);
  n950_1 = *((unsigned __int16 *)v11 + 7);
  n950 = n950_1;
  LOBYTE(n11) = v11[13];
  n11_1 = (unsigned __int8)n11;
  if ( (unsigned __int8)n11 != 5 && (unsigned __int8)n11 != 13 )
  {
    if ( (unsigned __int8)n11 == 6 )
    {
      n11_1 = sub_22AF6(n6, 20, n30, a8, 37);
    }
    else
    {
      if ( (unsigned __int8)n11 != 7 )
      {
        switch ( (unsigned __int8)n11 )
        {
          case 8u:
            n11_1 = sub_21082(n6, n950_1, 55, n3, n30, a8, 17);
            goto LABEL_55;
          case 9u:
            n11_1 = sub_21082(n6, n950_1, 57, n3, n30, a8, 18);
            goto LABEL_55;
          case 0xAu:
            n11_1 = sub_21082(n6, n950_1, 62, n3, n30, a8, 19);
            goto LABEL_55;
        }
        if ( (unsigned __int8)n11 != 11 )
        {
          switch ( (unsigned __int8)n11 )
          {
            case 0xCu:
              n11_1 = sub_22997((int)n6, n30, a8);
              break;
            case 0xEu:
              n11_1 = sub_22D1B(n6, 27, n30, a8, 38);
              break;
            case 0xFu:
              n11_1 = sub_22866((int)n6, n30, a8);
              break;
            case 0x10u:
              n11_1 = sub_22721((int)n6, n30, a8);
              break;
            case 0x11u:
              n11_1 = sub_21082(n6, n950_1, 66, n3, n30, a8, 13);
              break;
            case 0x12u:
              n11_1 = sub_21082(n6, n950_1, 70, n3, n30, a8, 13);
              break;
            case 0x13u:
              n950_1 = *a8;
              n11 = 80 * n950_1 + dword_53A45;
              v27 = *(unsigned __int8 *)(n11 + 60);
              n11_1 = sub_21082(n6, n950, 59, n3, n30, a8, 19);
              LOBYTE(n11_1) = v27;
              *(_BYTE *)(n11 + 60) = v27;
              break;
            case 0x14u:
            case 0x18u:
              v19 = sub_1C4CC((unsigned __int8)n11, n950_1, n11, n4, (int)n6, n950, n30, (int)a8);
              sub_1CD17(v19, n950_1, n11, n4, (int)n6, n950, n30, (int)a8);
              for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
              {
                n11 = (int)&a8[n30_1];
                v22 = sub_1C75E(a8[n30_1], n950_1, (int)&a8[n30_1], n4, a8[n30_1], n950);
                if ( v22 )
                {
                  n950_1 = *(unsigned __int8 *)n11;
                  sub_1E0DB(v22, n950_1, n11, n4, v22, 94, n950_1);
                }
                else
                {
                  v20 = sub_1E1DC(*(unsigned __int8 *)n11, n950_1, n11, n4, *(unsigned __int8 *)n11);
                }
              }
              v23 = sub_11CAC(v20, n950_1, n11, n4, 0);
              sub_1DF58(v23, n950_1, n11, n4);
              break;
            case 0x15u:
              n11_1 = sub_2111A((int)n6, n30, a8, n950_1);
              break;
            case 0x16u:
              n11_1 = sub_22D1B(n6, 22, n30, a8, 39);
              break;
            case 0x17u:
              n11_1 = sub_2218A(n6, n30, a8);
              break;
          }
          goto LABEL_55;
        }
        v14 = sub_1C4CC(11, n950_1, n11, n4, (int)n6, 13, n30, (int)a8);
        v15 = sub_1C2DA(v14, n950_1, n11, n4, (int)n6, 13, n30, (int)a8);
        for ( n30_2 = 0; n30_2 < n30; ++n30_2 )
        {
          v18 = a8[n30_2];
          n11 = 80 * v18;
          n950_1 = *(unsigned __int16 *)(dword_53A45 + 80 * v18 + 70);
          if ( *(_WORD *)(dword_53A45 + 80 * v18 + 70) )
          {
            sub_1C9DD(v18, n950_1, n11, n4, v18, n950);
            n950_1 = a8[n30_2];
            sub_1E0DB(v17, n950_1, n11, n4, v17, 105, n950_1);
          }
          else
          {
            v15 = sub_1E1DC(v18, n950_1, n11, n4, v18);
          }
        }
        n11_1 = sub_11CAC(v15, n950_1, n11, n4, 0);
        goto LABEL_8;
      }
      n11_1 = sub_22AF6(n6, 21, n30, a8, 38);
    }
    if ( !dword_53EC4 )
    {
LABEL_9:
      n11_1 = sub_1B8E7(n11_1, n950_1, n11, n4, (int)n6, n3);
      goto LABEL_55;
    }
LABEL_8:
    sub_1DF58(n11_1, n950_1, n11, n4);
    goto LABEL_9;
  }
  sub_211A4((int)n6, n30, a8, n950);
  n11_1 = (unsigned __int8)n11;
  if ( (unsigned __int8)n11 == 5 )
    goto LABEL_9;
LABEL_55:
  arg4_0 = 0;
  sub_1D4F6(n11_1, n950_1, n11, n4);
  sub_1B6B7((__int32)v26, n950_1, n11, n4, (int)v26);
  v25 = v24;
  sub_1DB65(v24, n950_1, v24, n4);
  sub_1AA1D((__int32)v26, n950_1, v25, n4, n6, v25, (int)v26);
}
