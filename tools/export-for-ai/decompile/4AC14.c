/*
 * func-name: sub_4AC14
 * func-address: 0x4ac14
 * callers: 0x4a104
 * callees: 0x4bddc, 0x4c117
 */

void __usercall sub_4AC14(_WORD *a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  sub_4C117((char *)a1 + a2 + 28, *a1 & 0xC00);
  *a3 = sub_4BDDC((char *)a1 + a2 + 28);
  JUMPOUT(0x4A2BD);
}
