/*
 * func-name: sub_1BBDC
 * func-address: 0x1bbdc
 * callers: 0x18d8c
 * callees: 0x115b6, 0x11cac, 0x12c0d, 0x12cea, 0x12d7b, 0x13512, 0x14818, 0x173e7, 0x1741c, 0x176b4, 0x177fc, 0x1b722, 0x1b750, 0x1b8a6, 0x1b8e7, 0x1b932, 0x1bb8c, 0x1bffe, 0x20c6f, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e8bc
 */

int __usercall sub_1BBDC@<eax>(__int64 n6_1@<edx:eax>, int a2@<ecx>, int a3@<ebx>, int n6)
{
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int n6_7; // edi
  int v8; // eax
  char *v9; // esi
  int n6_2; // edi
  unsigned __int8 *n6_4; // edi
  int v12; // esi
  char n6_6; // di
  int v15[13]; // [esp+0h] [ebp-78h] BYREF
  _BYTE dst_[16]; // [esp+34h] [ebp-44h] BYREF
  _DWORD dst__1[4]; // [esp+44h] [ebp-34h] BYREF
  int n6_5; // [esp+54h] [ebp-24h]
  int n3; // [esp+58h] [ebp-20h]
  int v20; // [esp+5Ch] [ebp-1Ch]
  int v21; // [esp+60h] [ebp-18h]
  int n6_3; // [esp+64h] [ebp-14h]
  int v23; // [esp+74h] [ebp-4h]

  LODWORD(n6_1) = sub_3702F(n6_1, BYTE4(n6_1), a3, a2, 148);
  v23 = a3;
  qmemcpy(dst_, &src__13, sizeof(dst_));
  qmemcpy(dst__1, &src__14, sizeof(dst__1));
  LODWORD(n6_1) = sub_1B8A6(n6_1, BYTE4(n6_1), a3, 0, n6);
  if ( (_DWORD)n6_1 )
  {
    sub_14818(n6_1, BYTE4(n6_1), a3, 0, dword_53AB1, dword_53AB5, 0, 1, 1, 3);
    v5 = v4;
    sub_4DF4C((unsigned __int8 *)dword_53A51);
    if ( !v5 )
      dst__1[1] = 1;
    sub_173E7((__int32)dst__1, BYTE4(n6_1), a3, 0, (int)dst__1);
    sub_1741C(
      (__int32)dst_,
      BYTE4(n6_1),
      a3,
      0,
      (int)dst_,
      (int)dst__1,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v15[7],
      v15[8]);
    do
      v6 = sub_177FC((__int32)dst_, BYTE4(n6_1), a3, 0, (int)dst_, dst__1);
    while ( !v6 );
    sub_176B4((__int32)dst_, BYTE4(n6_1), a3, 0, (int)dst_, (int)dst__1);
    sub_11CAC(n6_1, BYTE4(n6_1), a3, 0, 0);
    v20 = dword_53AB1;
    LODWORD(n6_1) = dword_53AB5;
    v21 = dword_53AB5;
    if ( v6 == -1 )
    {
      LODWORD(n6_1) = -1;
      return n6_1;
    }
    switch ( n3_3 )
    {
      case 0:
        while ( 1 )
        {
          LODWORD(n6_1) = sub_1B932(n6_1, BYTE4(n6_1), a3, 0, n6, 1);
          n6_7 = n6_1;
          if ( (_DWORD)n6_1 )
          {
            v8 = sub_1B722(n6_1, BYTE4(n6_1), a3, 0, n6, n3_3);
            v9 = sub_4E8BC(v8);
            ::n6_5 = (unsigned __int8)v9[18] + 2;
            BYTE4(n6_1) = v9[13] == 23;
            sub_14818(
              (__int32)v15,
              BYTE4(n6_1),
              a3,
              0,
              dword_53AB1,
              dword_53AB5,
              (int)v15,
              (unsigned __int8)v9[16],
              BYTE4(n6_1),
              (unsigned __int8)v9[21]);
            sub_115B6(
              (unsigned __int8)v9[21],
              BYTE4(n6_1),
              a3,
              0,
              (unsigned __int8)v9[21],
              n6_1,
              (unsigned __int8 *)v15);
            n6_2 = n6_1;
            sub_4DF4C((unsigned __int8 *)dword_53A51);
            ::n6_5 = 1;
            sub_14818(
              (__int32)v15,
              BYTE4(n6_1),
              a3,
              0,
              dword_53AB1,
              dword_53AB5,
              (int)v15,
              (unsigned __int8)v9[18],
              0,
              (unsigned __int8)v9[21]);
            n6_3 = n6_1;
            sub_4DF4C((unsigned __int8 *)dword_53A51);
            LODWORD(n6_1) = (unsigned __int8)v9[13];
            if ( (_DWORD)n6_1 == 23 )
            {
              LODWORD(n6_1) = 80 * n6 + dword_53A45;
              if ( *(_BYTE *)(n6_1 + 8) != 24 || (LODWORD(n6_1) = *(unsigned __int16 *)(n6_1 + 70), (int)n6_1 < 20) )
                n6_2 = -1;
              if ( n6_2 != -1 )
              {
                sub_115B6(LOBYTE(v15[0]), BYTE4(n6_1), a3, 0, 6, LOBYTE(v15[0]), 0);
                n6_2 = n6_1;
              }
              if ( n6_2 != -1 )
              {
                dword_51CF9 = dword_53AB1;
                dword_51CFD = dword_53AB5;
                ::n6_5 = 0;
                sub_12D7B(dword_53AB5, BYTE4(n6_1), a3, 0, n6);
                ::n6_5 = 1;
              }
            }
            if ( n6_2 != -1 )
            {
              LODWORD(n6_1) = sub_20C6F(n6, n3_3, n6_3, (unsigned __int8 *)v15);
              sub_13512(n6_1, BYTE4(n6_1), a3, 0, n6);
              LODWORD(n6_1) = 1;
              return n6_1;
            }
            ::n6_5 = 0;
            sub_12D7B(n6_1, BYTE4(n6_1), a3, 0, n6);
            ::n6_5 = 1;
            n6_7 = 1;
          }
          if ( n6_7 != 1 )
            goto LABEL_37;
        }
      case 1:
        LODWORD(n6_1) = sub_1B932(dword_53AB5, BYTE4(n6_1), a3, 0, n6, 0);
        if ( !(_DWORD)n6_1 )
          break;
        n6_1 = malloc(100);
        n6_4 = (unsigned __int8 *)n6_1;
        sub_14818(n6_1, BYTE4(n6_1), a3, 0, dword_53AB1, dword_53AB5, n6_1, 1, 1, 3);
        sub_115B6(n6_1, BYTE4(n6_1), a3, 0, 3, n6_1, n6_4);
        n6_5 = n6_1;
        v12 = sub_12C0D(n6_1, SHIDWORD(n6_1), a3, 0);
        LOBYTE(n6_1) = sub_4DF4C((unsigned __int8 *)dword_53A51);
        sub_12CEA(n6_1, SHIDWORD(n6_1), a3, 0, v20, v21);
        LODWORD(n6_1) = free(n6_4);
        if ( n6_5 == -1 )
          break;
        LODWORD(n6_1) = sub_1B722(n6_1, BYTE4(n6_1), a3, 0, n6, n3_3);
        n6_6 = n6_1;
        LODWORD(n6_1) = sub_1BB8C(n6_1, SHIDWORD(n6_1), a3, 0, v12, n6_1);
        if ( (_DWORD)n6_1 != -1 )
        {
          LODWORD(n6_1) = sub_1B8E7(n6_1, BYTE4(n6_1), a3, 0, n6, n3_3);
LABEL_31:
          dword_53C53 = 1;
          break;
        }
        n3 = n3_3;
        LODWORD(n6_1) = sub_1B932(n3_3, BYTE4(n6_1), a3, 0, v12, 0);
        if ( (_DWORD)n6_1 )
        {
          a3 = sub_1B722(n6_1, BYTE4(n6_1), a3, 0, v12, n3_3);
          LODWORD(n6_1) = sub_1B8E7(a3, BYTE4(n6_1), a3, 0, v12, n3_3);
          LODWORD(n6_1) = sub_1BB8C(n6_1, SHIDWORD(n6_1), a3, 0, v12, n6_6);
          LODWORD(n6_1) = sub_1B8E7(n6_1, BYTE4(n6_1), a3, 0, n6, n3);
          LODWORD(n6_1) = sub_1BB8C(n6_1, SHIDWORD(n6_1), a3, 0, n6, a3);
          goto LABEL_31;
        }
        break;
      case 2:
        sub_1BFFE(n6);
LABEL_37:
        LODWORD(n6_1) = 0;
        return n6_1;
      default:
        LODWORD(n6_1) = sub_1B932(dword_53AB5, BYTE4(n6_1), a3, 0, n6, 0);
        if ( (_DWORD)n6_1 )
          LODWORD(n6_1) = sub_1B8E7(n6_1, BYTE4(n6_1), a3, 0, n6, n3_3);
        break;
    }
    sub_1B750(n6_1, BYTE4(n6_1), a3, 0, n6);
    goto LABEL_37;
  }
  LODWORD(n6_1) = -1;
  return n6_1;
}
