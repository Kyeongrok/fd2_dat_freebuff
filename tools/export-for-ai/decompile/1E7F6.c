/*
 * func-name: sub_1E7F6
 * func-address: 0x1e7f6
 * callers: 0x1548e, 0x1e611
 * callees: 0x1e739, 0x3702f
 */

int __fastcall sub_1E7F6(__int32 a1, int a2, int a3, int a4, int a5, int n456, int a7, _DWORD *a8)
{
  int result; // eax
  __int32 v9; // [esp-10h] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 20);
  result = dword_53A45 + 80 * a7;
  if ( *(_WORD *)(result + 64) )
  {
    v9 = *a8 + a5 + n456 * (a8[1] + 6) + 7;
    return sub_1E739(
             v9,
             69 * *(unsigned __int16 *)(result + 64) % *(unsigned __int16 *)(result + 66),
             (int)a8,
             *(unsigned __int16 *)(result + 66),
             v9,
             n456,
             69 * *(unsigned __int16 *)(result + 64) / *(unsigned __int16 *)(result + 66) + 1);
  }
  return result;
}
