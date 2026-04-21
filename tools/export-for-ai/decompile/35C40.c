/*
 * func-name: sub_35C40
 * func-address: 0x35c40
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x35b78, 0x35f10, 0x3702f
 */

int __usercall sub_35C40@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int n2; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  int n8; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  n2 = *(unsigned __int8 *)(n8_1 + 16);
  if ( n2 == 1 )
  {
    sub_15F84(a5, 1, a2, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
    sub_35B78(v6, a2, a4, a3, 9, 44, 3u);
    sub_35B78(v7, a2, a4, a3, 0, 9, 4u);
    sub_35B78(v8, a2, a4, a3, 17, 9, 5u);
    n6_5 = 1;
  }
  else if ( n2 == 2 )
  {
    sub_15F84(a5, 2, a2, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    sub_35F10(16);
  }
  n8 = n8_1;
  ++*(_BYTE *)(n8_1 + 16);
  return n8;
}
