/*
 * func-name: sub_22253
 * func-address: 0x22253
 * callers: 0x2218a, 0x250cc, 0x2548c, 0x33f78
 * callees: 0x111ba, 0x11eee, 0x22046, 0x22470, 0x22547, 0x22656, 0x25a96, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a
 */

void __usercall sub_22253(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<edi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  int v21; // eax
  __int64 v22; // rax
  int v23; // esi
  int v24; // ebp
  _BYTE *v25; // ebx
  int v26; // edx
  __int32 v27; // eax
  int v28; // edi
  int v29; // edx
  int v30; // ebx
  int v31; // esi
  int n24_1; // edi
  int retaddr; // [esp+2Ch] [ebp+0h]
  int n192; // [esp+38h] [ebp+Ch]
  char *v35; // [esp+3Ch] [ebp+10h]
  unsigned __int8 n24; // [esp+40h] [ebp+14h]

  v21 = sub_3702F(a1, a2, a4, a3, 76);
  sub_111BA(v21, a2, a4, a3, (int)aFdotherDat, 0, 81);// "FDOTHER.DAT"
  v22 = malloc((char *)&loc_2567F + 1);
  v23 = v22;
  v24 = v22;
  sub_11EEE(v22 + 32904, SHIDWORD(v22), a4, a3, v22 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  v25 = (_BYTE *)(80 * a17 + dword_53A45);
  sub_22470(a20, a21, v23);
  v26 = dword_53AD1 + *(_DWORD *)(dword_53AD1 + 502);
  v35 = (char *)(24 * n10 + 12);
  n192 = 24 * n2_1 + 15;
  if ( a18 == a20 && a19 == a21 )
    a11 = 1;
  sub_25A96(a7, a11, 1);
  retaddr = sub_22547(a20, a21, v24, v35, n192, v26);
  *v25 = a18;
  v25[1] = a19;
  v27 = memmove(n655360_0, v24, (char *)&loc_2567F + 1);
  sub_22046(v27, v26, a3, (int)v25, v24, a5, v35, n192, 11, 0, 192, retaddr);
  v28 = 24 * (a20 - dword_53AA9);
  v29 = n655360_0 + 32904 + v28;
  v30 = v29 + 10944 * (a21 - dword_53AAD) - 2736;
  v31 = 7680 * (a21 - dword_53AAD) + v28 + 654724;
  n24 = 24;
  if ( a21 == dword_53AAD )
  {
    n24 = 18;
    v30 = v29 + 10944 * (a21 - dword_53AAD);
    v31 += 1920;
  }
  for ( n24_1 = 0; n24_1 < n24; ++n24_1 )
  {
    memmove(v31, v30, 24);
    v31 += 320;
    v30 += 456;
    j___delay(10);
  }
  sub_22656(a20, a21, v24, v35, n192);
  free(v24);
  free(a7);
  JUMPOUT(0x18888);
}
