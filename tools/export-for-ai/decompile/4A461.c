/*
 * func-name: sub_4A461
 * func-address: 0x4a461
 * callers: 0x4a104, 0x4a424
 * callees: 0x4b828, 0x4c052
 */

int __usercall sub_4A461@<eax>(int a1@<ebp>, int a2@<edi>, _DWORD *a3@<esi>)
{
  int v3; // eax

  sub_4C052(*a3, a1 + 108);
  v3 = sub_4B828(a2 + a1 + 28, a1 + 108, a2 + a1 + 28);
  return (*(int (__fastcall **)(int))(a1 + 118))(v3);
}
