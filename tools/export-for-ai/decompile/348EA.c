/*
 * func-name: sub_348EA
 * func-address: 0x348ea
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x344f2, 0x3702f
 */

__int32 __usercall sub_348EA@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>)
{
  __int32 result; // eax
  int v6; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  result = *(unsigned __int8 *)(dword_53AD5 + 16);
  if ( !*(_BYTE *)(dword_53AD5 + 16) )
  {
    v6 = sub_344F2(result, a2, a4, a3, 24, 27, 7);
    sub_15F84(a5, v6, a2, a3, a4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
    result = dword_53AD5;
    *(_BYTE *)(dword_53AD5 + 16) = 1;
  }
  return result;
}
