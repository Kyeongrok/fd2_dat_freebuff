/*
 * func-name: sub_213B7
 * func-address: 0x213b7
 * callers: 0x21396
 * callees: 0x1c4cc, 0x1c75e, 0x1ca89, 0x1cac7, 0x1e0db, 0x1e1dc, 0x3702f
 */

void __usercall sub_213B7(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int n6,
        int n4,
        int n30,
        unsigned __int8 *a10)
{
  int v10; // eax
  __int32 v11; // eax
  int n30_1; // esi
  unsigned __int8 *v13; // ebx
  int v14; // eax

  v10 = sub_3702F(a1, a2, a4, a3, 36);
  dword_53EC4 = 0;
  sub_1C4CC(v10, a2, a4, a3, n6, n4, n30, (int)a10);
  v11 = sub_1CAC7(n6, n4, n30, a10, a5, a6);
  sub_1CA89(v11, a2, a4, a3, n6, n4);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    v13 = &a10[n30_1];
    v14 = sub_1C75E(a10[n30_1], a2, (int)&a10[n30_1], a3, a10[n30_1], n4);
    if ( v14 )
      sub_1E0DB(v14, a2, *v13, a3, v14, 94, *v13);
    else
      sub_1E1DC(*v13, a2, (int)v13, a3, *v13);
  }
  JUMPOUT(0x21190);
}
