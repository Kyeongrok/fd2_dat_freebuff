/*
 * func-name: sub_45F99
 * func-address: 0x45f99
 * callers: none
 * callees: 0x364fb, 0x394b4, 0x3c11c, 0x3c209
 */

void __usercall sub_45F99(int a1@<eax>, int *a2)
{
  int i; // esi

  for ( i = 0; i < a2[309]; ++i )
    sub_394B4(i, a2[i + 293]);
  sub_3C11C(a1, *a2, a2[3]);
  sub_3C209(*a2, *a2, a2[4]);
  sub_364FB((int)a2, 1628);
  JUMPOUT(0x45E1A);
}
