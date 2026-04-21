/*
 * func-name: sub_4B018
 * func-address: 0x4b018
 * callers: 0x4a104
 * callees: 0x4c6a5, 0x4cb8e, 0x4cbc4
 */

int __usercall sub_4B018@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
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
  int result; // eax
  int v20; // eax
  int v21; // edi
  __int16 v22; // bx
  int v23; // eax
  int v24; // edi
  __int16 v25; // bx
  int v26; // esi
  __int16 v27; // bx
  __int16 v28; // bx

  switch ( a1 )
  {
    case 0:
      v18 = sub_4CBC4(a3 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v18);
      break;
    case 1:
      v20 = a3 + a2 + 28;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + a3);
      *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DAE + a3);
      v21 = *(unsigned __int16 *)((char *)&word_49D56 + a3);
      v22 = *(__int16 *)((char *)&word_49D5A + v21);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v22;
      v23 = sub_4C6A5(v20, v21 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v23);
      break;
    case 2:
      sub_4CB8E(a3 + a2 + 28);
      v24 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v25 = *(__int16 *)((char *)&word_49D5A + v24);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v25;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v24);
      v26 = v24 + a2 + 28;
      *(_DWORD *)v26 = 0;
      *(_DWORD *)(v26 + 4) = 0x80000000;
      *(_WORD *)(v26 + 8) = 0x3FFF;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 3:
      JUMPOUT(0x4B6A9);
    case 4:
      JUMPOUT(0x4B6F2);
    case 5:
      JUMPOUT(0x4B757);
    case 6:
      v27 = *(__int16 *)((char *)&word_49D5A + *(unsigned __int16 *)((char *)&word_49D58 + a3));
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v27;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 7:
      v28 = *(__int16 *)((char *)&word_49D5A + *(unsigned __int16 *)((char *)&word_49D56 + a3));
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v28;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
  }
  return result;
}
