/*
 * func-name: sub_15F84
 * func-address: 0x15f84
 * callers: 0x10010, 0x15f84, 0x16f55, 0x17fc0, 0x184c0, 0x18c6d, 0x190ac, 0x19df7, 0x1a866, 0x1aa1d, 0x1b41d, 0x1ceed, 0x1e292, 0x1e529, 0x20765, 0x20872, 0x20957, 0x20b72, 0x20bf5, 0x22ef6, 0x22f37, 0x230f2, 0x231bc, 0x231f9, 0x232e8, 0x234bb, 0x235f9, 0x23790, 0x237d5, 0x2389f, 0x238dc, 0x239bd, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e39, 0x23e74, 0x240fa, 0x244b6, 0x24754, 0x24c1e, 0x24df2, 0x24e80, 0x250cc, 0x2548c, 0x25757, 0x26152, 0x265ec, 0x2670e, 0x272d0, 0x279bc, 0x2810b, 0x2825b, 0x2872b, 0x28cbd, 0x28f65, 0x29300, 0x2968d, 0x2986f, 0x29ab2, 0x29daa, 0x2a0c2, 0x2a43e, 0x2a694, 0x2aa00, 0x2ac7d, 0x2af28, 0x2b439, 0x31bdf, 0x31c49, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x33169, 0x33219, 0x3327d, 0x33367, 0x334d9, 0x335da, 0x336a0, 0x338c4, 0x3396a, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x34531, 0x3460b, 0x34738, 0x34778, 0x34818, 0x348ea, 0x34a1e, 0x34a6c, 0x34b2f, 0x34b9a, 0x34c7a, 0x34d92, 0x34dd0, 0x34f38, 0x34f74, 0x35022, 0x35123, 0x35191, 0x351e6, 0x35258, 0x352ca, 0x35346, 0x35422, 0x35468, 0x35677, 0x35730, 0x357dd, 0x35854, 0x35a0d, 0x35c40, 0x35d1e, 0x35d9e, 0x35e5b, 0x35ec1, 0x35fcf, 0x360b6, 0x362e8, 0x363de
 * callees: 0x10620, 0x111ba, 0x12c60, 0x15f84, 0x164e8, 0x16559, 0x165ac, 0x16b43, 0x16c57, 0x16e24, 0x3702f, 0x37b29, 0x37b55, 0x4ebff, 0x4ec31, 0x4ed7a
 */

void __usercall sub_15F84(
        unsigned __int8 *a1@<edi>,
        __int32 a2@<eax>,
        int a3@<edx>,
        int a4@<ecx>,
        int a5@<ebx>,
        int arg0,
        int arg4,
        int n658255,
        int argC,
        int arg10,
        int arg14,
        int arg18,
        int arg1C,
        int arg20)
{
  int n658255_1; // ebp
  __int16 *v15; // esi
  int v16; // edx
  int n658255_2; // eax
  __int32 v18; // eax
  int n39; // ebp
  int v20; // eax
  int *v21; // eax
  int v22; // eax
  unsigned __int8 *v23; // edi
  int *v24; // eax
  __int32 v25; // eax
  unsigned __int8 *v26; // edi
  int v27; // ebp
  __int32 v28; // eax
  unsigned __int8 *v29; // edi
  int v30; // ebp
  _BYTE v31[12]; // [esp+0h] [ebp-34h] BYREF
  __int16 *v32; // [esp+Ch] [ebp-28h]
  int i; // [esp+10h] [ebp-24h]
  int n2; // [esp+14h] [ebp-20h]
  int *v35; // [esp+18h] [ebp-1Ch]
  int n3; // [esp+1Ch] [ebp-18h]
  unsigned __int8 v37; // [esp+20h] [ebp-14h]
  unsigned __int8 *v38; // [esp+28h] [ebp-Ch]
  int v39; // [esp+30h] [ebp-4h]

  sub_3702F(a2, a3, a5, a4, 92);
  v39 = a5;
  v38 = a1;
  n3 = 0;
  v35 = 0;
  n2 = 0;
  n658255_1 = n658255;
  v15 = (__int16 *)(*(__int16 *)(arg0 + 2 * arg4) + arg0);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = *v15;
            if ( v18 == -1 )
            {
              if ( v35 )
              {
                sub_16559(0);
                sub_16C57(0);
                sub_16B43(v35, n2);
                n1832 = 0;
              }
              JUMPOUT(0x15309);
            }
            if ( v18 == -2 )
            {
              if ( (n1832 == 1832 || n1832 == 36887) && n3 == 3 )
              {
                sub_16E24();
                --n3;
              }
              n658255_1 = ++n3 * arg1C * argC + n658255;
              goto LABEL_50;
            }
            if ( v18 != -3 )
              break;
            if ( (n1832 == 1832 || n1832 == 36887) && n3 == 3 )
            {
              sub_16E24();
              --n3;
            }
            n658255_1 = ++n3 * arg1C * argC + n658255;
            ++v15;
            if ( n1832 == 1832 || n1832 == 36887 )
              sub_16559(0);
            sub_16C57(1);
            arg20 = 1;
          }
          v16 = (int)(v15 + 1);
          v32 = v15 + 1;
          if ( v18 == -4 )
          {
            sub_15F84(a1, dword_53A7D, dword_53AD9, n658255_1, argC, 205, 76, 74, 19, 1);
            goto LABEL_13;
          }
          if ( v18 != -5 )
            break;
          sub_15F84(a1, dword_53A7D, dword_53ADD, n658255_1, argC, 205, 76, 74, 19, 1);
