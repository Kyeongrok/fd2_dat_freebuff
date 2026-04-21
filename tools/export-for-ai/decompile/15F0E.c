/*
 * func-name: sub_15F0E
 * func-address: 0x15f0e
 * callers: 0x10010, 0x1a30b, 0x1e611, 0x1e98c, 0x1eb05, 0x1f1cc, 0x1f30a, 0x1f42d
 * callees: 0x3702f, 0x3706e, 0x4ebab, 0x4ecbf
 */

void __fastcall sub_15F0E(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  __int16 *v10; // esi
  int v11; // ebx
  int v12; // ebp
  int v13; // eax
  int v14; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 48);
  v10 = (__int16 *)(*(_DWORD *)(a5 + 4 * a10 + 6) + a5);
  v14 = *v10;
  v11 = v10[1];
  v12 = a8 + a7 * a9;
  v13 = malloc(v11 * v14 + 8);
  sub_4ECBF(v13, v14, v11, a6, v12);
  sub_4EBAB((_BYTE *)(a6 + v12), v10, a7);
  JUMPOUT(0x15983);
}
