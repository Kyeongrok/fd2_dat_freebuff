/*
 * func-name: sub_1C220
 * func-address: 0x1c220
 * callers: 0x22f37, 0x240fa
 * callees: 0x1bb8c, 0x3702f
 */

int __fastcall sub_1C220(__int32 a1, int a2, int a3, int a4, char a5)
{
  int n2; // eax
  int n6; // ebx

  n2 = sub_3702F(a1, a2, a3, a4, 20);
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    n2 = *(unsigned __int8 *)(dword_53A45 + 80 * n6 + 6);
    if ( n2 == 2 )
    {
      n2 = sub_1BB8C(2, dword_53A45, n6, a4, n6, a5);
      if ( n2 != -1 )
        break;
    }
  }
  return n2;
}
