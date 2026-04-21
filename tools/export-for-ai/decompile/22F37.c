/*
 * func-name: sub_22F37
 * func-address: 0x22f37
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x10b4e, 0x112a5, 0x11506, 0x135dd, 0x1366a, 0x15f84, 0x1c220, 0x3702f, 0x3790a
 */

void __usercall sub_22F37(__int32 a1@<eax>, int a2@<edx>, char a3@<cl>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  unsigned __int8 v5; // cl
  int n5; // edx
  int v7; // ebx
  __int32 v8; // eax
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  __int32 v16; // eax
  __int32 v17; // eax
  __int32 v18; // eax
  int v19; // eax

  sub_3702F(a1, a2, a4, a3, 44);
  v5 = 0;
  n5 = 5;
  v7 = dword_53A45;
  while ( n5 < 11 )
  {
    if ( (*(_BYTE *)(dword_53A45 + 80 * n5 + 5) & 1) != 0 )
      v5 = 1;
    ++n5;
  }
  if ( v5 )
  {
    sub_15F84(a5, v5, n5, v5, dword_53A45, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  }
  else
  {
    sub_15F84(a5, 0, n5, 0, dword_53A45, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
    v9 = sub_1C220(v8, n5, v7, 0, 198);
  }
  sub_135DD(v9, n5, v7, v5, 14, 2);
  sub_10B4E(v10, n5, v7, v5, 4);
  v11 = j___delay(100);
  v12 = sub_1366A(v11, n5, v7, v5, 14);
  sub_15F84(a5, v12, n5, v5, v7, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v13 = j___delay(200);
  v14 = sub_1366A(v13, n5, v7, v5, 15);
  sub_15F84(a5, v14, n5, v5, v7, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v15 = j___delay(200);
  sub_135DD(v15, n5, v7, v5, 14, 1);
  v16 = j___delay(200);
  sub_1366A(v16, n5, v7, v5, 16);
  v17 = j___delay(200);
  sub_15F84(a5, v17, n5, v5, v7, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  v19 = sub_112A5(v18, n5, v7, v5, 8u);
  sub_11506(v19, n5, v7, v5);
  n17 = 2;
}
