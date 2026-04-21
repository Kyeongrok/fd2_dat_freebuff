/*
 * func-name: sub_173E7
 * func-address: 0x173e7
 * callers: 0x18d8c, 0x1bbdc
 * callees: 0x3702f
 */

int __fastcall sub_173E7(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n3; // eax

  n3 = sub_3702F(a1, a2, a3, a4, 4);
  for ( n3_3 = 0; n3_3 < 4; ++n3_3 )
  {
    n3 = n3_3;
    if ( !*(_DWORD *)(a5 + 4 * n3_3) )
      break;
  }
  return n3;
}
