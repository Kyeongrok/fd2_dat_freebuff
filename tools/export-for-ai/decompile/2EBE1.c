/*
 * func-name: sub_2EBE1
 * func-address: 0x2ebe1
 * callers: 0x2e2b0
 * callees: 0x11eb0, 0x17aa9, 0x25a96, 0x2eb9f, 0x2f4d4, 0x2f631, 0x2f7b6, 0x2facd, 0x3702f, 0x3790a, 0x37910, 0x37ae5, 0x4ebe3
 */

int __fastcall sub_2EBE1(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int n6,
        int n6_1,
        unsigned __int8 *n3,
        _BYTE *arg0,
        int arg8_1,
        int a10,
        int a11,
        int a12)
{
  int n5; // esi
  int i; // edi
  int n100; // ebx
  int n3_1; // edx
  int arg4_1; // edi
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  __int32 v21; // eax
  int arg4_2; // eax
  __int32 v23; // eax
  int v24; // edx
  __int32 v25; // eax
  __int32 v26; // eax
  __int32 v27; // eax
  __int32 v28; // eax
  __int32 v30; // eax
  int v31; // eax
  int v32; // eax
  _DWORD dst_[6]; // [esp+0h] [ebp-9Ch] BYREF
  int v34; // [esp+18h] [ebp-84h] BYREF
  int v35; // [esp+1Ch] [ebp-80h]
  int v36; // [esp+20h] [ebp-7Ch]
  int v37; // [esp+24h] [ebp-78h]
  int v38; // [esp+28h] [ebp-74h]
  int v39; // [esp+2Ch] [ebp-70h]
  _DWORD dst__1[6]; // [esp+30h] [ebp-6Ch] BYREF
  int arg8; // [esp+48h] [ebp-54h]
  int n2; // [esp+4Ch] [ebp-50h]
  int v43; // [esp+50h] [ebp-4Ch]
  int n3_2; // [esp+54h] [ebp-48h]
  int v45; // [esp+58h] [ebp-44h]
  int v46; // [esp+5Ch] [ebp-40h]
  int v47; // [esp+60h] [ebp-3Ch]
  int v48; // [esp+64h] [ebp-38h]
  int arg8_4; // [esp+68h] [ebp-34h]
  int arg8_3; // [esp+6Ch] [ebp-30h]
  int j; // [esp+70h] [ebp-2Ch]
  int n33; // [esp+74h] [ebp-28h]
  int v53; // [esp+78h] [ebp-24h]
  int arg8_2; // [esp+7Ch] [ebp-20h]
  unsigned __int8 arg4_3; // [esp+80h] [ebp-1Ch]
  char v56; // [esp+84h] [ebp-18h]
  unsigned __int8 v57; // [esp+88h] [ebp-14h]
  int v58; // [esp+98h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 184);
  v58 = a3;
  v57 = 0;
  arg4_3 = 0;
  qmemcpy(dst_, &src__3, sizeof(dst_));
  qmemcpy(dst__1, &src__4, sizeof(dst__1));
  n5 = 0;
  n33 = -1;
  n2 = 1;
  v47 = 0;
  v56 = 0;
  for ( i = 0; i < *n3; ++i )
  {
    if ( n3[*(_DWORD *)&n3[4 * i + 8] + 4] )
      ++v47;
  }
  if ( !v47 )
    v47 = 1;
  v46 = n8_0 + 80 * n6;
  n3_2 = 80 * n6_1 + n8_0;
  n100 = 100;
  n3_1 = sub_4EBE3(80 * n6_1) % 100;
  if ( n3_1 < 3 )
    n2 = 2;
LABEL_10:
  if ( n2-- )
  {
    v48 = 0;
    if ( !n3_9 )
    {
      v43 = *(unsigned __int16 *)(n3_2 + 64);
      sub_2F7B6(n6, n6_1, &v34);
      if ( !v56 )
      {
        if ( v38 )
        {
          v56 = 1;
          ++n2;
        }
      }
    }
    arg4_1 = 0;
    if ( n3_9 )
    {
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
    }
    if ( n3[1] )
    {
      memset(arg8_1, 0, &loc_1F400);
      if ( *(_BYTE *)(v46 + 6) )
      {
        while ( arg4_1 < n3[2] )
        {
          n100 = (int)&n3[*(_DWORD *)&n3[4 * arg4_1 + 8]];
          if ( *(_BYTE *)(n100 + 5) )
            sub_25A96(*(unsigned __int8 *)(n100 + 5), n3_1, n100, 0, a12, *(unsigned __int8 *)(n100 + 5), 1);
          arg8 = arg8_1 + 320;
          v18 = sub_11EB0(arg8_1 + 320, n3_1, n100, 0, arg8_1 + 320, 640, a10, 320, 320, 200);
          LOBYTE(v19) = sub_2EB9F(v18, n3_1, n100, 0, (int)n3, arg4_1, arg8, 640, -1);
          sub_11EB0(v19, n3_1, n100, 0, 655360, 320, arg8, 640, 320, 200);
          sub_17AA9(*(unsigned __int8 *)(n100 + 6), n3_1, n100, 0, *(unsigned __int8 *)(n100 + 6));
          ++arg4_1;
        }
        sub_2F4D4(n6_1, (int)arg0, a10, arg8_1, (__int16 *)n26_0);
      }
      else
      {
        while ( arg4_1 < n3[2] )
        {
          arg4_2 = arg4_1;
          n100 = (int)&n3[*(_DWORD *)&n3[4 * arg4_1 + 8]];
          if ( *(_BYTE *)(n100 + 5) )
            arg4_2 = sub_25A96(*(unsigned __int8 *)(n100 + 5), n3_1, n100, 0, a12, *(unsigned __int8 *)(n100 + 5), 1);
          v20 = sub_11EB0(arg4_2, n3_1, n100, 0, arg8_1, 640, a10, 320, 320, 200);
          LOBYTE(v21) = sub_2EB9F(v20, n3_1, n100, 0, (int)n3, arg4_1, arg8_1, 640, -1);
          sub_11EB0(v21, n3_1, n100, 0, 655360, 320, arg8_1, 640, 320, 200);
          sub_17AA9(*(unsigned __int8 *)(n100 + 6), n3_1, n100, 0, *(unsigned __int8 *)(n100 + 6));
          ++arg4_1;
        }
        sub_2F631(n6_1, arg0, a11, a10, arg8_1, n26_0);
      }
    }
    while ( 1 )
    {
      if ( arg4_1 >= *n3 )
      {
        if ( !v45 )
          n2 = 0;
        if ( n2 && n3[1] == 1 )
        {
          memset(arg8_1, 0, &loc_1F400);
          v30 = *(unsigned __int8 *)(v46 + 6);
          if ( *(_BYTE *)(v46 + 6) )
          {
            v31 = sub_11EB0(v30, n3_1, n100, 0, arg8_1, 640, a10, 320, 320, 200);
            sub_2EB9F(v31, n3_1, n100, 0, (int)arg0, 0, arg8_1, 640, -1);
            sub_2F631(n6, n3, a11, a10, arg8_1, n26);
          }
          else
          {
            n100 = arg8_1 + 320;
            v32 = sub_11EB0(v30, n3_1, arg8_1 + 320, 0, arg8_1 + 320, 640, a10, 320, 320, 200);
            sub_2EB9F(v32, n3_1, n100, 0, (int)arg0, 0, n100, 640, -1);
            sub_2F4D4(n6, (int)n3, a10, arg8_1, (__int16 *)n26);
          }
        }
        goto LABEL_10;
      }
      n100 = (int)&n3[*(_DWORD *)&n3[4 * arg4_1 + 8]];
      if ( *(_BYTE *)(n100 + 4) )
      {
        ++v48;
        v45 = v43 - v39 * v48 / v47;
        if ( v45 < 0 )
          v45 = 0;
        v23 = v45;
        n3_1 = n3_2;
        *(_WORD *)(n3_2 + 64) = v45;
        if ( !n3_9 )
          v23 = sub_2FACD(a10, n6_1);
        if ( v34 )
        {
          if ( *(_BYTE *)(n100 + 5) )
            sub_25A96(v23, n3_1, n100, 0, a12, 0, 1);
        }
        else
        {
          n5 = 5;
          n33 = 33;
          if ( *(_BYTE *)(n100 + 5) )
            goto LABEL_43;
        }
      }
      else if ( *(_BYTE *)(n100 + 5) )
      {
LABEL_43:
        sub_25A96(*(unsigned __int8 *)(n100 + 5), n3_1, n100, 0, a12, *(unsigned __int8 *)(n100 + 5), 1);
      }
      for ( j = 0; *(unsigned __int8 *)(n100 + 6) > j; ++j )
      {
        v53 = dst__1[n5];
        if ( n3[1] )
          v53 = 0;
        arg8_2 = arg8_1 + 16040;
        sub_11EB0(arg8_1 + 16040, n3_1, n100, 0, arg8_1 + 16040, 400, a10, 320, 320, 200);
        v27 = *(unsigned __int8 *)(v46 + 6);
        if ( *(_BYTE *)(v46 + 6) )
        {
          if ( (*(_BYTE *)(n100 + 7) & 1) != 0 )
            sub_2EB9F(v27, n3_1, n100, 0, (int)n3, arg4_1, arg8_2, 400, -1);
          arg8_3 = arg8_1 + 16040;
          v24 = 400 * v53;
          LOBYTE(v28) = sub_2EB9F(
                          arg4_3,
                          400 * v53,
                          n100,
                          0,
                          (int)arg0,
                          arg4_3,
                          arg8_1 + 16040 - dst_[n5] - 400 * v53,
                          400,
                          n33);
          if ( (*(_BYTE *)(n100 + 7) & 1) == 0 )
            sub_2EB9F(v28, v24, n100, 0, (int)n3, arg4_1, arg8_3, 400, -1);
        }
        else
        {
          if ( (*(_BYTE *)(n100 + 7) & 1) == 0 )
            sub_2EB9F(v27, n3_1, n100, 0, (int)n3, arg4_1, arg8_2, 400, -1);
          arg8_4 = arg8_1 + 16040;
          v24 = 400 * v53;
          LOBYTE(v25) = sub_2EB9F(
                          arg4_3,
                          400 * v53,
                          n100,
                          0,
                          (int)arg0,
                          arg4_3,
                          400 * v53 + dst_[n5] + arg8_1 + 16040,
                          400,
                          n33);
          if ( (*(_BYTE *)(n100 + 7) & 1) != 0 )
            sub_2EB9F(v25, v24, n100, 0, (int)n3, arg4_1, arg8_4, 400, -1);
        }
        sub_11EB0(arg8_1 + 16040, v24, n100, 0, 655360, 320, arg8_1 + 16040, 400, 320, 200);
        if ( *(_BYTE *)(n100 + 4) == 1 && v48 == v47 )
        {
          if ( v36 )
          {
            outp(968, 0);
            outp(969, 1);
            outp(969, 32);
            outp(969, 0);
            j___delay(20);
            outp(968, 0);
            outp(969, 0);
            outp(969, 0);
            outp(969, 0);
          }
          if ( v35 )
          {
            outp(968, 0);
            outp(969, 63);
            outp(969, 63);
            outp(969, 63);
            j___delay(20);
            outp(968, 0);
            outp(969, 0);
            outp(969, 0);
            outp(969, 0);
            j___delay(40);
          }
        }
        v26 = (unsigned __int8)arg0[*(_DWORD *)&arg0[4 * arg4_3 + 8] + 6];
        n3_1 = ++v57;
        if ( v57 == v26 )
        {
          v57 = 0;
          v26 = ++arg4_3;
          n3_1 = (unsigned __int8)*arg0;
          if ( arg4_3 == n3_1 )
            arg4_3 = 0;
        }
        if ( n5 )
          --n5;
        n33 = -1;
        sub_17AA9(v26, n3_1, n100, 0, 1);
      }
      if ( n3_9 == 1 && v48 == v47 )
        return 1;
      ++arg4_1;
    }
  }
  return v45;
}
