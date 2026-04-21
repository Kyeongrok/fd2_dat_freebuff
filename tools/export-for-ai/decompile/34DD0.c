/*
 * func-name: sub_34DD0
 * func-address: 0x34dd0
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x15f84, 0x3702f
 */

int __usercall sub_34DD0@<eax>(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int n12; // edx
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int result; // eax

  sub_3702F(a1, a2, a4, a3, 44);
  for ( n12 = 12; n12 < 34; ++n12 )
  {
    a4 = 80 * n12;
    *(_BYTE *)(80 * n12 + n8_0 + 52) = 0;
  }
  *(_BYTE *)(dword_53A55 + 3) = n999 + 1;
  LOBYTE(n12) = n999 + 2;
  *(_BYTE *)(dword_53A55 + 6) = n999 + 2;
  v6 = n8_0 + 880;
  *(_BYTE *)(n8_0 + 885) = 0;
  *(_BYTE *)(v6 + 6) = 1;
  *(_BYTE *)(v6 + 7) = 6;
  *(_BYTE *)(v6 + 8) = 6;
  *(_BYTE *)(v6 + 49) = -1;
  *(_BYTE *)(v6 + 52) = 0x80;
  *(_WORD *)(v6 + 64) = 1;
  sub_15F84(a5, v6, n12, a3, a4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
  v8 = sub_10B4E(v7, n12, a4, a3, 1);
  sub_15F84(a5, v8, n12, a3, a4, arg0_0, 3, 655360, 320, 205, 76, 74, 19, 1);
  arg4_0 = 0;
  result = dword_53AD5;
  *(_BYTE *)(dword_53AD5 + 16) = 2;
  return result;
}
