/*
 * func-name: sub_2111A
 * func-address: 0x2111a
 * callers: 0x20c6f, 0x214ad, 0x2d80d
 * callees: 0x11cac, 0x1c4cc, 0x1c75e, 0x1cac7, 0x1df58, 0x1e0db, 0x1e1dc, 0x3702f
 */

void __usercall sub_2111A(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int n6,
        int n30,
        unsigned __int8 *a9,
        int n32)
{
  int v10; // eax
  int v11; // eax
  int n30_1; // esi
  int v13; // eax
  int v14; // eax

  v10 = sub_3702F(a1, a2, a4, a3, 36);
  sub_1C4CC(v10, a2, a4, a3, n6, n32, n30, (int)a9);
  v11 = sub_1CAC7(n6, n32, n30, a9, a5, a6);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    a4 = (int)&a9[n30_1];
    v13 = sub_1C75E(a9[n30_1], a2, (int)&a9[n30_1], a3, a9[n30_1], n32);
    if ( v13 )
    {
      a4 = *(unsigned __int8 *)a4;
      sub_1E0DB(v13, a2, a4, a3, v13, 94, a4);
    }
    else
    {
      v11 = sub_1E1DC(*(unsigned __int8 *)a4, a2, a4, a3, *(unsigned __int8 *)a4);
    }
  }
  v14 = sub_11CAC(v11, a2, a4, a3, 0);
  sub_1DF58(v14, a2, a4, a3);
}
