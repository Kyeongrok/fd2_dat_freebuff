/*
 * func-name: sub_40C40
 * func-address: 0x40c40
 * callers: 0x40cf0
 * callees: 0x364fb, 0x365ab, 0x382e9, 0x383f1, 0x38d77, 0x49891, 0x49923
 */

int __usercall sub_40C40@<eax>(int a1@<eax>, int *a2)
{
  int v2; // eax

  if ( a2[21] )
  {
    sub_382E9(a1, *a2, 1026, 0, 0);
    a2[21] = 0;
    sub_49923(a2);
    sub_49891(a2, 0);
    v2 = sub_49891(a2, 1);
    sub_383F1(v2, 10);
  }
  sub_38D77(a1, a2[3]);
  sub_365AB(a2[10], a2[8], a2[9]);
  sub_364FB(a2[23], 2196 * a2[24]);
  sub_364FB(a2[20], a2[19]);
  return sub_364FB((int)a2, 136);
}
