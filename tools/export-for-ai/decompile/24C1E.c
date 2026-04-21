/*
 * func-name: sub_24C1E
 * func-address: 0x24c1e
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x11506, 0x11cac, 0x11d40, 0x15f84, 0x17aa9, 0x24d22, 0x3702f, 0x37910
 */

void __usercall sub_24C1E(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int n30@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int n2; // edi
  int v9; // eax
  __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  __int32 v13; // eax

  v5 = sub_3702F(a1, a2, n30, a3, 52);
  v6 = 0;
  sub_15F84(a5, v5, a2, a3, n30, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  for ( n2 = 2; n2 < 10; ++n2 )
  {
    LOBYTE(v7) = sub_24D22(n2);
    for ( n30 = 0; n30 < 30; ++n30 )
    {
      v9 = sub_11CAC(v7, a2, n30, a3, 1);
      v7 = sub_17AA9(v9, a2, n30, a3, 1);
    }
  }
  sub_15F84((unsigned __int8 *)n2, v7, a2, a3, n30, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  n6_5 = 0;
  while ( n2 < 15 )
  {
    LOBYTE(v12) = sub_24D22(n2);
    for ( n30 = 0; n30 < 12; ++n30 )
    {
      sub_11D40(v12, a2, n30, a3, 0, 255, v6);
      v11 = sub_11CAC(v10, a2, n30, a3, 0);
      v12 = sub_17AA9(v11, a2, n30, a3, 1);
      ++v6;
    }
    ++n2;
  }
  v13 = memset(655360, 0, 64000);
  sub_11506(v13, a2, n30, a3);
  ++n17;
}
