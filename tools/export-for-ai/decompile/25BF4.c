/*
 * func-name: main
 * func-address: 0x25bf4
 * callers: 0x4609b
 * callees: 0x111ba, 0x117e7, 0x22e5c, 0x22ef6, 0x22f37, 0x230f2, 0x231bc, 0x231f9, 0x23296, 0x232e8, 0x234bb, 0x235bc, 0x235f9, 0x23790, 0x237d5, 0x2389f, 0x238dc, 0x239bd, 0x23a0a, 0x23b5f, 0x23cd5, 0x23e39, 0x23e74, 0x240fa, 0x244b6, 0x24754, 0x24c1e, 0x24df2, 0x24e80, 0x250cc, 0x25464, 0x2548c, 0x25757, 0x25977, 0x25ebb, 0x26152, 0x3231b, 0x32d18, 0x32e8c, 0x32fb2, 0x33049, 0x3314b, 0x33169, 0x33219, 0x3327d, 0x3332b, 0x33367, 0x333f5, 0x3346b, 0x3347c, 0x334d9, 0x335a0, 0x335aa, 0x335da, 0x33674, 0x3367e, 0x336a0, 0x338c4, 0x3396a, 0x33aae, 0x33af1, 0x33c9d, 0x33dba, 0x33e3c, 0x3702f, 0x3706e, 0x370f0, 0x37d3e, 0x37ed8, 0x3908b, 0x392d0, 0x3aa72, 0x3aca3, 0x3cc7d, 0x4e381, 0x4ebe3
 */

int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int32 v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  __int32 v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // et2
  int v14; // edi
  int i; // esi
  int v16; // eax
  int v17; // edi
  int v18; // eax

  sub_3702F(v3, v4, v6, v5, 28);
  sub_37D3E();
  sub_3AA72();
  dword_53ED8 = v7;
  if ( v7 )
  {
    n16_0 = 1;
    dword_53ED0 = sub_3ACA3(v7);
  }
  v8 = ((int (__cdecl *)())sub_3908B)();
  v9 = v8;
  dword_53EDC = v8;
  if ( v8 )
  {
    byte_53EF1 = 1;
    dword_53EE4 = sub_392D0(v8);
    v8 = sub_392D0(dword_53EDC);
    dword_53EE8 = v8;
  }
  FDOTHER_DAT__1 = (int)sub_111BA(v8, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__1, 31);// "FDOTHER.DAT"
  FDOTHER_DAT__2 = (int)sub_111BA(FDOTHER_DAT__1, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__2, 1);// "FDOTHER.DAT"
  n30_0 = (int)sub_111BA(FDOTHER_DAT__2, v9, v6, v5, (int)aFdotherDat, n30_0, 2);// "FDOTHER.DAT"
  FDOTHER_DAT__3 = (int)sub_111BA(n30_0, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__3, 3);// "FDOTHER.DAT"
  FDOTHER_DAT__4 = (int)sub_111BA(FDOTHER_DAT__3, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__4, 4);// "FDOTHER.DAT"
  FDOTHER_DAT__5 = (int)sub_111BA(FDOTHER_DAT__4, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__5, 5);// "FDOTHER.DAT"
  arg0 = (int)sub_111BA(FDOTHER_DAT__5, v9, v6, v5, (int)aFdtxtDat, arg0, 0);// "FDTXT.DAT"
  FDOTHER_DAT__6 = (int)sub_111BA(arg0, v9, v6, v5, (int)aFdotherDat, FDOTHER_DAT__6, 6);// "FDOTHER.DAT"
  dword_53AD5 = malloc(32);
  n655360_0 = malloc((char *)&loc_2567F + 1);
  dword_53BF7 = malloc(2560);
  n3 = 19;
  int386(16, &n3, &n3);
  dword_53C0F = MEMORY[0x46C];
  v10 = rand();
  v13 = v10 % 256;
  v11 = v10 / 256;
  v12 = v13;
  v14 = v13;
  for ( i = 0; i < v14; ++i )
    v11 = sub_4EBE3(v11);
  while ( 1 )
  {
    v16 = sub_25977(v11, v12, v6, v5, 18, 0);
    v11 = sub_25EBB(v16);
    v12 = v11;
    v17 = v11;
    if ( v11 )
    {
      if ( v11 == -1 )
        v17 = 0;
    }
    else
    {
      do
      {
        v11 = sub_117E7(i, v11, v12, v5, v6);
        i = v11;
        if ( n2_0 == 1 )
        {
          byte_51AAC = 0;
          sub_22E5C(v11, v12, v6, v5);
          byte_51AAC = 1;
          n2_0 = 0;
          i = 1;
        }
        else if ( n2_0 == 2 )
        {
          byte_51AAC = 0;
          sub_25977(v11, v12, v6, v5, -1, 1);
          ((void (__usercall *)(__int32@<eax>, int@<edx>, int@<ecx>, int@<ebx>, unsigned __int8 *@<edi>))funcs_25E23[n17])(
            n17,
            v12,
            v5,
            v6,
            (unsigned __int8 *)v17);
          i = sub_26152(v18, v12);
          if ( i )
          {
            v17 = 1;
          }
          else
          {
            ((void (__usercall *)(__int32@<eax>, int@<edx>, int@<ecx>, int@<ebx>, unsigned __int8 *@<edi>))funcs_25E3A[n17])(
              n17,
              v12,
              v5,
              v6,
              (unsigned __int8 *)v17);
            sub_25977((unsigned __int8)byte_51E63[n17], v12, v6, v5, (unsigned __int8)byte_51E63[n17], 0);
          }
          byte_51AAC = 1;
          n2_0 = 0;
          LOWORD(v11) = sub_4E381();
        }
      }
      while ( !i );
      if ( i == -1 )
        v17 = 1;
    }
    if ( v17 )
    {
      sub_37ED8(v11);
      n3 = 3;
      int386(16, &n3, &n3);
      JUMPOUT(0x16F04);
    }
  }
}
