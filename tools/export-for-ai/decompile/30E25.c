/*
 * func-name: sub_30E25
 * func-address: 0x30e25
 * callers: 0x2cf30, 0x2ff01
 * callees: 0x12e38, 0x1f183, 0x3702f
 */

int __fastcall sub_30E25(__int32 a1, int a2, int a3, int a4, int n30, unsigned __int8 *argC)
{
  int v6; // edi
  unsigned __int8 *v8; // eax
  int v9; // edx
  _BYTE v11[20]; // [esp-6h] [ebp-14h] BYREF

  sub_3702F(a1, a2, a3, a4, 36);
  v6 = (unsigned __int8)byte_52470[n17];
  while ( --n30 >= 0 )
  {
    v8 = (unsigned __int8 *)(80 * argC[n30] + n8_0);
    v9 = v8[1];
    sub_12E38(*v8, v9, a3, a4, *v8, v9, (int)v11);
    if ( !sub_1F183(argC[n30], v9, a3, a4, argC[n30]) || !v6 )
      v6 = v11[6];
  }
  return v6;
}
