/*
 * func-name: sub_1E529
 * func-address: 0x1e529
 * callers: 0x1e292, 0x2ac7d
 * callees: 0x15f84, 0x16e24, 0x3702f, 0x4e381, 0x4ebe3
 */

int __fastcall sub_1E529(__int32 a1, int a2, int a3, int a4, _WORD *a5, unsigned __int8 *a6, int arg4_1, int n3)
{
  int v8; // eax
  int n2; // edi
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  int v13; // et2

  sub_3702F(a1, a2, a3, a4, 56);
  v8 = (int)a6;
  n2 = n3;
  v10 = *a6;
  v11 = a6[1] - v10;
  if ( v11 )
  {
    v12 = sub_4EBE3(a6);
    v13 = v12 % v11;
    v8 = v12 / v11;
    a2 = v13;
    v11 = v13;
  }
  arg4 = v11 + v10;
  if ( v11 + v10 )
  {
    if ( n3 == 3 )
    {
      n2 = 2;
      sub_16E24(v8, a2, a3, a4);
    }
    sub_4E381();
    sub_15F84(
      (unsigned __int8 *)n2,
      6080 * n2 + 693535,
      a2,
      a4,
      a3,
      arg0,
      arg4_1,
      6080 * n2 + 693535,
      320,
      205,
      76,
      74,
      19,
      1);
    *a5 += arg4;
    ++n2;
  }
  return n2;
}
