/*
 * func-name: sub_35123
 * func-address: 0x35123
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x1b8a6, 0x1bb8c, 0x3702f
 */

int __usercall sub_35123@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>,
        int a6)
{
  int n8; // eax
  int v7; // eax

  n8 = sub_3702F(a1, a2, a4, a3, 40);
  if ( !a6 )
  {
    n8 = sub_1B8A6(n8, a2, a4, a3, 0);
    if ( n8 != 8 )
    {
      n8 = *(unsigned __int8 *)(n8_1 + 16);
      if ( !*(_BYTE *)(n8_1 + 16) )
      {
        v7 = sub_1BB8C(n8, a2, a4, a3, 0, 89);
        sub_15F84(a5, v7, a2, a3, a4, arg0_0, 11, 655360, 320, 205, 76, 74, 19, 1);
        n8 = n8_1;
        *(_BYTE *)(n8_1 + 16) = 1;
      }
    }
  }
  return n8;
}
