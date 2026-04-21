/*
 * func-name: sub_1D6C8
 * func-address: 0x1d6c8
 * callers: 0x1cff0
 * callees: 0x17aa9, 0x25a96, 0x3702f, 0x37ae5
 */

int __fastcall sub_1D6C8(__int32 a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int n4; // esi
  __int32 v7; // eax
  __int32 v8; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  result = sub_25A96(FDOTHER_DAT__0, 0, 1);
  for ( n4 = 0; n4 < 4; ++n4 )
  {
    outp(968, 0);
    outp(969, byte_51AAD[a5]);
    outp(969, byte_51AD1[a5]);
    v7 = outp(969, byte_51AF5[a5]);
    sub_17AA9(v7, a2, a5, a4, 1);
    outp(968, 0);
    outp(969, 0);
    outp(969, 0);
    v8 = outp(969, 0);
    result = sub_17AA9(v8, a2, a5, a4, 1);
  }
  return result;
}
