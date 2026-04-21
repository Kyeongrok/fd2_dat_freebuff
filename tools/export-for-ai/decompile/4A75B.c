/*
 * func-name: sub_4A75B
 * func-address: 0x4a75b
 * callers: 0x4a104
 * callees: 0x4bdd7, 0x4c117
 */

int __usercall sub_4A75B@<eax>(
        _WORD *a1@<ebp>,
        int a2@<edi>,
        _DWORD *a3@<esi>,
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
  _DWORD *v18; // ebx
  int v20; // [esp-Ch] [ebp-Ch]
  int v21; // [esp-8h] [ebp-8h]
  int v22; // [esp-4h] [ebp-4h]

  v22 = *(_DWORD *)((char *)a1 + a2 + 28);
  v21 = *(_DWORD *)((char *)a1 + a2 + 32);
  v20 = *(_DWORD *)((char *)a1 + a2 + 34);
  sub_4C117((char *)a1 + a2 + 28, *a1 & 0xC00);
  *a3 = sub_4BDD7((char *)a1 + a2 + 28);
  v18 = (_DWORD *)((char *)a1 + a2 + 28);
  *(_DWORD *)((char *)v18 + 6) = v20;
  v18[1] = v21;
  *v18 = v22;
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
