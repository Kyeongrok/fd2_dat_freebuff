/*
 * func-name: sub_13565
 * func-address: 0x13565
 * callers: 0x117e7
 * callees: 0x1a30b, 0x3702f
 */

int __fastcall sub_13565(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int n6; // edx

  result = sub_3702F(a1, a2, a3, a4, 8);
  v5 = 1;
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    result = 80 * n6 + dword_53A45;
    if ( (*(_BYTE *)(result + 5) & 0x81) == 0 && *(_BYTE *)(result + 6) == 2 )
    {
      result = *(unsigned __int8 *)(result + 38);
      if ( !result )
        v5 = 0;
    }
  }
  if ( v5 == 1 )
  {
    byte_51AAC = 0;
    dword_51A83 = 0;
    result = sub_1A30B(result);
    dword_51A83 = 1;
    byte_51AAC = 1;
  }
  return result;
}
