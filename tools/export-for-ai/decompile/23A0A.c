/*
 * func-name: sub_23A0A
 * func-address: 0x23a0a
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x1366a, 0x15f84, 0x233c6, 0x34894, 0x3702f
 */

void __fastcall sub_23A0A(__int32 a1, int a2, int n4, int a4)
{
  int n8; // ebx
  unsigned __int32 n0x140; // eax
  __int32 v6; // eax
  int v7; // eax
  __int32 v8; // eax
  _BYTE dst__1[16]; // [esp+0h] [ebp-34h] BYREF
  unsigned __int8 dst_[16]; // [esp+10h] [ebp-24h] BYREF
  unsigned __int8 n4_1; // [esp+20h] [ebp-14h]
  unsigned __int8 n0x140_1; // [esp+24h] [ebp-10h]
  int n4_2; // [esp+30h] [ebp-4h]

  sub_3702F(a1, a2, n4, a4, 100);
  n4_2 = n4;
  n0x140_1 = 0;
  qmemcpy(dst_, &src__25, sizeof(dst_));
  qmemcpy(dst__1, &src__26, sizeof(dst__1));
  n4_1 = 0;
  sub_233C6((__int32)dst_, a2, n4, 0, (int)dst_, (int)dst__1, 0, 0, 15, 65, 28, 30, 2, 22, 25);
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    if ( sub_34894(n8 + 66) )
      ++n4_1;
  }
  if ( n4_1 > 4u )
    n0x140_1 = 1;
  sub_11506(n4_1, a2, n8, 0);
  if ( n999 > 25
    || (n0x140 = n0x140_1, n0x140_1 == 1)
    || (n0x140 = *(unsigned __int16 *)(dword_53A45 + 66), n0x140 < 0x140) )
  {
    sub_15F84(dst_, n0x140, a2, 0, n8, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    n6_5 = 0;
    v7 = sub_1366A(v6, a2, n8, 0, 49);
    sub_15F84(dst_, v7, a2, 0, n8, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  }
  else
  {
    sub_15F84(dst_, n0x140, a2, 0, n8, arg0_0, 4, 655360, 320, 205, 76, 74, 19, 1);
    sub_112A5(v8, a2, n8, 0, 0x12u);
  }
  ++n17;
}
