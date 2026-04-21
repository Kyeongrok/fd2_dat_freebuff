/*
 * func-name: sub_24754
 * func-address: 0x24754
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10652, 0x111ba, 0x112a5, 0x11506, 0x11df2, 0x135dd, 0x1366a, 0x15f84, 0x2189a, 0x233c6, 0x24b14, 0x24b4d, 0x33f78, 0x3702f, 0x3790a, 0x4df4c
 */

void __fastcall sub_24754(__int32 a1, int a2, int n4, int a4)
{
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  __int32 v12; // eax
  __int32 v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  int n64; // ebx
  int v18; // eax
  __int32 v19; // eax
  __int32 v20; // eax
  int v21; // eax
  __int32 v22; // eax
  int v23; // eax
  int v24; // eax
  int dst__2[4]; // [esp+0h] [ebp-48h] BYREF
  int v26; // [esp+10h] [ebp-38h] BYREF
  int dst__1[4]; // [esp+14h] [ebp-34h] BYREF
  char v28; // [esp+24h] [ebp-24h]
  _BYTE dst_[28]; // [esp+28h] [ebp-20h] BYREF
  int n4_1; // [esp+44h] [ebp-4h]

  sub_3702F(a1, a2, n4, a4, 120);
  n4_1 = n4;
  qmemcpy(dst_, &src__35, 0x10u);
  dst_[16] = unk_522B3;
  qmemcpy(dst__1, &src__36, sizeof(dst__1));
  v28 = unk_522C4;
  qmemcpy(dst__2, &src__37, sizeof(dst__2));
  LOBYTE(v26) = unk_522D5;
  sub_233C6((__int32)dst_, a2, n4, 0, (int)dst_, (int)dst__1, (unsigned int)dst__2, 0, 16, 17, 21, 21, 2, 14, 14);
  v4 = sub_24B14(100);
  if ( v4 == -1 )
  {
    sub_15F84((unsigned __int8 *)&v26 + 1, -1, a2, 0, n4, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v6 = sub_1366A(v7, a2, n4, 0, 71);
  }
  else
  {
    sub_15F84((unsigned __int8 *)&v26 + 1, v4, a2, 0, n4, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
    v6 = sub_112A5(v5, a2, n4, 0, 0x10u);
  }
  sub_15F84((unsigned __int8 *)&v26 + 1, v6, a2, 0, n4, arg0_0, 13, 655360, 320, 205, 76, 74, 19, 1);
  v9 = sub_112A5(v8, a2, n4, 0, 0x19u);
  sub_11506(v9, a2, n4, 0);
  ++n17;
  sub_15F84((unsigned __int8 *)&v26 + 1, v10, a2, 0, n4, arg0_0, 14, 655360, 320, 205, 76, 74, 19, 1);
  v11 = j___delay(400);
  sub_2189A(v11, a2, n4, 0, 1, 15, 10, dst__2[0], dst__2[1], dst__2[2], dst__2[3], v26, dst__1[0]);
  v12 = sub_24B4D(30);
  sub_15F84((unsigned __int8 *)&v26 + 1, v12, a2, 0, n4, arg0_0, 15, 655360, 320, 205, 76, 74, 19, 1);
  v13 = j___delay(400);
  sub_2189A(v13, a2, n4, 0, 1, 15, 10, dst__2[0], dst__2[1], dst__2[2], dst__2[3], v26, dst__1[0]);
  v14 = sub_24B4D(30);
  sub_15F84((unsigned __int8 *)&v26 + 1, v14, a2, 0, n4, arg0_0, 16, 655360, 320, 205, 76, 74, 19, 1);
  v15 = j___delay(400);
  sub_2189A(v15, a2, n4, 0, 1, 30, 16, dst__2[0], dst__2[1], dst__2[2], dst__2[3], v26, dst__1[0]);
  for ( n64 = 0; n64 < 64; n64 += 2 )
  {
    sub_11DF2(v16, a2, n64, 0, 0, 255, n64);
    v16 = j___delay(4);
  }
  dword_53A51 = (int)sub_111BA(v16, a2, n64, 0, (int)aFdfieldDat, dword_53A51, 69);// "FDFIELD.DAT"
  n7 = (int)sub_111BA(dword_53A51, a2, n64, 0, (int)aFdshapDat, n7, 46);// "FDSHAP.DAT"
  dword_53A69 = (int)sub_111BA(n7, a2, n64, 0, (int)aFdshapDat, dword_53A69, 47);// "FDSHAP.DAT"
  sub_4DF4C((unsigned __int8 *)dword_53A51);
  v18 = sub_10652();
  sub_135DD(v18, a2, n64, 0, 14, 29);
  sub_11DF2(v19, a2, n64, 0, 0, 255, 0);
  v21 = sub_1366A(v20, a2, n64, 0, 73);
  sub_135DD(v21, a2, n64, 0, 14, 14);
  v23 = sub_1366A(v22, a2, n64, 0, 73);
  v24 = sub_1366A(v23, a2, n64, 0, 73);
  sub_15F84((unsigned __int8 *)&v26 + 1, v24, a2, 0, n64, arg0_0, 17, 655360, 320, 205, 76, 74, 19, 1);
}
