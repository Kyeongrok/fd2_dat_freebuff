/*
 * func-name: sub_41380
 * func-address: 0x41380
 * callers: 0x39fa9
 * callees: 0x38f2b, 0x3901e, 0x40cf0
 */

void __usercall sub_41380(int a1@<eax>, int a2, int a3, const void *src)
{
  int v4; // eax
  int v5; // esi

  sub_38F2B(a1, a2, a3);
  v5 = v4;
  if ( v4 )
  {
    if ( !sub_40CF0(v4, src) )
      sub_3901E(0, v5);
  }
}
