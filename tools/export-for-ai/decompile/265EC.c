/*
 * func-name: sub_265EC
 * func-address: 0x265ec
 * callers: 0x26152
 * callees: 0x11eb0, 0x15f84, 0x3702f, 0x3771c, 0x4e22a, 0x4e809, 0x4ebff
 */

int __usercall sub_265EC@<eax>(__int32 n4@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  __int64 v5; // rax
  int n3; // eax
  int v7; // ebx
  char *dst; // edx
  unsigned __int8 v10; // [esp+4h] [ebp-8h]

  sub_3702F(n4, a2, a4, a3, 52);
  v10 = *(_BYTE *)sub_4E809(n17);
  v5 = memmove(n655360_0, n7, 153216);
  sub_4EBFF(n655360_0 + 107020, dword_53F5A, 456);
  sub_15F84(a5, n5 + 495, SHIDWORD(v5), a3, a4, arg0, n5 + 495, n655360_0 + 109764, 456, 205, 76, 74, 19, 0);
  n3 = n3_4;
  if ( n3_4 == 3 )
    n3 = 1;
  v7 = n655360_0 + 32904;
  dst = (char *)(456 * (unsigned __int8)byte_52375[6 * v10 + n5]
               + n655360_0
               + 32904
               + (unsigned __int8)byte_52363[6 * v10 + n5]);
  sub_4E22A((char *)(dword_53A61 + *(_DWORD *)(dword_53A61 + 4 * n3)), dst, 456);
  return sub_11EB0(n655360_0 + 32904, (int)dst, v7, a3, 656644, 320, n655360_0 + 32904, 456, 312, 192);
}
