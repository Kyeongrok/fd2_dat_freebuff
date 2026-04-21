/*
 * func-name: sub_13488
 * func-address: 0x13488
 * callers: 0x14b78, 0x18890
 * callees: 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x3702f
 */

void __fastcall sub_13488(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int i; // ebx
  __int32 n2; // eax

  sub_3702F(a1, a2, a3, a4, 24);
  for ( i = 0; i < a7; ++i )
  {
    n2 = *(unsigned __int8 *)(i + a6);
    if ( *(_BYTE *)(i + a6) )
    {
      if ( n2 == 1 )
      {
        sub_1300D(1, a2, i, a4, a5);
      }
      else if ( n2 == 2 )
      {
        sub_13185(2, a2, i, a4, a5);
      }
      else
      {
        sub_13315(n2, a2, i, a4, a5);
      }
    }
    else
    {
      sub_12EAA(n2, a2, i, a4, a5);
    }
  }
  JUMPOUT(0x13180);
}
