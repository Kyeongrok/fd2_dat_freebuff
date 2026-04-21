/*
 * func-name: sub_3FB90
 * func-address: 0x3fb90
 * callers: 0x3901e
 * callees: 0x364fb, 0x365ab, 0x3815f, 0x38262, 0x382e9, 0x38d77
 */

int __usercall sub_3FB90@<eax>(int a1@<eax>, int a2)
{
  int v2; // eax
  int result; // eax
  int n16; // edx

  if ( *(_DWORD *)(a2 + 32) )
    a1 = (*(int (__cdecl **)(_DWORD))(a2 + 32))(*(_DWORD *)(a2 + 36));
  if ( *(_DWORD *)(a2 + 28) != -1 )
    sub_38D77(a1, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a2 + 20) )
  {
    v2 = *(_DWORD *)(a2 + 24);
    if ( v2 != -1 )
      v2 = sub_38262(v2, *(_DWORD *)(a2 + 24));
    sub_382E9(v2, a2, 774, 0, 0);
  }
  sub_3815F(*(_DWORD *)(a2 + 12), 102, *(_DWORD *)(*(_DWORD *)(a2 + 12) + 54));
  sub_365AB(*(_DWORD *)(a2 + 8), *(_DWORD *)a2, *(_DWORD *)(a2 + 4));
  result = sub_364FB(a2, 40);
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    result = 4 * n16;
    if ( a2 == dword_541B4[n16] )
      dword_541B4[n16] = 0;
  }
  return result;
}
