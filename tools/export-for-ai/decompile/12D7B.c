/*
 * func-name: sub_12D7B
 * func-address: 0x12d7b
 * callers: 0x115b6, 0x117e7, 0x13a9f, 0x13e9c, 0x13fd4, 0x14121, 0x15055, 0x15311, 0x1548e, 0x1a30b, 0x1a866, 0x1bbdc, 0x1cff0, 0x2218a, 0x3231b, 0x33049, 0x3327d, 0x334d9, 0x3396a
 * callees: 0x12cea, 0x3702f
 */

void __fastcall sub_12D7B(__int32 a1, int a2, int a3, int a4, int a5)
{
  sub_3702F(a1, a2, a3, a4, 12);
  sub_12CEA(
    *(unsigned __int8 *)(80 * a5 + dword_53A45 + 1),
    *(unsigned __int8 *)(80 * a5 + dword_53A45),
    a3,
    a4,
    *(unsigned __int8 *)(80 * a5 + dword_53A45),
    *(unsigned __int8 *)(80 * a5 + dword_53A45 + 1));
}
