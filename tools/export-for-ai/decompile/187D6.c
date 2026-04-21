/*
 * func-name: sub_187D6
 * func-address: 0x187d6
 * callers: 0x10010, 0x17fc0, 0x184c0, 0x1875d, 0x18c6d, 0x1a30b, 0x1aeb1, 0x1b41d, 0x1ceed, 0x272d0, 0x279bc, 0x2825b, 0x29daa, 0x2a0c2, 0x2a43e, 0x2b4fb
 * callees: 0x16886, 0x3702f, 0x37b29
 */

char __fastcall sub_187D6(__int32 a1, int a2, int a3, int a4, int arg0, int arg4, int n999_1, int argC, int n3)
{
  __int32 n999; // eax
  char result; // al
  int n3_1; // ebx
  char v12[20]; // [esp+0h] [ebp-2Ch] BYREF
  char %0.5d_[24]; // [esp+14h] [ebp-18h] BYREF

  sub_3702F(a1, a2, a3, a4, 64);
  *(_DWORD *)&%0.5d_[20] = a3;
  n999 = n999_1;
  strcpy(%0.5d_, "%0.5d");
  if ( n999_1 < 0 )
    n999 = 0;
  if ( n3 == 3 && n999 > 999 )
  {
    LOBYTE(a3) = 4;
    LOBYTE(n3) = 4;
  }
  if ( n3 == 2 && n999 > 99 )
    return sub_16886(n999, a2, a3, a4, arg0, arg4, dword_53A81, 93);
  %0.5d_[3] = n3 + 48;
  result = sprintf(v12, %0.5d_, n999);
  for ( n3_1 = 0; n3_1 < n3; ++n3_1 )
    result = sub_16886(
               arg0 + 6 * n3_1,
               a2,
               n3_1,
               a4,
               arg0 + 6 * n3_1,
               arg4,
               dword_53A81,
               argC + (unsigned __int8)v12[n3_1] - 48);
  return result;
}
