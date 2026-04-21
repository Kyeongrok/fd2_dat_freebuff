/*
 * func-name: sub_4AD54
 * func-address: 0x4ad54
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4AD54@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        __int16 a5,
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
        int a17,
        __int16 a18)
{
  int v18; // ebx
  int v19; // esi
  __int16 v20; // ax

  v18 = a2 + a1 + 28;
  v19 = a3 + a1 + 28;
  *(_DWORD *)v19 = _InterlockedExchange((volatile __int32 *)v18, *(_DWORD *)v19);
  *(_DWORD *)(v19 + 4) = _InterlockedExchange((volatile __int32 *)(a2 + a1 + 32), *(_DWORD *)(v19 + 4));
  v20 = *(_WORD *)(a2 + a1 + 36);
  *(_WORD *)(v18 + 8) = *(_WORD *)(v19 + 8);
  *(_WORD *)(v19 + 8) = v20;
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
