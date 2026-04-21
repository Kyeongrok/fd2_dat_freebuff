/*
 * func-name: sub_3F565
 * func-address: 0x3f565
 * callers: 0x3f950
 * callees: 0x382d6, 0x382db, 0x382e9
 */

void __cdecl sub_3F565(int a1)
{
  if ( !dword_53604 )
  {
    dword_53604 = 1;
    dword_54354 = sub_382D6();
    sub_382E9(dword_54354, a1, 770, 0, 0);
    sub_382DB(dword_54354);
    dword_53604 = 0;
  }
}
