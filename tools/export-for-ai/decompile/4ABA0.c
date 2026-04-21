/*
 * func-name: sub_4ABA0
 * func-address: 0x4aba0
 * callers: 0x4a104
 * callees: 0x4bdd7, 0x4c117
 */

void __usercall sub_4ABA0(_WORD *a1@<ebp>, int a2@<edi>, _WORD *a3@<esi>)
{
  int v3; // eax

  sub_4C117((char *)a1 + a2 + 28, *a1 & 0xC00);
  v3 = sub_4BDD7((char *)a1 + a2 + 28);
  if ( (__int16)v3 != v3 )
    LOWORD(v3) = 0x8000;
  *a3 = v3;
  JUMPOUT(0x4A2BD);
}
