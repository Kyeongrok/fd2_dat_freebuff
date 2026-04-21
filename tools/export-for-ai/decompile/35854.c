/*
 * func-name: sub_35854
 * func-address: 0x35854
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x12263, 0x12e38, 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x196cb, 0x1b8a6, 0x1bb8c, 0x3702f, 0x4e381
 */

char __fastcall sub_35854(__int32 a1, int a2, int n5, int a4, int a5)
{
  int n8; // edx
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  __int32 v11; // eax
  int v12; // eax
  int v13; // eax
  _BYTE v14[2]; // [esp-2h] [ebp-1Ch] BYREF
  unsigned __int8 v15; // [esp+0h] [ebp-1Ah]
  int v16; // [esp+6h] [ebp-14h]
  char v17; // [esp+Ah] [ebp-10h]
  unsigned __int8 v18[11]; // [esp+Bh] [ebp-Fh] BYREF
  int n5_1; // [esp+16h] [ebp-4h]

  sub_3702F(a1, a2, n5, a4, 68);
  n5_1 = n5;
  v16 = unk_5274E;
  v17 = unk_52752;
  sub_4E381();
  n8 = 80 * a5;
  v6 = sub_1956B(*(unsigned __int8 *)(80 * a5 + n8_0 + 7), 80 * a5, n5, a4, *(unsigned __int8 *)(80 * a5 + n8_0 + 7));
  if ( sub_1B8A6(v6, 80 * a5, n5, a4, a5) == 8 )
  {
    sub_15F84(v18, 8, n8, a4, n5, arg0, 480, 696099, 320, 205, 76, 74, 19, 1);
    v8 = sub_16559(v7, n8, n5, a4, 0);
    sub_16C57(v8, n8, n5, a4, 0);
    return sub_196CB(v9, n8, n5, a4);
  }
  else
  {
    sub_12E38((__int32)v14, n8, n5, a4, n9_0, n34_0, (int)v14);
    LOBYTE(n5) = v15;
    dword_53AD9 = *((unsigned __int8 *)&v16 + v15) + 181;
    sub_15F84(v18, dword_53AD9, n8, a4, n5, arg0, 422, 696099, 320, 205, 76, 74, 19, 1);
    v12 = sub_16559(v11, n8, n5, a4, 0);
    sub_16C57(v12, n8, n5, a4, 0);
    v13 = sub_1BB8C(
            *((unsigned __int8 *)&v16 + (unsigned __int8)n5),
            n8,
            n5,
            a4,
            a5,
            *((_BYTE *)&v16 + (unsigned __int8)n5));
    sub_196CB(v13, n8, n5, a4);
    LOBYTE(n5) = 0;
    while ( (unsigned __int8)n5 < 5u )
    {
      n8 = n8_1;
      *(_BYTE *)(n8_1 + (unsigned __int8)n5) = 1;
      LOBYTE(n5) = n5 + 1;
    }
    return sub_12263((unsigned __int8)n5, n8, n5, a4);
  }
}
