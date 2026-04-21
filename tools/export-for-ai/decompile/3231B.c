/*
 * func-name: sub_3231B
 * func-address: 0x3231b
 * callers: 0x15311, 0x1cff0, 0x25bf4, 0x25ebb
 * callees: 0x10b4e, 0x112a5, 0x11cac, 0x12d7b, 0x13185, 0x134e4, 0x135dd, 0x1366a, 0x15f84, 0x1f525, 0x205da, 0x25977, 0x32975, 0x32999, 0x3702f, 0x3790a
 */

void __usercall sub_3231B(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, char a4@<bl>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  unsigned __int8 n2; // bl
  unsigned __int8 n2_1; // bl
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int32 v17; // eax
  int v18; // eax
  __int32 v19; // eax
  int v20; // eax
  __int32 v21; // eax
  int v22; // eax
  __int32 v23; // eax
  int v24; // eax
  __int32 v25; // eax
  __int32 v26; // eax
  int v27; // eax
  int v28; // eax
  __int32 v29; // eax
  int v30; // eax
  __int32 v31; // eax
  int v32; // eax
  __int32 v33; // eax
  int v34; // eax
  __int32 v35; // eax
  __int32 v36; // eax
  int v37; // eax
  __int32 v38; // eax
  int v39; // eax
  __int32 v40; // eax
  int v41; // eax
  __int32 v42; // eax
  int v43; // eax
  __int32 v44; // eax
  int v45; // eax
  __int32 v46; // eax
  int v47; // eax
  __int32 v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  __int32 v55; // eax
  __int32 v56; // eax
  __int32 v57; // eax
  __int32 v58; // eax
  __int32 v59; // eax
  int v60; // eax
  __int32 v61; // eax
  int v62; // eax
  __int32 v63; // eax
  __int32 v64; // eax
  __int32 v65; // eax
  __int32 v66; // eax
  int v67; // eax

  v5 = sub_3702F(a1, a2, a4, a3, 44);
  n17 = 32;
  sub_205DA(v5, a2, a4, a3);
  sub_135DD(v6, a2, a4, a3, 3, 34);
  sub_1366A(v7, a2, a4, a3, 99);
  for ( n2 = 0; n2 < 0xFu; ++n2 )
    sub_13185(n2, a2, n2, a3, 2);
  sub_15F84(a5, n2, a2, a3, n2, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  for ( n2_1 = 0; n2_1 < 0xDu; ++n2_1 )
    sub_13185(n2_1, a2, n2_1, a3, 2);
  sub_15F84(a5, n2_1, a2, a3, n2_1, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v11 = sub_25977(v10, a2, n2_1, a3, -1, 0);
  n64 = 1;
  v12 = sub_1366A(v11, a2, n2_1, a3, 100);
  n64 = 0;
  sub_135DD(v12, a2, n2_1, a3, 0, 43);
  v14 = sub_25977(v13, a2, n2_1, a3, 11, 0);
  v15 = sub_1F525(v14, a2, n2_1, a3);
  v16 = sub_1366A(v15, a2, n2_1, a3, 101);
  sub_15F84(a5, v16, a2, a3, n2_1, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v18 = sub_1366A(v17, a2, n2_1, a3, 102);
  sub_15F84(a5, v18, a2, a3, n2_1, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v20 = sub_1366A(v19, a2, n2_1, a3, 103);
  sub_15F84(a5, v20, a2, a3, n2_1, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v22 = sub_1366A(v21, a2, n2_1, a3, 104);
  sub_15F84(a5, v22, a2, a3, n2_1, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  n64 = 1;
  n6_5 = 0;
  v24 = sub_1366A(v23, a2, n2_1, a3, 105);
  n64 = 0;
  n17 = 31;
  sub_205DA(v24, a2, n2_1, a3);
  n6_5 = 0;
  sub_135DD(v25, a2, n2_1, a3, 5, 42);
  v27 = sub_10B4E(v26, a2, n2_1, a3, 1);
  v28 = sub_1366A(v27, a2, n2_1, a3, 90);
  sub_15F84(a5, v28, a2, a3, n2_1, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v30 = sub_1366A(v29, a2, n2_1, a3, 91);
  sub_15F84(a5, v30, a2, a3, n2_1, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v32 = sub_1366A(v31, a2, n2_1, a3, 92);
  sub_15F84(a5, v32, a2, a3, n2_1, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v34 = sub_10B4E(v33, a2, n2_1, a3, 3);
  sub_135DD(v34, a2, n2_1, a3, 4, 41);
  sub_15F84(a5, v35, a2, a3, n2_1, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v37 = sub_1366A(v36, a2, n2_1, a3, 93);
  sub_15F84(a5, v37, a2, a3, n2_1, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v38 = sub_32975(2);
  v39 = sub_10B4E(v38, a2, n2_1, a3, 5);
  sub_15F84(a5, v39, a2, a3, n2_1, arg0_0, 5, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v41 = sub_1366A(v40, a2, n2_1, a3, 94);
  sub_15F84(a5, v41, a2, a3, n2_1, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v43 = sub_1366A(v42, a2, n2_1, a3, 95);
  sub_15F84(a5, v43, a2, a3, n2_1, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v45 = sub_1366A(v44, a2, n2_1, a3, 96);
  sub_15F84(a5, v45, a2, a3, n2_1, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v47 = sub_1366A(v46, a2, n2_1, a3, 97);
  sub_15F84(a5, v47, a2, a3, n2_1, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
  v49 = sub_25977(v48, a2, n2_1, a3, -1, 0);
  n6_5 = 0;
  n64 = 1;
  v50 = sub_1366A(v49, a2, n2_1, a3, 98);
  n64 = 0;
  n17 = 0;
  v51 = sub_112A5(v50, a2, n2_1, a3, 0);
  v52 = sub_112A5(v51, a2, n2_1, a3, 9u);
  v53 = sub_112A5(v52, a2, n2_1, a3, 4u);
  v54 = sub_112A5(v53, a2, n2_1, a3, 0x1Eu);
  sub_205DA(v54, a2, n2_1, a3);
  n6_5 = 0;
  sub_135DD(v55, a2, n2_1, a3, 4, 12);
  sub_1366A(v56, a2, n2_1, a3, 0);
  v57 = j___delay(200);
  sub_15F84(a5, v57, a2, a3, n2_1, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v58 = j___delay(200);
  sub_135DD(v58, a2, n2_1, a3, 0, 0);
  v59 = sub_32999(1);
  v60 = sub_1366A(v59, a2, n2_1, a3, 1);
  sub_135DD(v60, a2, n2_1, a3, 0, 15);
  v61 = sub_32999(2);
  v62 = sub_1366A(v61, a2, n2_1, a3, 2);
  sub_15F84(a5, v62, a2, a3, n2_1, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v63 = j___delay(200);
  sub_1366A(v63, a2, n2_1, a3, 5);
  v64 = sub_32975(9);
  sub_11CAC(v64, a2, n2_1, a3, 0);
  v65 = j___delay(100);
  sub_15F84(a5, v65, a2, a3, n2_1, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  v67 = sub_134E4(v66, a2, n2_1, a3);
  sub_12D7B(v67, a2, n2_1, a3, 0);
  n6_6 = 0;
}
