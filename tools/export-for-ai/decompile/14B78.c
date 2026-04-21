/*
 * func-name: sub_14B78
 * func-address: 0x14b78
 * callers: 0x13a9f, 0x13e9c, 0x14121, 0x1548e, 0x16f55
 * callees: 0x13488, 0x145cd, 0x146d1, 0x14b16, 0x1f183, 0x3702f, 0x3706e, 0x3776e, 0x37932, 0x4df4c, 0x4e390, 0x4e4f6, 0x4e8a5
 */

void __fastcall sub_14B78(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int n6,
        int a25)
{
  int v25; // ebx
  int n19; // esi
  char *v27; // esi
  int v28; // edi
  __int64 n255_4; // rax
  int v30; // eax
  int v31; // esi
  int n255_5; // edi
  int n2; // eax
  int i; // edi
  unsigned __int8 v35; // si
  int v36; // ebp
  int n255_3; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // ebp
  int v41; // [esp+48h] [ebp+4h]
  int n255_2; // [esp+64h] [ebp+20h]
  int n255; // [esp+68h] [ebp+24h]
  int v44; // [esp+68h] [ebp+24h]
  int v45; // [esp+6Ch] [ebp+28h]
  char v46; // [esp+6Ch] [ebp+28h]
  int v47; // [esp+70h] [ebp+2Ch]
  char v48; // [esp+70h] [ebp+2Ch]
  int n255_1; // [esp+74h] [ebp+30h]

  sub_3702F(a1, a2, a3, a4, 112);
  v25 = 80 * a7 + dword_53A45;
  n19 = *(unsigned __int8 *)(v25 + 32);
  if ( sub_1F183(a7) )
    n19 = 19;
  if ( *(_BYTE *)(v25 + 8) == 28 )
    n19 = 1;
  v27 = sub_4E8A5(n19);
  v28 = malloc(32);
  n255_4 = malloc(2048);
  sub_145CD(n255_4, SHIDWORD(n255_4), v25, a4, a8);
  if ( sub_4E4F6(n255_4, (int)v27, a8, a9, a7, v28, a22, a23, 0, (char *)dword_53A51, dword_53A69) == 255 )
  {
    LOBYTE(v30) = sub_4DF4C((unsigned __int8 *)dword_53A51);
    n255 = sub_4E4F6(v30, (int)v27, a8, a9, 28, v28, a22, a23, 1, (char *)dword_53A51, dword_53A69);
    if ( n255 != 255 )
    {
      LOBYTE(n255_4) = sub_4DF4C((unsigned __int8 *)dword_53A51);
      sub_145CD(n255_4, SHIDWORD(n255_4), v25, a4, a25);
      sub_4E390((int)v27, a8, a9, a7, (char *)dword_53A51, dword_53A69);
      v31 = a8;
      v25 = a9;
      v45 = a22;
      v47 = a23;
      n255_5 = 0;
      HIDWORD(n255_4) = dword_53A51;
      while ( n255_5 < n255 )
      {
        n2 = *(unsigned __int8 *)(n255_5 + a11);
        if ( *(_BYTE *)(n255_5 + a11) )
        {
          if ( n2 == 1 )
          {
            --v31;
          }
          else if ( n2 == 2 )
          {
            --v25;
          }
          else
          {
            ++v31;
          }
        }
        else
        {
          ++v25;
        }
        if ( *(unsigned __int8 *)(dword_53A51 + 4 * (v31 + v25 * dword_53AC1) + 7) != 255 )
        {
          v45 = v31;
          v47 = v25;
        }
        ++n255_5;
      }
      a22 = v45;
      a23 = v47;
    }
  }
  LOBYTE(n255_4) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  sub_145CD(n255_4, SHIDWORD(n255_4), v25, a4, a25);
  sub_4E390(a6, a8, a9, a7, (char *)dword_53A51, dword_53A69);
  sub_146D1(n255_4, SHIDWORD(n255_4), v25, a4, n6, a25);
  v44 = sub_14B16(n255_4, SHIDWORD(n255_4), v25, a4, a10);
  v46 = a22;
  v48 = a23;
  n255_1 = 255;
  n255_2 = 255;
  for ( i = 0; i < v44; ++i )
  {
    v35 = a10[2 * i];
    v25 = (unsigned __int8)a10[2 * i + 1];
    v36 = abs(v35 - a22);
    n255_3 = abs(v25 - a23) + v36;
    v41 = abs(v35 - a22);
    v38 = abs(v25 - a23);
    LODWORD(n255_4) = abs(v41 - v38);
    HIDWORD(n255_4) = n255_4;
    if ( n255_3 < n255_1 || n255_3 == n255_1 && (int)n255_4 < n255_2 )
    {
      v46 = v35;
      v48 = v25;
      n255_1 = n255_3;
      n255_2 = n255_4;
    }
  }
  LOBYTE(n255_4) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  sub_145CD(n255_4, SHIDWORD(n255_4), v25, a4, a25);
  v40 = sub_4E4F6(v39, a6, a8, a9, a7, a11, v46, v48, 0, (char *)dword_53A51, dword_53A69);
  LOBYTE(n255_4) = sub_4DF4C((unsigned __int8 *)dword_53A51);
  if ( v40 )
    sub_13488(n255_4, SHIDWORD(n255_4), v25, a4, n6, a11, v40);
  free(a11);
  free(a10);
  JUMPOUT(0x11011);
}
