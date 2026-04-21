/*
 * func-name: sub_45240
 * func-address: 0x45240
 * callers: 0x3c7a5
 * callees: 0x382e9, 0x422c0, 0x42980
 */

void __cdecl sub_45240(int a1, int a2, int a3, unsigned int n6, int n6_1)
{
  _BYTE v5[4]; // [esp+0h] [ebp-18h] BYREF
  __int16 v6; // [esp+4h] [ebp-14h]

  ++*(_DWORD *)(a1 + 20);
  if ( a2 )
  {
    sub_42980(a2, a3, n6, n6_1, 0);
  }
  else if ( !*(_DWORD *)(a1 + 416)
         || !(*(int (__cdecl **)(int, _DWORD, int, unsigned int, int))(a1 + 416))(a1, 0, a3, n6, n6_1) )
  {
    sub_422C0(a1, a3, n6, n6_1);
  }
  if ( *(int *)(a1 + 424) > 0 )
  {
    v6 = *(_WORD *)(a1 + 424);
    sub_382E9((int)v5, *(_DWORD *)a1, 1282, (int)v5, 0);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
  }
  --*(_DWORD *)(a1 + 20);
}
