/*
 * func-name: sub_17EEF
 * func-address: 0x17eef
 * callers: 0x17e0b, 0x1bffe, 0x1cff0
 * callees: 0x111ba, 0x168b6, 0x17fc0, 0x3702f, 0x4ebff
 */

int __fastcall sub_17EEF(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  n1832 = 3208;
  DATO_DAT = (int)sub_111BA(
                    *(unsigned __int8 *)(80 * a5 + dword_53A45 + 7),
                    a2,
                    80 * a5,
                    a4,
                    (int)aDatoDat,
                    DATO_DAT,
                    *(unsigned __int8 *)(80 * a5 + dword_53A45 + 7));// "DATO.DAT"
  v6 = DATO_DAT + *(unsigned __int8 *)DATO_DAT;
  sub_168B6(DATO_DAT, a2, v6, a4, a6, 320, 5, 7, 5, 5);
  sub_4EBFF(n1832 + a6, v6, 320);
  sub_4EBFF(a6 + 2332, *(_DWORD *)(dword_53A81 + 86) + dword_53A81, 320);
  sub_4EBFF(a6 + 30085, *(_DWORD *)(dword_53A81 + 90) + dword_53A81, 320);
  return sub_17FC0(a5, a6);
}
