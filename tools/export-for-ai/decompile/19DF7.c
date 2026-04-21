/*
 * func-name: sub_19DF7
 * func-address: 0x19df7
 * callers: 0x16f55
 * callees: 0x10010, 0x11cac, 0x15f84, 0x16559, 0x1741c, 0x176b4, 0x177fc, 0x1956b, 0x196cb, 0x197e5, 0x19953, 0x1b1e7, 0x25977, 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c, 0x3771c, 0x3776e, 0x377a3, 0x3790a, 0x4df09, 0x4df28, 0x4e381
 */

void __usercall sub_19DF7(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int arg20_1@<ebx>,
        int n74_1@<edi>,
        int n19_1@<esi>,
        int a7,
        int a8,
        int a9,
        ...)
{
  unsigned __int8 *dst; // edi
  int v10; // ebx
  _BYTE *v11; // esi
  int n6; // edx
  int v13; // eax
  __int32 v14; // eax
  int v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // ebx
  __int32 v21; // eax
  int v22; // eax
  int v23; // edi
  __int32 v24; // eax
  int v25; // eax
  __int32 v26; // eax
  int v27; // eax
  __int32 v28; // eax
  __int32 v29; // eax
  int v30; // eax
  __int32 v31; // eax
  int v32; // eax
  __int32 v33; // eax
  __int32 v34; // ebx
  __int32 v35; // eax
  __int32 v36; // eax
  int dst__1[4]; // [esp-4h] [ebp-2Ch] BYREF
  int dst_[4]; // [esp+Ch] [ebp-1Ch] BYREF
  int n74; // [esp+1Ch] [ebp-Ch]
  int n19; // [esp+20h] [ebp-8h]
  int arg20; // [esp+24h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h] BYREF
  va_list va; // [esp+38h] [ebp+10h] BYREF

  va_start(va, a9);
  sub_3702F(a1, a2, arg20_1, a3, 84);
  arg20 = arg20_1;
  n19 = n19_1;
  n74 = n74_1;
  qmemcpy(dst_, &src__11, sizeof(dst_));
  qmemcpy(dst__1, &src__12, sizeof(dst__1));
  dst = (unsigned __int8 *)dst_;
  v10 = fopen((int)aFd2Sav, (int)aRb_14);       // "rb"
  if ( v10 )
  {
    v11 = (_BYTE *)malloc(22987);
    sub_373CA(v11, 1u, 22987, v10);
    fclose(v10);
    free(v11);
  }
  else
  {
    dst__1[2] = 1;
  }
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v10 = 80 * n6;
    v13 = 80 * n6 + dword_53A45;
    if ( (*(_BYTE *)(v13 + 5) & 1) == 0 && *(char *)(v13 + 5) < 0 )
      dst__1[1] = 1;
  }
  sub_1741C(
    (__int32)dst_,
    n6,
    v10,
    0,
    (int)dst_,
    (int)dst__1,
    dst__1[0],
    dst__1[1],
    dst__1[2],
    dst__1[3],
    dst_[0],
    dst_[1],
    dst_[2],
    dst_[3],
    n74);
  do
    v10 = sub_177FC((__int32)va, n6, v10, 0, (int)va, &retaddr);
  while ( !v10 );
  sub_176B4((__int32)va, n6, v10, 0, (int)va, (int)&retaddr);
  v15 = sub_11CAC(v14, n6, v10, 0, 0);
  if ( v10 != -1 )
  {
    switch ( n3_3 )
    {
      case 0:
        sub_1B1E7(v15);
        goto LABEL_33;
      case 1:
        v16 = sub_1956B(v15, n6, v10, 0, 75);
        sub_15F84((unsigned __int8 *)dst_, v16, n6, 0, v10, arg0, 410, 696099, 320, 205, 76, 74, 19, 1);
        v18 = sub_16559(v17, n6, v10, 0, 0);
        sub_19953(v18, n6, v10, 0);
        v20 = v19;
        sub_197E5(v19, n6, v19, 0);
        if ( v20 == 1 && !n3_3 )
        {
          v20 = malloc(22987);
          v22 = fopen((int)aFd2Sav_0, (int)aRb);// "rb"
          v23 = v22;
          if ( v22 )
          {
            sub_373CA((_BYTE *)v20, 1u, 22987, v22);
            sub_4DF28((char *)v20, 22987);
            fclose(v23);
          }
          else
          {
            *(_BYTE *)(v20 + 15147) = -1;
            *(_BYTE *)(v20 + 17747) = -1;
            *(_BYTE *)(v20 + 20347) = -1;
            *(_BYTE *)(v20 + 22947) = -1;
          }
          memmove(v20, dword_53A55, 2211);
          memmove(v20 + 2211, dword_53BF7, 2560);
          memmove(v20 + 4771, dword_53A45, 80 * n6_0);
          memmove(v20 + 12451, dword_53AD5, 32);
          *(_BYTE *)(v20 + 12483) = dword_53BEF;
          *(_BYTE *)(v20 + 12484) = n6_0;
          *(_BYTE *)(v20 + 12485) = n17;
          *(_BYTE *)(v20 + 12486) = dword_53AA9;
          *(_BYTE *)(v20 + 12487) = dword_53AAD;
          *(_BYTE *)(v20 + 12488) = dword_53AB1;
          *(_BYTE *)(v20 + 12489) = dword_53AB5;
          *(_BYTE *)(v20 + 12490) = n10;
          *(_BYTE *)(v20 + 12491) = n2_1;
          *(_BYTE *)(v20 + 12492) = dword_53BFB;
          n6 = n6_6;
          *(_DWORD *)(v20 + 12493) = n6_6;
          *(_BYTE *)(v20 + 12497) = byte_53AF9;
          *(_BYTE *)(v20 + 12498) = byte_51AAB;
          *(_BYTE *)(v20 + 12499) = n127;
          LOBYTE(n6) = byte_51E62;
          *(_BYTE *)(v20 + 12500) = byte_51E62;
          dst = (unsigned __int8 *)fopen((int)aFd2Sav_1, (int)aWb);// "wb"
          *(_DWORD *)(v20 + 22983) = sub_4DF09((_BYTE *)v20, 22987);
          sub_4DF28((char *)v20, 22987);
          fwrite(v20, 1, 22987, dst);
          fclose(dst);
          v21 = free(v20);
          arg20 = 1;
          n19 = 19;
          n74 = 74;
          dst_[3] = 76;
          dst_[2] = 205;
          dst_[1] = 320;
          dst_[0] = 702179;
          dst__1[3] = 411;
          goto LABEL_23;
        }
LABEL_22:
        arg20 = 1;
        n19 = 19;
        n74 = 74;
        dst_[3] = 76;
        dst_[2] = 205;
        dst_[1] = 320;
        dst_[0] = 702179;
        dst__1[3] = 412;
LABEL_23:
        sub_15F84(dst, v21, n6, 0, v20, arg0, dst__1[3], dst_[0], dst_[1], dst_[2], dst_[3], n74, n19, arg20);
        v24 = j___delay(200);
        sub_196CB(v24, n6, v20, 0);
LABEL_24:
        sub_4E381();
LABEL_33:
        JUMPOUT(0x16FD8);
      case 2:
        v25 = sub_1956B(v15, n6, v10, 0, 75);
        sub_15F84((unsigned __int8 *)dst_, v25, n6, 0, v10, arg0, 413, 696099, 320, 205, 76, 74, 19, 1);
        v27 = sub_16559(v26, n6, v10, 0, 0);
        sub_19953(v27, n6, v10, 0);
        v20 = v28;
        sub_197E5(v28, n6, v28, 0);
        if ( v20 == 1 && !n3_3 )
        {
          sub_15F84((unsigned __int8 *)dst_, v21, n6, 0, 1, arg0, 414, 702179, 320, 205, 76, 74, 19, 1);
          v29 = j___delay(200);
          sub_196CB(v29, n6, 1, 0);
          sub_25977(-1, 0);
          sub_10010();
          goto LABEL_24;
        }
        goto LABEL_22;
    }
    v30 = sub_1956B(v15, n6, v10, 0, 75);
    sub_15F84((unsigned __int8 *)dst_, v30, n6, 0, v10, arg0, 415, 696099, 320, 205, 76, 74, 19, 1);
    v32 = sub_16559(v31, n6, v10, 0, 0);
    sub_19953(v32, n6, v10, 0);
    v34 = v33;
    sub_197E5(v33, n6, v33, 0);
    if ( v34 != 1 || n3_3 )
      JUMPOUT(0x1716F);
    sub_15F84((unsigned __int8 *)dst_, v35, n6, 0, 1, arg0, 416, 702179, 320, 205, 76, 74, 19, 1);
    sub_25977(-1, 1);
    v36 = j___delay(200);
    sub_196CB(v36, n6, 1, 0);
  }
  JUMPOUT(0x16FDD);
}
