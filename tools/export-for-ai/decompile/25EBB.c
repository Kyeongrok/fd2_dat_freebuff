/*
 * func-name: sub_25EBB
 * func-address: 0x25ebb
 * callers: 0x25bf4
 * callees: 0x10010, 0x111ba, 0x11d40, 0x1f882, 0x1f894, 0x22ef6, 0x25977, 0x26152, 0x26996, 0x29bcb, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x3314b, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3346b, 0x3347c, 0x334d9, 0x335a0, 0x335aa, 0x335da, 0x33674, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c, 0x3771c, 0x3776e, 0x37910, 0x4df28, 0x4e381
 */

int __usercall sub_25EBB@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int n99@<ebx>,
        int n100@<ebp>,
        unsigned __int8 *a6@<edi>,
        int n15@<esi>)
{
  int v7; // eax
  __int32 v8; // eax
  int v9; // eax
  int v10; // eax
  __int32 v11; // eax
  unsigned __int8 *v12; // ebx
  unsigned __int8 *v13; // edi
  __int64 v14; // rax
  int v15; // esi
  int v16; // esi
  int v17; // ebx

  v7 = sub_3702F(a1, a2, n99, a3, 32);
  sub_1F894(a2, n99, n100, n15, v7, a3);
  if ( !v8 )
  {
    v9 = sub_1F882(0, a2, n99, a3);
    n17 = 0;
    FDOTHER_DAT = (int)sub_111BA(v9, a2, n99, a3, (int)aFdotherDat, FDOTHER_DAT, 0);// "FDOTHER.DAT"
    dword_53BFB = 0;
    byte_51AAC = 0;
    ((void (__usercall *)(__int32@<eax>, int@<edx>, int@<ecx>, int@<ebx>, unsigned __int8 *@<edi>))funcs_25E3A[n17])(
      n17,
      a2,
      a3,
      n99,
      a6);
    sub_25977((unsigned __int8)byte_51E63[n17], a2, n99, a3, (unsigned __int8)byte_51E63[n17], 0);
    byte_51AAC = 1;
    sub_4E381();
    return 0;
  }
  if ( v8 != 1 )
  {
    sub_25977(v8, a2, n99, a3, -1, 0);
    sub_10010();
    sub_25977((unsigned __int8)byte_51E63[n17], a2, n99, a3, (unsigned __int8)byte_51E63[n17], 0);
    return 0;
  }
  dword_53F66 = (int)sub_111BA(1, a2, n99, a3, (int)aFdotherDat, dword_53F66, 13);// "FDOTHER.DAT"
  v10 = sub_1F882(dword_53F66, a2, n99, a3);
  FDOTHER_DAT = (int)sub_111BA(v10, a2, n99, a3, (int)aFdotherDat, FDOTHER_DAT, 0);// "FDOTHER.DAT"
  v11 = memset(655360, 0, 64000);
  sub_11D40(v11, a2, n99, a3, 0, 255, 0);
  v14 = malloc(22987);
  v12 = (unsigned __int8 *)v14;
  v13 = (unsigned __int8 *)v14;
  LODWORD(v14) = fopen((int)aFd2Sav_4, (int)&unk_50220);// "FD2.SAV"
  v15 = v14;
  if ( (_DWORD)v14 )
  {
    sub_373CA(v12, 1u, 22987, v14);
    sub_4DF28((char *)v12, 22987);
    fclose(v15);
  }
  else
  {
    memset(v12, 255, 22987);
  }
  n3_3 = 0;
  do
  {
    v16 = sub_29BCB(v13, 0);
    if ( v16 != -1 )
    {
      v17 = (int)&v13[2600 * n3_3 + 12587];
      v14 = memmove(dword_53BF7, v17, 2560);
      v12 = (unsigned __int8 *)(v17 + 2560);
      n17 = *v12;
      dword_53BFB = v12[1];
      n6_6 = *(_DWORD *)(v12 + 2);
      byte_51AAB = v12[6];
      byte_53AF9 = v12[7];
      n127 = v12[8];
      byte_51E62 = v12[9];
      if ( n17 == 255 )
        v16 = 0;
    }
    sub_26996();
  }
  while ( !v16 );
  free(v13);
  LODWORD(v14) = free(dword_53F66);
  dword_53F66 = 0;
  if ( v16 == 1 )
  {
    byte_51AAC = 0;
    v16 = sub_26152(v14, HIDWORD(v14));
    if ( !v16 )
    {
      ((void (__usercall *)(__int32@<eax>, int@<edx>, int@<ecx>, int@<ebx>, unsigned __int8 *@<edi>))funcs_25E3A[n17])(
        n17,
        SHIDWORD(v14),
        a3,
        (int)v12,
        v13);
      sub_25977((unsigned __int8)byte_51E63[n17], SHIDWORD(v14), (int)v12, a3, (unsigned __int8)byte_51E63[n17], 0);
    }
    byte_51AAC = 1;
  }
  sub_4E381();
  return v16;
}
