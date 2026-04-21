/*
 * func-name: sub_239BD
 * func-address: 0x239bd
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x15f84, 0x33499, 0x3702f
 */

void __usercall sub_239BD(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  char v5; // al
  __int32 v6; // eax

  sub_3702F(a1, a2, a4, a3, 40);
  v5 = sub_33499(12);
  sub_15F84(
    a5,
    (unsigned __int8)((v5 ^ 1) + 12),
    a2,
    a3,
    a4,
    arg0_0,
    (unsigned __int8)((v5 ^ 1) + 12),
    655360,
    320,
    205,
    76,
    74,
    19,
    1);
  sub_112A5(v6, a2, a4, a3, 0xFu);
  JUMPOUT(0x237C8);
}
