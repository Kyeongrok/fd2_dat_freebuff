/*
 * func-name: sub_49891
 * func-address: 0x49891
 * callers: 0x404c0, 0x406b0, 0x40c40, 0x40cf0
 * callees: 0x47d88, 0x47d99
 */

int __cdecl sub_49891(_DWORD *a1, int a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // ecx
  _BYTE *v5; // edi

  v2 = a1[7] & 0xF;
  if ( a1[6] == 2 || a1[6] == 3 )
    v2 |= 0x10u;
  if ( a1[6] == 1 || a1[6] == 3 )
    v2 |= 0x20u;
  if ( a1[25] )
    v2 |= 0x40u;
  dword_538A0 = v2;
  v3 = (int *)a1[20];
  v4 = a1[18];
  if ( (a1[7] & 0x20) != 0 )
  {
    dword_538A0 |= 8u;
    v5 = (_BYTE *)(a2 * (a1[4] >> 1) + a1[11]);
  }
  else
  {
    v5 = (_BYTE *)a1[a2 + 11];
  }
  return ((int (__usercall *)@<eax>(int@<ecx>, _BYTE *@<edi>, int *@<esi>))off_47988[dword_538A0])(v4, v5, v3);
}
