/*
 * func-name: sub_401C0
 * func-address: 0x401c0
 * callers: none
 * callees: 0x382e9
 */

void __cdecl sub_401C0(int a1)
{
  _BYTE v1[4]; // [esp+0h] [ebp-10h] BYREF
  __int16 v2; // [esp+4h] [ebp-Ch]
  __int16 v3; // [esp+6h] [ebp-Ah]

  if ( !*(_DWORD *)(a1 + 84) )
  {
    v3 = *(_WORD *)(a1 + 24);
    v2 = *(_WORD *)(a1 + 20);
    sub_382E9((int)v1, *(_DWORD *)a1, 1025, (int)v1, 0);
    *(_DWORD *)(a1 + 84) = 1;
  }
}
