/*
 * func-name: sub_10010
 * func-address: 0x10010
 * callers: 0x19df7, 0x25ebb
 * callees: 0x10652, 0x11019, 0x111ba, 0x11cac, 0x11eb0, 0x12263, 0x15e71, 0x15f0e, 0x15f84, 0x16559, 0x16c57, 0x17aa9, 0x187d6, 0x1956b, 0x196cb, 0x1f525, 0x1f882, 0x25977, 0x3702f, 0x3706e, 0x370f0, 0x37119, 0x37324, 0x373ca, 0x3759c, 0x3771c, 0x3776e, 0x377a3, 0x3790a, 0x4df09, 0x4df28, 0x4df4c, 0x4e381
 */

void sub_10010()
{
  int v0; // ebp
  int v1; // eax
  int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  int v5; // ebx
  int i; // ebx
  __int64 v7; // rax
  int v8; // ebx
  int n6; // ebx
  int v10; // esi
  int n2; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // [esp+0h] [ebp-14h]

  sub_3702F(60);
  v0 = malloc(22987);
  if ( v0 )
  {
    v3 = fopen(aFd2Sav_2, aRb_0);               // "rb"
    v2 = v3;
    sub_373CA(v0, 1, 22987, v3);
    fclose(v2);
    sub_4DF28(v0, 22987);
    LODWORD(v3) = sub_4DF09(v0, 22987);
    if ( (_DWORD)v3 != *(_DWORD *)(v0 + 22983) )
    {
      sub_1956B(75);
      sub_15F84(dword_53A7D, 436, 696099, 320, 205, 76, 74, 19, 1);
      sub_16559(0);
      LODWORD(v3) = sub_16C57(0);
      LODWORD(v3) = sub_196CB(v3, HIDWORD(v3));
    }
    sub_1F882(v3, HIDWORD(v3));
    memmove(dword_53BF7, v0 + 2211, 2560);
    FDOTHER_DAT = sub_111BA(aFdotherDat, FDOTHER_DAT, 0);// "FDOTHER.DAT"
    n17 = *(unsigned __int8 *)(v0 + 12485);
    dword_53A59 = sub_111BA(aFdfieldDat, dword_53A59, 3 * n17 + 2);// "FDFIELD.DAT"
    if ( dword_53A55 )
      free(dword_53A55);
    dword_53A55 = malloc(2211);
    if ( dword_53A55 )
    {
      v4 = memmove(dword_53A55, v0, 2211);
      sub_10652(v4);
      dword_53A79 = sub_111BA(aFdtxtDat, dword_53A79, n17 + 1);// "FDTXT.DAT"
      dword_53A51 = sub_111BA(aFdfieldDat, dword_53A51, 3 * n17);// "FDFIELD.DAT"
      dword_53AC1 = *(__int16 *)dword_53A51;
      dword_53AC5 = *(__int16 *)(dword_53A51 + 2);
      v5 = 2 * *(unsigned __int8 *)dword_53A55;
      dword_53A5D = sub_111BA(aFdshapDat, dword_53A5D, v5);// "FDSHAP.DAT"
      dword_53A69 = sub_111BA(aFdshapDat, dword_53A69, v5 + 1);// "FDSHAP.DAT"
      sub_4DF4C(dword_53A51);
      ::n6 = *(unsigned __int8 *)(dword_53A55 + 1);
      dword_53BE3 = *(unsigned __int8 *)(dword_53A55 + 2);
      n6_0 = *(unsigned __int8 *)(v0 + 12484);
      if ( dword_53A45 )
        free(dword_53A45);
      dword_53A45 = malloc(7680);
      if ( dword_53A45 )
      {
        memmove(dword_53A45, v0 + 4771, 80 * n6_0);
        memmove(dword_53AD5, v0 + 12451, 32);
        if ( dword_53A61 )
          free(dword_53A61);
        v14 = fopen(aFdiconB24, aRb_1);         // "rb"
        dword_53BDF = 0;
        for ( i = 0; i < n6_0; ++i )
          *(_BYTE *)(80 * i + dword_53A45 + 2) = sub_11019(*(unsigned __int8 *)(80 * i + dword_53A45 + 7), v14);
        fclose(v14);
        v7 = fopen(aFd2Tmp, aWb_0);             // "wb"
        v8 = v7;
        fwrite(dword_53A61, 1, (char *)&loc_329FE + 2, v7);
        fclose(v8);
        dword_53BEF = *(unsigned __int8 *)(v0 + 12483);
        dword_53AA9 = *(unsigned __int8 *)(v0 + 12486);
        dword_53AAD = *(unsigned __int8 *)(v0 + 12487);
        dword_53AB1 = *(unsigned __int8 *)(v0 + 12488);
        dword_53AB5 = *(unsigned __int8 *)(v0 + 12489);
        dword_53AB9 = *(unsigned __int8 *)(v0 + 12490);
        n2_1 = *(unsigned __int8 *)(v0 + 12491);
        dword_53BFB = *(unsigned __int8 *)(v0 + 12492);
        dword_53BF3 = *(_DWORD *)(v0 + 12493);
        byte_53AF9 = *(_BYTE *)(v0 + 12497);
        byte_51AAB = *(_BYTE *)(v0 + 12498);
        byte_51E61 = *(_BYTE *)(v0 + 12499);
        byte_51E62 = *(_BYTE *)(v0 + 12500);
        free(v0);
        free(dword_53A59);
        dword_53A59 = 0;
        LODWORD(v7) = sub_25977((unsigned __int8)byte_51E63[n17], 0);
        dword_51A83 = 0;
        sub_12263(v7, HIDWORD(v7));
        LODWORD(v7) = sub_11CAC(1);
        sub_1F525(v7);
        for ( n6 = 0; n6 < 9; ++n6 )
        {
          v10 = sub_15F0E(dword_53A81, 655360, 320, 120, 84, n6 + 83);
          if ( n6 > 6 )
            sub_187D6(684651, 320, dword_53BEF, 42, 3);
          j___delay(70);
          if ( n6 == 8 )
            j___delay(500);
          sub_15E71(v10, 655360, 320);
        }
        for ( n2 = 2; n2 < 6; ++n2 )
        {
          if ( n2 == 5 )
            n2 = 9;
          v12 = sub_15F0E(dword_53A81, dword_53A49 + 32904, 456, 116, n2 * n2 + 84, 91);
          sub_187D6(456 * (n2 * n2 + 90) + dword_53A49 + 33071, 456, dword_53BEF, 42, 3);
          sub_11EB0(656644, 320, dword_53A49 + 32904, 456, 312, 192);
          sub_17AA9(1);
          sub_15E71(v12, dword_53A49 + 32904, 456);
        }
        sub_11CAC(0);
        v13 = j___delay(200);
        dword_53AE9 = 0;
        dword_51A83 = 1;
        sub_4E381(v13);
        JUMPOUT(0x22BBE);
      }
      n3 = 3;
      int386(16, &n3, &n3);
      v1 = printf(aOutOfMemory_1);              // " Out of Memory !!!\n"
    }
    else
    {
      n3 = 3;
      int386(16, &n3, &n3);
      v1 = printf(aOutOfMemory_0);              // " Out of Memory !!!\n"
    }
  }
  else
  {
    n3 = 3;
    int386(16, &n3, &n3);
    v1 = printf(aOutOfMemory);                  // " Out of Memory !!!\n"
  }
  exit(v1);
}
