/*
 * func-name: sub_18890
 * func-address: 0x18890
 * callers: 0x117e7
 * callees: 0x115b6, 0x12cea, 0x13488, 0x134e4, 0x13512, 0x13a44, 0x145cd, 0x146d1, 0x18b84, 0x18d8c, 0x1f183, 0x3702f, 0x3706e, 0x3776e, 0x4df4c, 0x4e390, 0x4e4f6, 0x4e8a5
 */

int __fastcall sub_18890(__int32 a1, int a2, int a3, int a4, int n6)
{
  unsigned __int8 *v5; // esi
  int n19; // ebx
  char *v7; // edi
  __int64 n255; // rax
  int n255_2; // edi
  int n18; // eax
  _BYTE *v11; // esi
  int v13; // eax
  _DWORD dst_[4]; // [esp+0h] [ebp-3Ch] BYREF
  int n255_1; // [esp+10h] [ebp-2Ch]
  int n255_5; // [esp+14h] [ebp-28h]
  int v17; // [esp+18h] [ebp-24h]
  int n255_3; // [esp+1Ch] [ebp-20h]
  int n255_4; // [esp+20h] [ebp-1Ch]
  int v20; // [esp+24h] [ebp-18h]
  int v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 104);
  v22 = a3;
  qmemcpy(dst_, &src__9, sizeof(dst_));
  dword_53C53 = 0;
  ::n255 = 255;
  v5 = (unsigned __int8 *)(80 * n6 + dword_53A45);
  v17 = v5[59];
  n19 = v5[32];
  if ( sub_1F183(n6) )
  {
    n19 = 19;
  }
  else if ( v5[7] == 28 )
  {
    n19 = 16;
  }
  v7 = sub_4E8A5(n19);
  n255 = malloc(v17);
  n255_3 = n255;
  n255_4 = n255;
  sub_145CD(n255, SHIDWORD(n255), n19, 0, 1);
  sub_4E390((int)v7, dword_53AB1, dword_53AB5, v17, (char *)dword_53A51, dword_53A69);
  sub_146D1(n255, SHIDWORD(n255), n19, 0, n6, 1);
  v21 = dword_53AB1;
  v20 = dword_53AB5;
  LODWORD(n255) = sub_18B84(n6);
  sub_115B6(n255, SHIDWORD(n255), n19, 0, 4, 0, 0);
  n255_1 = n255;
  LOBYTE(n255) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  if ( n255_1 != -1 )
  {
    sub_145CD(n255, SHIDWORD(n255), n19, 0, 1);
    n255_2 = sub_4E4F6(
               n255,
               (int)v7,
               v21,
               v20,
               v17,
               n255_3,
               dword_53AB1,
               dword_53AB5,
               0,
               (char *)dword_53A51,
               dword_53A69);
    n255_5 = n255_2;
    LOBYTE(n255) = sub_4DF4C((unsigned __int8 *)dword_53A51);
    n6_5 = 0;
    sub_12CEA(n255, SHIDWORD(n255), n19, 0, v21, v20);
    n6_5 = 1;
    if ( !n255_2 || n255_2 == 255 )
    {
      if ( n255_5 )
        return 1;
      do
        v13 = sub_18D8C(n6, dst_, 0);
      while ( !v13 );
      if ( v13 != -1 )
      {
        sub_13A44(*v5, SHIDWORD(n255), n19, 0, *v5, v5[1], 1);
        free(n255_4);
        return 1;
      }
      LODWORD(n255) = free(n255_4);
      if ( !dword_53C53 )
        return dword_53C53;
    }
    else
    {
      sub_13488(n255, SHIDWORD(n255), n19, 0, n6, n255_3, n255_2);
      sub_134E4(n255, SHIDWORD(n255), n19, 0);
      n18 = v5[7];
      if ( n18 != 18 && n18 != 19 && n18 != 34 )
        dst_[1] = 1;
      do
      {
        LODWORD(n255) = sub_18D8C(n6, dst_, 1);
        n19 = n255;
      }
      while ( !(_DWORD)n255 );
      if ( (_DWORD)n255 != -1 )
      {
        sub_13A44(*v5, SHIDWORD(n255), n255, 0, *v5, v5[1], 1);
        free(n255_4);
        return n19;
      }
      LODWORD(n255) = free(n255_4);
      if ( !dword_53C53 )
      {
        LODWORD(n255) = 80 * n6;
        v11 = (_BYTE *)(80 * n6 + dword_53A45);
        *v11 = v21;
        LOBYTE(n255) = v20;
        v11[1] = v20;
        sub_12CEA(n255, SHIDWORD(n255), n19, 0, v21, v20);
        return dword_53C53;
      }
    }
    sub_13512(n255, SHIDWORD(n255), n19, 0, n6);
    sub_13A44(*v5, SHIDWORD(n255), n19, 0, *v5, v5[1], 1);
    return dword_53C53;
  }
  sub_12CEA(n255, SHIDWORD(n255), n19, 0, v21, v20);
  free(n255_3);
  return 1;
}
