/*
 * func-name: sub_1F42D
 * func-address: 0x1f42d
 * callers: 0x1f1cc, 0x1f30a
 * callees: 0x11eb0, 0x15e71, 0x15f0e, 0x3702f
 */

void __fastcall sub_1F42D(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebx

  v6 = sub_3702F(a1, a2, a3, a4, 36);
  v7 = n655360_0 + 32904;
  sub_15F0E(v6, a2, n655360_0 + 32904, a4, dword_53A81, n655360_0 + 32904, 456, 85 - a5, 82, a6);
  v9 = v8;
  sub_15F0E(n655360_0 + 32904, a2, v7, a4, dword_53A81, n655360_0 + 32904, 456, a5 + 165, 82, 81);
  v11 = v10;
  sub_11EB0(n655360_0 + 32904, a2, v10, a4, 656644, 320, n655360_0 + 32904, 456, 312, 192);
  sub_15E71(n655360_0 + 32904, a2, v11, a4, v9, n655360_0 + 32904, 456);
  sub_15E71(n655360_0 + 32904, a2, v11, a4, v11, n655360_0 + 32904, 456);
  JUMPOUT(0x184BA);
}
