/*
 * func-name: sub_1956B
 * func-address: 0x1956b
 * callers: 0x10010, 0x16f55, 0x190ac, 0x19df7, 0x1a866, 0x1aa1d, 0x1e292, 0x26152, 0x2670e, 0x279bc, 0x2872b, 0x28cbd, 0x28f65, 0x29300, 0x2968d, 0x2986f, 0x29daa, 0x2a43e, 0x2aa00, 0x2ac7d, 0x2af28, 0x2b439, 0x31bdf, 0x35854, 0x35a0d, 0x35fcf
 * callees: 0x111ba, 0x168b6, 0x1974c, 0x3702f, 0x3706e, 0x3771c, 0x4ec31
 */

int __fastcall sub_1956B(__int32 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rax
  int result; // eax
  int n5; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  dword_53C5B = malloc(64000);
  dword_53C5F = malloc(64000);
  v5 = malloc(64000);
  dword_53C63 = v5;
  memmove(dword_53C5F, 655360, 64000);
  LODWORD(v5) = memmove(dword_53C63, dword_53C5F, 64000);
  sub_168B6(v5, SHIDWORD(v5), a5, a4, dword_53C63, 320, 5, 112, 19, 5);
  switch ( a5 )
  {
    case 128:
      n1832 = 4283;
      break;
    case 129:
      n1832 = 1707;
      break;
    case 130:
      n1832 = 3939;
      break;
    case 131:
      n1832 = 1398;
      break;
    case 132:
      n1832 = 3644;
      break;
    default:
      n1832 = 36887;
      break;
  }
  DATO_DAT = (int)sub_111BA(v5, SHIDWORD(v5), a5, a4, (int)aDatoDat, DATO_DAT, a5);// "DATO.DAT"
  result = sub_4EC31(n1832 + dword_53C63, *(unsigned __int8 *)DATO_DAT + DATO_DAT, 320);
  for ( n5 = 5; n5 >= 0; --n5 )
    result = sub_1974C(13 * n5 + 112, dword_53C5B, dword_53C63);
  return result;
}
