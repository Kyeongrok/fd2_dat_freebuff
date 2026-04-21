/*
 * func-name: sub_214AD
 * func-address: 0x214ad
 * callers: 0x15311, 0x1cff0
 * callees: 0x10b4e, 0x1ca89, 0x2111a, 0x3702f
 */

void __usercall sub_214AD(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int n6,
        int n30,
        unsigned __int8 *a9)
{
  int v9; // eax
  int v10; // eax

  v9 = sub_3702F(a1, a2, a4, a3, 24);
  dword_53EC4 = 0;
  v10 = sub_1CA89(v9, a2, (int)a9, a3, n6, 9);
  sub_2111A(v10, a2, a3, (int)a9, a5, a6, n6, n30, a9, 9);
}
