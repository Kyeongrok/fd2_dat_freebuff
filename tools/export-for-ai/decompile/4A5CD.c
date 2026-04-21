/*
 * func-name: sub_4A5CD
 * func-address: 0x4a5cd
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4A5CD@<eax>(
        int a1@<ebp>,
        __int16 *a2@<esi>,
        int a3,
        __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int16 a17)
{
  __int16 v17; // ax
  __int16 n512; // ax

  v17 = *a2;
  *(_WORD *)a1 = *a2;
  n512 = v17 & 0x300;
  if ( n512 == 768 )
  {
    *(_DWORD *)(a1 + 118) = sub_4A104;
  }
  else if ( n512 == 512 )
  {
    *(_DWORD *)(a1 + 118) = sub_4A274;
  }
  else
  {
    *(_DWORD *)(a1 + 118) = sub_4A238;
  }
  return sub_4A104(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
