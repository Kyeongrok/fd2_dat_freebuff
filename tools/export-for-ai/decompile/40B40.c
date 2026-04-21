/*
 * func-name: sub_40B40
 * func-address: 0x40b40
 * callers: 0x40cf0
 * callees: 0x382e9
 */

void __cdecl sub_40B40(int *a1, const void *src)
{
  int v2; // eax
  _WORD *v3; // ebx
  unsigned int n16; // eax
  int v5; // ebx
  _DWORD dst_[6]; // [esp+0h] [ebp-30h] BYREF
  _BYTE v7[6]; // [esp+18h] [ebp-18h] BYREF
  __int16 n3; // [esp+1Eh] [ebp-12h]

  qmemcpy(dst_, src, sizeof(dst_));
  v2 = *(_DWORD *)(*a1 + 12);
  if ( *(_WORD *)(v2 + 16) )
  {
    v3 = (_WORD *)((unsigned __int16)*(_DWORD *)(v2 + 12) + 16 * HIWORD(*(_DWORD *)(v2 + 12)));
    if ( SLOWORD(dst_[0]) < 0 )
      LOWORD(dst_[0]) = *v3;
    if ( dst_[0] < 0 )
      HIWORD(dst_[0]) = v3[1];
    if ( SLOWORD(dst_[1]) < 0 )
      LOWORD(dst_[1]) = v3[2];
    if ( dst_[1] < 0 )
      HIWORD(dst_[1]) = v3[3];
    for ( n16 = 0; n16 != 16; n16 += 4 )
    {
      if ( (int)dst_[n16 / 4 + 2] < 0 )
        dst_[n16 / 4 + 2] = *(_DWORD *)&v3[n16 / 2 + 4];
    }
  }
  v5 = dword_54330;
  qmemcpy((void *)(*(_DWORD *)(*a1 + 12) + 22), dst_, 0x18u);
  if ( v5 )
    n3 = 3;
  else
    n3 = 1;
  sub_382E9((int)v7, *a1, 772, (int)v7, 0);
}
