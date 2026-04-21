/*
 * func-name: sub_2968D
 * func-address: 0x2968d
 * callers: 0x26152, 0x29300
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x26996, 0x29bcb, 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c, 0x3771c, 0x3776e, 0x377a3, 0x37910, 0x4df09, 0x4df28
 */

int __fastcall sub_2968D(__int32 a1, int a2, int a3, int a4, unsigned __int8 n3)
{
  int v5; // ebx
  int v6; // esi
  __int64 v7; // rax
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  unsigned __int8 *v11; // edi

  sub_3702F(a1, a2, a3, a4, 56);
  v7 = malloc(22987);
  v5 = v7;
  v6 = v7;
  LODWORD(v7) = fopen((int)aFd2Sav_5, (int)aRb_5);// "rb"
  v8 = v7;
  if ( (_DWORD)v7 )
  {
    sub_373CA((_BYTE *)v5, 1u, 22987, v7);
    sub_4DF28((char *)v5, 22987);
    fclose(v8);
  }
  else
  {
    memset(v5, 255, 22987);
  }
  n3_3 = 0;
  do
  {
    LODWORD(v7) = sub_29BCB(v6, n3);
    v9 = v7;
    if ( (_DWORD)v7 != -1 )
    {
      v10 = 2600 * n3_3 + v6 + 12587;
      v7 = memmove(v10, dword_53BF7, 2560);
      v5 = v10 + 2560;
      *(_BYTE *)v5 = n17;
      *(_BYTE *)(v5 + 1) = n16_1;
      *(_DWORD *)(v5 + 2) = n6_6;
      *(_BYTE *)(v5 + 6) = byte_51AAB;
      *(_BYTE *)(v5 + 7) = byte_53AF9;
      *(_BYTE *)(v5 + 8) = n127;
      *(_BYTE *)(v5 + 9) = byte_51E62;
      v11 = (unsigned __int8 *)fopen((int)aFd2Sav_6, (int)aWb_2);// "wb"
      *(_DWORD *)(v6 + 22983) = sub_4DF09((_BYTE *)v6, 22987);
      sub_4DF28((char *)v6, 22987);
      fwrite(v6, 1, 22987, v11);
      fclose(v11);
      sub_4DF28((char *)v6, 22987);
      LODWORD(v7) = n17;
      if ( !byte_523E7[n17] )
      {
        sub_26996(n17, SHIDWORD(v7), v5, a4);
        LODWORD(v7) = sub_1956B((unsigned __int8)byte_52387[0], SHIDWORD(v7), v5, a4, (unsigned __int8)byte_52387[0]);
        sub_15F84(v11, v7, SHIDWORD(v7), a4, v5, arg0, 660, 693452, 320, 205, 76, 74, 19, 1);
        LODWORD(v7) = sub_16559(v7, SHIDWORD(v7), v5, a4, 0);
        sub_16C57(v7, SHIDWORD(v7), v5, a4, 0);
      }
    }
    sub_26996(v7, SHIDWORD(v7), v5, a4);
  }
  while ( v9 != -1 );
  return free(v6);
}
