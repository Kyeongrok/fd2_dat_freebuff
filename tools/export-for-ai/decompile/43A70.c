/*
 * func-name: sub_43A70
 * func-address: 0x43a70
 * callers: 0x43ad0
 * callees: 0x364fb, 0x38d77, 0x3b035
 */

int __usercall sub_43A70@<eax>(int a1@<eax>, int *a2)
{
  int v2; // edi
  int v3; // esi

  v2 = 0;
  if ( a2[7] > 0 )
  {
    v3 = 0;
    do
    {
      ++v2;
      sub_3B035(v3 + a2[6], v3 + a2[6]);
      v3 += 1748;
    }
    while ( v2 < a2[7] );
  }
  sub_38D77(a1, a2[3]);
  sub_364FB(a2[6], 1748 * a2[7]);
  return sub_364FB((int)a2, 464);
}
