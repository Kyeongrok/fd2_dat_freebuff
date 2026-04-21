/*
 * func-name: sub_15DA2
 * func-address: 0x15da2
 * callers: 0x15b77
 * callees: 0x3702f
 */

int __fastcall sub_15DA2(__int32 a1, int a2, int a3, int a4, int a5, int a6, int n37, int n3)
{
  int v8; // ecx
  int i; // edx

  sub_3702F(a1, a2, a3, a4, 20);
  v8 = 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( !*(_BYTE *)(n37 + 80 * *(unsigned __int8 *)(i + a6) + dword_53A45) )
      v8 += n3;
  }
  return v8;
}
