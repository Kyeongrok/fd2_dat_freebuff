/*
 * func-name: sub_439A0
 * func-address: 0x439a0
 * callers: 0x43ad0
 * callees: 0x382e9
 */

void __cdecl sub_439A0(int *a1, const void *src)
{
  int v2; // eax
  _WORD *v3; // ebx
  unsigned int n16; // eax
  int v5; // eax
  _DWORD dst_[9]; // [esp+0h] [ebp-24h] BYREF

  qmemcpy(dst_, src, 0x18u);
  v2 = *(_DWORD *)(*a1 + 12);
  if ( *(_WORD *)(v2 + 16) )
  {
    v3 = (_WORD *)(16 * HIWORD(*(_DWORD *)(v2 + 12)) + (unsigned __int16)*(_DWORD *)(v2 + 12));
    if ( SLOWORD(dst_[0]) < 1 )
      LOWORD(dst_[0]) = *v3;
    if ( SHIWORD(dst_[0]) < 1 )
      HIWORD(dst_[0]) = v3[1];
    if ( SLOWORD(dst_[1]) < 1 )
      LOWORD(dst_[1]) = v3[2];
    if ( SHIWORD(dst_[1]) < 1 )
      HIWORD(dst_[1]) = v3[3];
    for ( n16 = 0; n16 != 16; n16 += 4 )
    {
      if ( (int)dst_[n16 / 4 + 2] < 1 )
        dst_[n16 / 4 + 2] = *(_DWORD *)&v3[n16 / 2 + 4];
    }
  }
  v5 = *a1;
  qmemcpy((void *)(*(_DWORD *)(*a1 + 12) + 22), dst_, 0x18u);
  sub_382E9(v5, *a1, 772, 0, 0);
}
