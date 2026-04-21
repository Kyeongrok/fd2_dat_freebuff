/*
 * func-name: sub_35FCF
 * func-address: 0x35fcf
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x3702f
 */

_BYTE *__usercall sub_35FCF@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        unsigned __int8 *a5@<edi>,
        int a6)
{
  _BYTE *result; // eax
  int n9; // edx
  int v8; // eax
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  result = (_BYTE *)(80 * a6 + n8_0);
  if ( result[6] && !*(_BYTE *)(n8_1 + 17) )
  {
    n9 = (unsigned __int8)result[8];
    if ( n9 == 9 )
    {
      sub_15F84(a5, (__int32)result, 9, a3, a4, arg0_0, 1, 655360, 320, 205, 76, 74, 19, 1);
      *(_BYTE *)(n8_1 + 17) = 1;
      *(_BYTE *)(dword_53A55 + 6) = n999 + 1;
      *(_BYTE *)(n8_1 + 16) = 4;
      result = (_BYTE *)dword_53A55;
      *(_BYTE *)(dword_53A55 + 3) = n999;
    }
    else
    {
      v8 = sub_1956B((unsigned __int8)result[7], n9, a4, a3, (unsigned __int8)result[7]);
      sub_15F84(a5, v8, n9, a3, a4, arg0_0, 0, 693535, 320, 205, 76, 74, 19, 1);
      v10 = sub_16559(v9, n9, a4, a3, 0);
      sub_16C57(v10, n9, a4, a3, 0);
      return (_BYTE *)sub_196CB(v11, n9, a4, a3);
    }
  }
  return result;
}
