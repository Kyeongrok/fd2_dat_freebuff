/*
 * func-name: sub_35A0D
 * func-address: 0x35a0d
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x111ba, 0x112a5, 0x12263, 0x15f84, 0x16559, 0x16c57, 0x17aa9, 0x1956b, 0x196cb, 0x1b8e7, 0x2aedb, 0x2eb9f, 0x3702f, 0x3776e
 */

void __usercall sub_35A0D(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>,
        int a6)
{
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  __int32 v14; // eax
  int v15; // eax
  _BYTE *arg0_2; // eax
  int arg0_1; // esi
  int arg4; // ebx
  __int32 v19; // eax
  __int32 n8; // eax
  __int32 v21; // eax
  int v22; // eax
  int v23; // eax

  sub_3702F(a1, a2, a4, a3, 48);
  if ( !*(_BYTE *)(n8_1 + 12) )
  {
    v6 = 80 * a6;
    v7 = sub_1956B(*(unsigned __int8 *)(80 * a6 + n8_0 + 7), a2, 80 * a6, a3, *(unsigned __int8 *)(80 * a6 + n8_0 + 7));
    v8 = sub_2AEDB(v7, a2, 80 * a6, a3, a6, 208);
    if ( v8 == -1 )
    {
      sub_15F84(a5, -1, a2, a3, v6, arg0_0, 2, 693535, 320, 205, 76, 74, 19, 1);
      v10 = sub_16559(v9, a2, v6, a3, 0);
      sub_16C57(v10, a2, v6, a3, 0);
      sub_196CB(v11, a2, v6, a3);
    }
    else
    {
      v12 = sub_1B8E7(v8, a2, v6, a3, a6, v8);
      sub_15F84(a5, v12, a2, a3, v6, arg0_0, 3, 693535, 320, 205, 76, 74, 19, 1);
      sub_16C57(v13, a2, v6, a3, 0);
      v15 = sub_196CB(v14, a2, v6, a3);
      arg0_2 = sub_111BA(v15, a2, v6, a3, (int)aFdotherDat, 0, 45);// "FDOTHER.DAT"
      arg0_1 = (int)arg0_2;
      for ( arg4 = 0; arg4 < 59; ++arg4 )
      {
        LOBYTE(v19) = sub_2EB9F((__int32)arg0_2, a2, arg4, a3, arg0_1, arg4, 703716, 320, -1);
        arg0_2 = (_BYTE *)sub_17AA9(v19, a2, arg4, a3, 2);
      }
      free(arg0_1);
      n8 = n8_1;
      *(_BYTE *)(n8_1 + 12) = 1;
      LOBYTE(v21) = sub_12263(n8, a2, arg4, a3);
      v22 = sub_10B4E(v21, a2, arg4, a3, 1);
      v23 = sub_112A5(v22, a2, arg4, a3, 0x1Fu);
      sub_15F84(a5, v23, a2, a3, arg4, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
    }
  }
}
