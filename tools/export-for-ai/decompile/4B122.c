/*
 * func-name: sub_4B122
 * func-address: 0x4b122
 * callers: 0x4a104
 * callees: 0x4c4bd, 0x4c68c, 0x4cb77, 0x4cb81, 0x4cd98
 */

int __usercall sub_4B122@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        __int16 a6,
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
        int a18,
        __int16 a19)
{
  char v19; // al
  __int16 v20; // dx
  int result; // eax
  int v22; // eax
  int v23; // edi
  __int16 v24; // bx
  int v25; // eax
  int v26; // eax
  int v27; // edi
  __int16 v28; // bx
  _DWORD *v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // [esp-Ch] [ebp-Ch]
  int v33; // [esp-8h] [ebp-8h]
  int v34; // [esp-4h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
      v19 = sub_4C4BD(a3 + a2 + 28, a4 + a2 + 28);
      v20 = *(_WORD *)(a2 + 4) & 0xB8FF;
      HIBYTE(v20) |= byte_49DFA[v19 & 7];
      *(_WORD *)(a2 + 4) = v20;
      result = (*(int (**)(void))(a2 + 118))();
      break;
    case 1:
      v22 = a3 + a2 + 28;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + a3);
      *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DAE + a3);
      v23 = *(unsigned __int16 *)((char *)&word_49D56 + a3);
      v24 = *(__int16 *)((char *)&word_49D5A + v23);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v24;
      v25 = sub_4C68C(v22, v23 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v25);
      break;
    case 2:
      v26 = sub_4CD98(a3 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v26);
      break;
    case 3:
      v34 = *(_DWORD *)(a3 + a2 + 28);
      v33 = *(_DWORD *)(a3 + a2 + 32);
      v32 = *(_DWORD *)(a3 + a2 + 34);
      sub_4CB77(a3 + a2 + 28);
      v27 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v28 = *(__int16 *)((char *)&word_49D5A + v27);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v28;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v27);
      v29 = (_DWORD *)(v27 + a2 + 28);
      *(_DWORD *)((char *)v29 + 6) = v32;
      v29[1] = v33;
      *v29 = v34;
      sub_4CB81(v29);
      result = sub_4A104(a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
      break;
    case 4:
      JUMPOUT(0x4B781);
    case 5:
      JUMPOUT(0x4B799);
    case 6:
      v30 = sub_4CB77(a3 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v30);
      break;
    case 7:
      v31 = sub_4CB81(a3 + a2 + 28);
      result = (*(int (__fastcall **)(int))(a2 + 118))(v31);
      break;
  }
  return result;
}