LABEL_13:
          n658255_1 = n658255_2;
          v15 = v32;
        }
        if ( v18 != -6 )
          break;
        sprintf(v31, "%d", dword_53AE1);
        v37 = strlen(v31);
        for ( i = 0; v37 > i; ++i )
        {
          sub_4ED7A(dword_53A75, (unsigned __int8)v31[i] - 48, n658255_1, argC, arg10, arg14, arg18);
          if ( sub_10620() )
            arg20 = 0;
          if ( arg20 )
            sub_164E8();
          n658255_1 += 16;
        }
LABEL_50:
        ++v15;
      }
      if ( v18 == -17 )
      {
        if ( v35 )
        {
          sub_16559(0);
          sub_16C57(0);
          v18 = sub_16B43(v35, n2);
        }
        n1832 = 1832;
        n39 = (unsigned __int16)v15[1];
        v20 = sub_12C60(v18, v16, a5, a4, n39);
        if ( v20 == -1 )
          n2 = 0;
        else
          n2 = 2;
        if ( n39 != 39 )
        {
          a1 = (unsigned __int8 *)dword_53C1B;
          n39 = *(unsigned __int8 *)(dword_53C1B + 7);
        }
        DATO_DAT = (int)sub_111BA(v20, v16, a5, a4, (int)aDatoDat, DATO_DAT, n39);// "DATO.DAT"
        v21 = sub_165AC(*a1, v16, a5, a4, *a1, a1[1], n2);
LABEL_33:
        v35 = v21;
        a1 = (unsigned __int8 *)(*(unsigned __int8 *)DATO_DAT + DATO_DAT);
        sub_4EBFF(n1832 + 655360, a1, 320);
        arg20 = 1;
        n3 = 0;
        n658255 = 658255;
        n658255_1 = 658255;
        goto LABEL_42;
      }
      if ( v18 != -18 )
        break;
      if ( v35 )
      {
        sub_16559(0);
        sub_16C57(0);
        v18 = sub_16B43(v35, n2);
      }
      n1832 = 36887;
      v22 = sub_12C60(v18, v16, a5, a4, (unsigned __int16)v15[1]);
      if ( v22 == -1 )
        n2 = 0;
      else
        n2 = 112;
      v23 = (unsigned __int8 *)dword_53C1B;
      DATO_DAT = (int)sub_111BA(v22, v16, a5, a4, (int)aDatoDat, DATO_DAT, *(unsigned __int8 *)(dword_53C1B + 7));// "DATO.DAT"
      v24 = sub_165AC(*v23, v16, a5, a4, *v23, v23[1], n2);
LABEL_41:
      v35 = v24;
      a1 = (unsigned __int8 *)(*(unsigned __int8 *)DATO_DAT + DATO_DAT);
      sub_4EC31(n1832 + 655360, a1, 320);
      arg20 = 1;
      n3 = 0;
      n658255 = 693535;
      n658255_1 = 693535;
LABEL_42:
      v15 += 2;
    }
    if ( v18 == -19 )
    {
      if ( v35 )
      {
        sub_16559(0);
        sub_16C57(0);
        sub_16B43(v35, n2);
      }
      n1832 = 1832;
      v25 = 80 * (unsigned __int16)v15[1];
      v26 = (unsigned __int8 *)(v25 + dword_53A45);
      v27 = *(unsigned __int8 *)(v25 + dword_53A45 + 7);
      n2 = 2;
      DATO_DAT = (int)sub_111BA(v25, v16, a5, a4, (int)aDatoDat, DATO_DAT, v27);// "DATO.DAT"
      v21 = sub_165AC(*v26, v16, a5, a4, *v26, v26[1], 2);
      goto LABEL_33;
    }
    if ( v18 == -20 )
    {
      if ( v35 )
      {
        sub_16559(0);
        sub_16C57(0);
        sub_16B43(v35, n2);
      }
      n1832 = 36887;
      v28 = 80 * (unsigned __int16)v15[1];
      v29 = (unsigned __int8 *)(v28 + dword_53A45);
      v30 = *(unsigned __int8 *)(v28 + dword_53A45 + 7);
      n2 = 112;
      DATO_DAT = (int)sub_111BA(v28, v16, a5, a4, (int)aDatoDat, DATO_DAT, v30);// "DATO.DAT"
      v24 = sub_165AC(*v29, v16, a5, a4, *v29, v29[1], 112);
      goto LABEL_41;
    }
    sub_4ED7A(dword_53A75, v18, n658255_1, argC, arg10, arg14, arg18);
    n658255_1 += 16;
    v15 = v32;
    if ( sub_10620() )
      arg20 = 0;
    if ( arg20 )
      sub_164E8();
  }
}
