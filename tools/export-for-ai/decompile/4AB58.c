/*
 * func-name: sub_4AB58
 * func-address: 0x4ab58
 * callers: 0x4a104
 * callees: 0x4bdd7, 0x4c117
 */

int __usercall sub_4AB58@<eax>(
        _WORD *a1@<ebp>,
        int a2@<edi>,
        _WORD *a3@<esi>,
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
  int v18; // eax
  _DWORD *v19; // ebx
  int v21; // [esp-Ch] [ebp-Ch]
  int v22; // [esp-8h] [ebp-8h]
  int v23; // [esp-4h] [ebp-4h]

  v23 = *(_DWORD *)((char *)a1 + a2 + 28);
  v22 = *(_DWORD *)((char *)a1 + a2 + 32);
  v21 = *(_DWORD *)((char *)a1 + a2 + 34);
  sub_4C117((char *)a1 + a2 + 28, *a1 & 0xC00);
  v18 = sub_4BDD7((char *)a1 + a2 + 28);
  if ( (__int16)v18 != v18 )
    LOWORD(v18) = 0x8000;
  *a3 = v18;
  v19 = (_DWORD *)((char *)a1 + a2 + 28);
  *(_DWORD *)((char *)v19 + 6) = v21;
  v19[1] = v22;
  *v19 = v23;
  return sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}
