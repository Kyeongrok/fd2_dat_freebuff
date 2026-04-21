/*
 * func-name: sub_28EFE
 * func-address: 0x28efe
 * callers: 0x279bc
 * callees: 0x111ba, 0x1bffe, 0x26996, 0x27d33, 0x3702f
 */

void __fastcall sub_28EFE(__int32 a1, int a2, int n1832, int a4)
{
  int v4; // ebx
  int v5; // eax

  sub_3702F(a1, a2, n1832, a4, 20);
  while ( 1 )
  {
    n3_5 = n16_1;
    v4 = sub_27D33(n16_1, a2, n1832, a4);
    v5 = sub_26996(v4, a2, v4, a4);
    if ( v4 == -1 )
      break;
    n1832 = ::n1832;
    sub_1BFFE(v5, a2, ::n1832, a4, n3_3);
    ::n1832 = n1832;
    DATO_DAT = (int)sub_111BA(
                      (unsigned __int8)byte_52387[n5],
                      a2,
                      n1832,
                      a4,
                      (int)aDatoDat,
                      DATO_DAT,
                      (unsigned __int8)byte_52387[n5]);// "DATO.DAT"
  }
  JUMPOUT(0x28EFC);
}
