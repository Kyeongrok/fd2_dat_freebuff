/*
 * func-name: sub_2670E
 * func-address: 0x2670e
 * callers: 0x26152
 * callees: 0x11d40, 0x15f84, 0x16559, 0x1956b, 0x197e5, 0x19953, 0x25977, 0x26996, 0x279bc, 0x2921a, 0x29300, 0x29daa, 0x2af28, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x37910, 0x4e809
 */

void __usercall sub_2670E(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        unsigned __int8 *a6@<edi>)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rax
  int n10; // ebx
  unsigned __int8 v12; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a4, a3, 60);
  v6 = sub_4E809(n17);
  LOBYTE(v6) = *(_BYTE *)v6;
  v12 = v6;
  LODWORD(v6) = sub_25977(v6, SHIDWORD(v6), a4, a3, -1, 0);
  if ( n5 == 2 )
  {
    LODWORD(v6) = sub_1956B(v6, SHIDWORD(v6), a4, a3, 75);
    sub_15F84(a6, v6, SHIDWORD(v6), a3, a4, arg0, 513, 693535, 320, 205, 76, 74, 19, 1);
    dword_53A51 = 1;
    LODWORD(v6) = sub_16559(v6, SHIDWORD(v6), a4, a3, 0);
    sub_19953(v6, SHIDWORD(v6), a4, a3);
    v7 = v6;
    sub_197E5(v6, SHIDWORD(v6), v6, a3);
    dword_53A51 = 0;
    sub_26996(v12, a5);
    if ( v7 == -1 || n3_3 )
      goto LABEL_23;
    if ( n17 < 27 && n16_1 > 16 || n17 > 26 && n16_1 > 20 )
    {
      dword_53A45 = dword_53BF7;
      v8 = sub_2AF28();
      dword_53A45 = 0;
      if ( !v8 )
LABEL_23:
        JUMPOUT(0x29867);
    }
  }
  dword_53A45 = dword_53BF7;
  v9 = malloc(64000);
  v10 = memmove(v9, 655360, 64000);
  for ( n10 = 1; n10 <= 10; ++n10 )
  {
    a3 = 6 * v12 + n5;
    sub_2921A(
      ((n10 * ((unsigned __int8)byte_52363[a3] - 150) / 10) << 7) + 20480,
      ((n10 * ((unsigned __int8)byte_52375[a3] - 100) / 10) << 7) + 12800,
      v9,
      128 - 9 * n10);
    v10 = memmove(655360, n655360_0, 64000);
    sub_11D40(4 * n10, SHIDWORD(v10), n10, a3, 0, 255, 4 * n10);
  }
  sub_11D40(v10, SHIDWORD(v10), n10, a3, 0, 255, 64);
  LODWORD(v10) = memset(655360, 0, 64000);
  if ( n5 )
  {
    if ( n5 == 4 )
    {
      sub_25977(v10, SHIDWORD(v10), n10, a3, 11, 0);
      LODWORD(v10) = sub_29DAA(v9);
    }
    else
    {
      if ( n5 == 2 )
      {
LABEL_22:
        free(v9);
        dword_53A45 = 0;
        goto LABEL_23;
      }
      if ( n5 == 3 )
        sub_25977(v10, SHIDWORD(v10), n10, a3, 15, 0);
      else
        sub_25977(v10, SHIDWORD(v10), n10, a3, 14, 0);
      LODWORD(v10) = sub_279BC(v9);
    }
  }
  else
  {
    sub_25977(v10, SHIDWORD(v10), n10, a3, 13, 0);
    LODWORD(v10) = sub_29300(v9);
  }
  sub_25977(v10, SHIDWORD(v10), n10, a3, 10, 0);
  goto LABEL_22;
}
