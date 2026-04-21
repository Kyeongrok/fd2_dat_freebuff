/*
 * func-name: sub_29620
 * func-address: 0x29620
 * callers: 0x29300, 0x29daa
 * callees: 0x111ba, 0x17aed, 0x26996, 0x27d33, 0x3702f
 */

int __usercall sub_29620@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5@<edi>)
{
  _BYTE *n16; // eax
  int result; // eax
  int n1832; // edi
  int v8; // [esp-Ch] [ebp-Ch]

  sub_3702F(a1, a2, a4, a3, 28);
  v8 = a5;
  n16 = (_BYTE *)n16_1;
  n3_5 = n16_1;
  while ( 1 )
  {
    a4 = sub_27D33((__int32)n16, a2, a4, a3);
    result = sub_26996(a4, a2, a4, a3);
    n1832 = ::n1832;
    if ( a4 == -1 )
      break;
    sub_17AED(result, a2, a4, a3, n3_3, v8);
    ::n1832 = n1832;
    n16 = sub_111BA((unsigned __int8)byte_52387[0], a2, a4, a3, (int)aDatoDat, DATO_DAT, (unsigned __int8)byte_52387[0]);// "DATO.DAT"
    DATO_DAT = (int)n16;
  }
  return result;
}
