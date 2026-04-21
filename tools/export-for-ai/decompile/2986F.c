/*
 * func-name: sub_2986F
 * func-address: 0x2986f
 * callers: 0x29300
 * callees: 0x11019, 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x26996, 0x29bcb, 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c, 0x3771c, 0x3776e, 0x37910, 0x4df28, 0x4e809
 */

int __fastcall sub_2986F(__int32 a1, int a2, int a3, int a4)
{
  char *n255_1; // ebx
  unsigned __int8 *n255_2; // edi
  __int64 n255; // rax
  int n255_3; // esi
  __int32 v8; // esi
  int n16; // ebx
  __int64 v10; // rax
  unsigned __int8 *v11; // ebx
  int v12; // esi

  sub_3702F(a1, a2, a3, a4, 52);
  n255 = malloc(22987);
  n255_1 = (char *)n255;
  n255_2 = (unsigned __int8 *)n255;
  LODWORD(n255) = fopen((int)aFd2Sav_7, (int)aRb_6);// "rb"
  n255_3 = n255;
  if ( (_DWORD)n255 )
  {
    sub_373CA(n255_1, 1u, 22987, n255);
    sub_4DF28(n255_1, 22987);
    fclose(n255_3);
  }
  else
  {
    memset(n255_1, 255, 22987);
  }
  n3_3 = 0;
  do
  {
    v8 = sub_29BCB((int)n255_2, 1);
    sub_26996(v8, SHIDWORD(n255), v8, a4);
    if ( v8 != -1 )
    {
      HIDWORD(n255) = 40 * n3_3;
      n16 = (int)&n255_2[2600 * n3_3 + 12587];
      LODWORD(n255) = *(unsigned __int8 *)(n16 + 2560);
      if ( (_DWORD)n255 != 255 )
      {
        if ( byte_523E7[n255] )
        {
          LODWORD(n255) = sub_1956B(
                            (unsigned __int8)byte_52387[0],
                            SHIDWORD(n255),
                            n16,
                            a4,
                            (unsigned __int8)byte_52387[0]);
          sub_15F84(n255_2, n255, SHIDWORD(n255), a4, n16, arg0, 479, 693452, 320, 205, 76, 74, 19, 1);
        }
        else
        {
          v10 = memmove(dword_53BF7, &n255_2[2600 * n3_3 + 12587], 2560);
          v11 = (unsigned __int8 *)(n16 + 2560);
          n17 = *v11;
          n16_1 = v11[1];
          n6_6 = *(_DWORD *)(v11 + 2);
          byte_51AAB = v11[6];
          byte_53AF9 = v11[7];
          n127 = v11[8];
          byte_51E62 = v11[9];
          if ( dword_53A61 )
            free(dword_53A61);
          v12 = fopen((int)aFdiconB24_3, (int)aRb_7);// "rb"
          dword_53BDF = 0;
          for ( n16 = 0; n16 < n16_1; ++n16 )
          {
            a4 = dword_53BF7;
            sub_11019(
              *(unsigned __int8 *)(dword_53BF7 + 80 * n16 + 7),
              SHIDWORD(v10),
              n16,
              dword_53BF7,
              *(unsigned __int8 *)(dword_53BF7 + 80 * n16 + 7),
              v12);
          }
          fclose(v12);
          n255 = sub_4E809(n17);
          ::n255_1 = n255;
          v8 = -1;
          LODWORD(n255) = sub_1956B(
                            (unsigned __int8)byte_52387[0],
                            SHIDWORD(n255),
                            n16,
                            a4,
                            (unsigned __int8)byte_52387[0]);
          sub_15F84(n255_2, n255, SHIDWORD(n255), a4, n16, arg0, 478, 693452, 320, 205, 76, 74, 19, 1);
        }
        LODWORD(n255) = sub_16559(n255, SHIDWORD(n255), n16, a4, 0);
        sub_16C57(n255, SHIDWORD(n255), n16, a4, 0);
        sub_26996(n255, SHIDWORD(n255), n16, a4);
      }
    }
  }
  while ( v8 != -1 );
  return free(n255_2);
}
