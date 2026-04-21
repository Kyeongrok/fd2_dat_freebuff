/*
 * func-name: sub_33FAF
 * func-address: 0x33faf
 * callers: 0x117e7
 * callees: 0x111ba, 0x11cac, 0x1f525, 0x1f882, 0x25a96, 0x34317, 0x34366, 0x3702f, 0x3706e, 0x370f0, 0x37119, 0x3776e, 0x3790a, 0x37910, 0x37ed8, 0x4ded4, 0x4e381, 0x4e98d, 0x4ebe3
 */

int __fastcall sub_33FAF(__int32 a1, int a2, int a3, int a4)
{
  int n2; // esi
  __int64 v5; // rax
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // edi
  int n100; // ebx
  unsigned __int8 *v10; // edi
  int n2_1; // edx
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  int v16; // eax
  char v18; // [esp+0h] [ebp-58h] BYREF
  unsigned __int8 n16; // [esp+1h] [ebp-57h]
  _BYTE v20[8]; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE *v21; // [esp+24h] [ebp-34h]
  int v22; // [esp+28h] [ebp-30h]
  _BYTE *v23; // [esp+2Ch] [ebp-2Ch]
  _BYTE v24[4]; // [esp+30h] [ebp-28h] BYREF
  unsigned __int8 n100_1; // [esp+34h] [ebp-24h]
  unsigned __int8 v26; // [esp+38h] [ebp-20h]
  char v27; // [esp+3Ch] [ebp-1Ch]
  char v28; // [esp+40h] [ebp-18h]
  char v29; // [esp+44h] [ebp-14h]
  int v30; // [esp+54h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 120);
  v30 = a3;
  n2 = 2;
  v27 = 0;
  v28 = 0;
  v5 = malloc(64000);
  v6 = v5;
  v7 = v5;
  v23 = sub_111BA(v5, SHIDWORD(v5), v5, a4, (int)aFdotherDat, 0, 96);// "FDOTHER.DAT"
  v8 = (__int16 *)sub_111BA((__int32)v23, SHIDWORD(v5), v6, a4, (int)aFdotherDat, 0, 97);// "FDOTHER.DAT"
  v21 = sub_111BA((__int32)v8, SHIDWORD(v5), v6, a4, (int)aFdotherDat, 0, 98);// "FDOTHER.DAT"
  sub_4E98D(v8, 0, 0, v6, 320, -1);
  LODWORD(v5) = free(v8);
  LODWORD(v5) = sub_1F882(v5, SHIDWORD(v5), v6, a4);
  n100 = 100;
  v26 = sub_4EBE3(v5) % 100;
  v22 = v26;
  v10 = (unsigned __int8 *)sub_4DED4(v26);
  n2_1 = (int)v20;
  sub_34317(*v10, v20);
  v29 = 0;
  n100_1 = 0;
  if ( !v27 )
  {
    v12 = sub_34366(v23, v7, v22, v20, 0, v24, 2);
    sub_1F525(v12, (int)v20, 100, a4);
  }
  do
  {
    sub_34366(v23, v7, v26, v20, n100_1, v24, n2);
    sub_4E381();
    n16 = 16;
    int386(22, &v18, &v18);
    if ( n16 == 224 || n16 == 82 || n16 == 57 )
      n16 = 28;
    if ( n16 == 83 )
      n16 = 1;
    switch ( n16 )
    {
      case 0x4Bu:
        sub_25A96(75, n2_1, n100, a4, FDOTHER_DAT__1, 2, 1);
        if ( n2 )
          --n2;
        else
          n2 = 5;
        break;
      case 0x4Du:
        n100 = 6;
        v13 = (n2 + 1) / 6;
        n2 = (n2 + 1) % 6;
        n2_1 = n2;
        sub_25A96(v13, n2, 6, a4, FDOTHER_DAT__1, 2, 1);
        break;
      case 0x1Cu:
        sub_25A96(28, n2_1, n100, a4, FDOTHER_DAT__1, 7, 1);
        LOBYTE(n2_1) = v20[n2];
        v24[n100_1++] = n2_1;
        n100 = n100_1;
        sub_34366(v23, v7, v26, v20, n100_1, v24, n2);
        if ( n100 == 3 )
          v29 = 1;
        else
          sub_34317(v10[n100], v20);
        break;
      default:
        if ( n16 == 1 && n100_1 )
        {
          sub_25A96(1, n2_1, n100, a4, FDOTHER_DAT__1, 0, n16);
          sub_34317(v10[--n100_1], v20);
        }
        break;
    }
  }
  while ( !v29 );
  n100_1 = 0;
  LOBYTE(n2_1) = 0;
  while ( (unsigned __int8)n2_1 < 3u )
  {
    n100 = v10[(unsigned __int8)n2_1];
    LOBYTE(n2_1) = n2_1 + 1;
  }
  v28 = 1;
  byte_53A44 = 1;
  free(v23);
  free(v7);
  v14 = free(v21);
  sub_1F882(v14, n2_1, n100, a4);
  v15 = memset(655360, 0, 64000);
  v16 = sub_11CAC(v15, n2_1, n100, a4, 1);
  return sub_1F525(v16, n2_1, n100, a4);
}
