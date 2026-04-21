/*
 * func-name: sub_13FD4
 * func-address: 0x13fd4
 * callers: 0x13a9f, 0x18d8c
 * callees: 0x11eb0, 0x12d7b, 0x17aa9, 0x1da16, 0x25a96, 0x3702f
 */

int __fastcall sub_13FD4(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  __int32 v8; // eax
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi

  sub_3702F(a1, a2, a3, a4, 40);
  v5 = dword_53A45 + 80 * a5;
  v6 = *(unsigned __int16 *)(v5 + 64);
  v7 = *(unsigned __int16 *)(v5 + 66);
  if ( v6 == v7 )
    return 0;
  if ( *(_BYTE *)(v5 + 37) )
    return 0;
  v8 = *(unsigned __int8 *)(v5 + 38);
  if ( *(_BYTE *)(v5 + 38) )
    return 0;
  dword_51A83 = *(unsigned __int8 *)(v5 + 38);
  sub_12D7B(v8, a2, v5, a4, a5);
  sub_17AA9(v10, a2, v5, a4, 1);
  sub_25A96(dword_53EEC, 4, 1);
  sub_1DA16(dword_53A49 + 32904, 456, a5, 2, 253);
  v11 = sub_11EB0(dword_53A49 + 32904, a2, v5, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  sub_17AA9(v11, a2, v5, a4, 1);
  sub_1DA16(dword_53A49 + 32904, 456, a5, 0, 0);
  v12 = sub_11EB0(dword_53A49 + 32904, a2, v5, a4, 656644, 320, dword_53A49 + 32904, 456, 312, 192);
  sub_17AA9(v12, a2, v5, a4, 1);
  v13 = v7 / 5 + v6;
  if ( v13 > v7 )
    LOWORD(v13) = v7;
  *(_WORD *)(v5 + 64) = v13;
  dword_51A83 = 1;
  return 1;
}
