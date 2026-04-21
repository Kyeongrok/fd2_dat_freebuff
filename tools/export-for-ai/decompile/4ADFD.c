/*
 * func-name: sub_4ADFD
 * func-address: 0x4adfd
 * callers: 0x4a104
 * callees: none
 */

int __usercall sub_4ADFD@<eax>(
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
  int v18; // edi
  __int16 v19; // bx
  int v20; // esi
  int result; // eax
  int v22; // edi
  __int16 v23; // bx
  int v24; // esi
  int v25; // edi
  __int16 v26; // bx
  int v27; // esi
  int v28; // edi
  __int16 v29; // bx
  int v30; // esi
  int v31; // edi
  __int16 v32; // bx
  int v33; // esi
  int v34; // edi
  __int16 v35; // bx
  int v36; // esi
  int v37; // edi
  __int16 v38; // bx
  int v39; // esi

  switch ( a1 )
  {
    case 0:
      v18 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v19 = *(__int16 *)((char *)&word_49D5A + v18);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v19;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v18);
      v20 = v18 + a2 + 28;
      *(_DWORD *)v20 = 0;
      *(_DWORD *)(v20 + 4) = 0x80000000;
      *(_WORD *)(v20 + 8) = 0x3FFF;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 1:
      v22 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v23 = *(__int16 *)((char *)&word_49D5A + v22);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v23;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v22);
      v24 = v22 + a2 + 28;
      *(_DWORD *)v24 = -853832962;
      *(_DWORD *)(v24 + 4) = -728074165;
      *(_WORD *)(v24 + 8) = 0x4000;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 2:
      v25 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v26 = *(__int16 *)((char *)&word_49D5A + v25);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v26;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v25);
      v27 = v25 + a2 + 28;
      *(_DWORD *)v27 = 1545072828;
      *(_DWORD *)(v27 + 4) = -1196803287;
      *(_WORD *)(v27 + 8) = 0x3FFF;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 3:
      v28 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v29 = *(__int16 *)((char *)&word_49D5A + v28);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v29;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v28);
      v30 = v28 + a2 + 28;
      *(_DWORD *)v30 = 560513589;
      *(_DWORD *)(v30 + 4) = -922690910;
      *(_WORD *)(v30 + 8) = 0x4000;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 4:
      v31 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v32 = *(__int16 *)((char *)&word_49D5A + v31);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v32;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v31);
      v33 = v31 + a2 + 28;
      *(_DWORD *)v33 = -70256743;
      *(_DWORD *)(v33 + 4) = -1709139324;
      *(_WORD *)(v33 + 8) = 16381;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 5:
      v34 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v35 = *(__int16 *)((char *)&word_49D5A + v34);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v35;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v34);
      v36 = v34 + a2 + 28;
      *(_DWORD *)v36 = -774932052;
      *(_DWORD *)(v36 + 4) = -1317922825;
      *(_WORD *)(v36 + 8) = 16382;
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 6:
      v37 = *(unsigned __int16 *)((char *)&word_49D58 + a3);
      v38 = *(__int16 *)((char *)&word_49D5A + v37);
      *(_WORD *)(a2 + 4) &= 0xC7FFu;
      *(_WORD *)(a2 + 4) |= v38;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v37);
      v39 = v37 + a2 + 28;
      *(_DWORD *)v39 = 0;
      *(_DWORD *)(v39 + 4) = 0;
      *(_WORD *)(v39 + 8) = 0;
      *(_WORD *)(a2 + 8) &= *(__int16 *)((char *)&word_49DA6 + v37);
      *(_WORD *)(a2 + 8) |= *(__int16 *)((char *)&word_49DA8 + v37);
      result = sub_4A104(a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      break;
    case 7:
      JUMPOUT(0x4AC38);
  }
  return result;
}
