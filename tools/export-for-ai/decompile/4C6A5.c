/*
 * func-name: sub_4C6A5
 * func-address: 0x4c6a5
 * callers: 0x4b018, 0x4c68c
 * callees: 0x4bc5c, 0x4bc86, 0x4c6e8
 */

int __usercall sub_4C6A5@<eax>(int a1@<eax>, int a2@<edx>, int a3@<esi>)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  sub_4C6E8();
  v3 = a1;
  sub_4BC5C(v3, (_DWORD *)a2);
  LOWORD(a3) = *(_WORD *)(a2 + 8);
  v4 = a3 << 16;
  LOWORD(v4) = 0x3FFF;
  result = sub_4BC86(0xB8AA3B295C17F0BDLL, *(_DWORD *)(a2 + 4), *(_DWORD *)a2, v4);
  *(_DWORD *)a2 = result;
  *(_DWORD *)(a2 + 4) = -1196803287;
  *(_WORD *)(a2 + 8) = 0x3FFF;
  return result;
}
