/*
 * func-name: sub_45880
 * func-address: 0x45880
 * callers: 0x45a20
 * callees: 0x399c2, 0x39a38
 */

void __cdecl sub_45880(int a1, int a2)
{
  int *v2; // esi
  _DWORD *v3; // edi

  v2 = (int *)(a1 + 4 * a2);
  v3 = (_DWORD *)(a1 + 4 * v2[310]);
  sub_399C2(v3[197] * v3[165] / 127 * v2[374] / 127, v2[293], v3[197] * v3[165] / 127 * v2[374] / 127);
  sub_39A38(v3[181], v2[293], v3[181]);
}
