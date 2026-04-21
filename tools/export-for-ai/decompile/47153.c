/*
 * func-name: sub_47153
 * func-address: 0x47153
 * callers: 0x3fea7
 * callees: 0x4726f, 0x47525, 0x4768d, 0x476c1
 */

int __cdecl sub_47153(_DWORD *a1)
{
  int v1; // ebx
  __int16 *v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int n25567; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ebx

  v1 = a1[4] % 12;
  v2 = &word_51944;
  v3 = a1[4] / 12 + a1[5];
  while ( v1 < 0 )
  {
    v1 += 12;
    --v3;
  }
  if ( v3 < 0 )
    return -1;
  if ( _leapyear(v3 + 1900) )
    v2 = &word_5195E;
  v5 = a1[3] + v2[v1] + 365 * v3 + ((v3 + 3) >> 2);
  n25567 = v5 - 1;
  if ( v3 )
    n25567 = v5 - 2;
  v7 = 60 * (a1[1] + 60 * a1[2]) + *a1;
  v8 = sub_47525(n25567, v7, 0, (int)a1);
  tzset(v8, a1, v7);
  v9 = dword_5384C + v7;
  if ( (int)a1[8] < 0 )
    _isindst(a1);
  if ( (int)a1[8] > 0 )
    v9 -= dword_53850;
  while ( v9 < 0 )
  {
    v9 += (int)&loc_15180;
    --n25567;
  }
  if ( n25567 < 25566 )
    return -1;
  if ( n25567 != 25566 )
    return 86400 * (n25567 - 25567) + v9;
  v4 = v9 - (_DWORD)&loc_15180;
  if ( dword_5384C <= 0 || v4 < 0 )
    return -1;
  return v4;
}
