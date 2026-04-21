/*
 * func-name: sub_1ACF3
 * func-address: 0x1acf3
 * callers: 0x11cac, 0x1741c, 0x17898, 0x18b84
 * callees: 0x12c0d, 0x12e38, 0x1875d, 0x1aeb1, 0x3702f, 0x4e22a, 0x4e98d
 */

void __fastcall sub_1ACF3(__int32 a1, int a2, int a3, int a4, int a5, int n456)
{
  int v6; // ebp
  int v7; // edx
  __int32 v8; // eax
  int v9; // eax
  int v10; // esi
  int n3; // eax
  _WORD v12[2]; // [esp+0h] [ebp-1Ch] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-17h]
  char *src; // [esp+8h] [ebp-14h]
  int v15; // [esp+18h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 56);
  v15 = a3;
  if ( byte_51AAB && byte_51AAC )
  {
    if ( n2_1 <= 5 || n10 >= 3 )
    {
      if ( n2_1 > 5 && n10 > 9 )
        n242 = 1;
    }
    else
    {
      n242 = 242;
    }
    v6 = n242 + 157 * n456 + a5;
    sub_4E98D((__int16 *)(*(_DWORD *)(dword_53A81 + 526) + dword_53A81), 0, 0, v6, n456, -1);
    sub_12E38((__int32)v12, a2, a3, a4, dword_53AB1, dword_53AB5, (int)v12);
    v7 = dword_53A5D;
    sub_4E22A((char *)(dword_53A5D + *(_DWORD *)(dword_53A5D + 4 * v12[0] + 6)), (char *)(v6 + 5 * n456 + 6), n456);
    sub_1AEB1(v6 + 8 * n456 + 43, n456, dword_51A12[v13]);
    v8 = sub_1AEB1(v6 + 19 * n456 + 43, n456, dword_51A2A[v13]);
    v9 = sub_12C0D(v8, v7, a3, a4);
    if ( v9 != -1 )
    {
      v10 = 80 * v9 + dword_53A45;
      if ( *(_BYTE *)(v10 + 7) != 121 && (*(_BYTE *)(v10 + 31) != 10 || *(_BYTE *)(v10 + 6) != 1) )
      {
        n3 = n3_1;
        if ( n3_1 == 3 )
          n3 = 1;
        src = (char *)(dword_53A61 + *(_DWORD *)(dword_53A61 + 4 * (12 * *(unsigned __int8 *)(v10 + 2) + n3)));
        sub_4E22A(src, (char *)(v6 + 5 * n456 + 6), n456);
        sub_1875D(
          *(unsigned __int16 *)(v10 + 64),
          *(unsigned __int16 *)(v10 + 66),
          a3,
          a4,
          21 * n456 + v6 + 9,
          n456,
          *(unsigned __int16 *)(v10 + 64),
          *(unsigned __int16 *)(v10 + 66),
          3);
      }
    }
  }
  JUMPOUT(0x1317D);
}
