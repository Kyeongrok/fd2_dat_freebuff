/*
 * func-name: sub_24E80
 * func-address: 0x24e80
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x11506, 0x1366a, 0x15f84, 0x233c6, 0x3702f
 */

void __fastcall sub_24E80(__int32 a1, int a2, int n31, int a4)
{
  int n16; // edx
  _BYTE *v5; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  _BYTE dst__2[16]; // [esp+0h] [ebp-3Ch] BYREF
  unsigned __int8 dst__1[16]; // [esp+10h] [ebp-2Ch] BYREF
  _BYTE dst_[24]; // [esp+20h] [ebp-1Ch] BYREF
  int n31_1; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, n31, a4, 108);
  n31_1 = n31;
  qmemcpy(dst_, &src__38, 0x10u);
  qmemcpy(dst__1, &src__39, sizeof(dst__1));
  qmemcpy(dst__2, &src__40, sizeof(dst__2));
  for ( n16 = 16; n16 < n6_0; ++n16 )
  {
    v5 = (_BYTE *)(dword_53A45 + 80 * n16);
    n31 = (unsigned __int8)v5[7];
    if ( n31 == 31 )
    {
      *v5 = 16;
      v5[1] = 6;
    }
  }
  sub_233C6((__int32)dst_, n16, n31, 0, (int)dst_, (int)dst__1, (unsigned int)dst__2, 0, 15, 0, 0, 0, 0, 9, 5);
  sub_15F84(
    dst__1,
    *(unsigned __int8 *)(dword_53AD5 + 12) + 5,
    n16,
    0,
    n31,
    arg0_0,
    *(unsigned __int8 *)(dword_53AD5 + 12) + 5,
    655360,
    320,
    205,
    76,
    74,
    19,
    1);
  n6_5 = 0;
  v7 = sub_1366A(v6, n16, n31, 0, 77);
  sub_15F84(dst__1, v7, n16, 0, n31, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  sub_1366A(v8, n16, n31, 0, 78);
  sub_15F84(
    dst__1,
    *(unsigned __int8 *)(dword_53AD5 + 12) + 8,
    n16,
    0,
    n31,
    arg0_0,
    *(unsigned __int8 *)(dword_53AD5 + 12) + 8,
    655360,
    320,
    205,
    76,
    74,
    19,
    1);
  n6_5 = 0;
  v10 = sub_1366A(v9, n16, n31, 0, 79);
  sub_15F84(dst__1, v10, n16, 0, n31, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v12 = sub_1366A(v11, n16, n31, 0, 80);
  sub_15F84(dst__1, v12, n16, 0, n31, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
  sub_11506(v13, n16, n31, 0);
  ++n17;
  JUMPOUT(0x15487);
}
