/*
 * func-name: sub_13536
 * func-address: 0x13536
 * callers: 0x1a30b, 0x233c6, 0x235f9, 0x23e74
 * callees: 0x3702f
 */

int __fastcall sub_13536(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int n6; // edx

  result = sub_3702F(a1, a2, a3, a4, 8);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    result = dword_53A45;
    *(_BYTE *)(80 * n6 + dword_53A45 + 5) &= ~0x80u;
  }
  return result;
}
