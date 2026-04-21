/*
 * func-name: sub_23CD5
 * func-address: 0x23cd5
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x1366a, 0x15f84, 0x233c6, 0x3702f
 */

// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_23CD5(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int n4@<ebx>,
        int n7_1@<esi>,
        int a6,
        int a7,
        int a8,
        int a9,
        ...)
{
  int v9; // eax
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 v17; // eax
  _BYTE dst__2[17]; // [esp+0h] [ebp-44h] BYREF
  unsigned __int8 v19[3]; // [esp+11h] [ebp-33h] BYREF
  _BYTE dst__1[20]; // [esp+14h] [ebp-30h] BYREF
  _BYTE dst_[24]; // [esp+28h] [ebp-1Ch] BYREF
  int n7; // [esp+40h] [ebp-4h]
  _UNKNOWN *n4_; // [esp+44h] [ebp+0h] BYREF
  int v24; // [esp+58h] [ebp+14h] BYREF
  va_list va; // [esp+58h] [ebp+14h]
  int v26; // [esp+5Ch] [ebp+18h]
  int v27; // [esp+60h] [ebp+1Ch]
  int v28; // [esp+64h] [ebp+20h]
  int v29; // [esp+68h] [ebp+24h]
  va_list va1; // [esp+6Ch] [ebp+28h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v24 = va_arg(va1, _DWORD);
  v26 = va_arg(va1, _DWORD);
  v27 = va_arg(va1, _DWORD);
  v28 = va_arg(va1, _DWORD);
  v29 = va_arg(va1, _DWORD);
  v9 = sub_3702F(a1, a2, n4, a3, 116);
  n7 = n7_1;
  qmemcpy(dst_, &src__29, 0x10u);
  dst_[16] = unk_521D3;
  qmemcpy(dst__1, &src__30, 0x10u);
  dst__1[16] = unk_521E4;
  qmemcpy(dst__2, &src__31, 0x10u);
  dst__2[16] = unk_521F5;
  sub_11506(v9, a2, n4, 0);
  sub_233C6((__int32)va1, a2, n4, 0, (int)va1, (int)va, (unsigned int)&n4_, 0, 16, 17, 25, 8, 1, 18, 4);
  sub_15F84(v19, v10, a2, 0, n4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v12 = sub_1366A(v11, a2, n4, 0, 56);
  sub_15F84(v19, v12, a2, 0, n4, arg0_0, 8, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v14 = sub_1366A(v13, a2, n4, 0, 57);
  sub_15F84(v19, v14, a2, 0, n4, arg0_0, 9, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  v16 = sub_1366A(v15, a2, n4, 0, 58);
  sub_15F84(v19, v16, a2, 0, n4, arg0_0, 10, 655360, 320, 205, 76, 74, 19, 1);
  sub_112A5(v17, a2, n4, 0, 0x15u);
  n7 = 7;
  JUMPOUT(0x24849);
}
