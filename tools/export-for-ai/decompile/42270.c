/*
 * func-name: sub_42270
 * func-address: 0x42270
 * callers: 0x43270, 0x452f0
 * callees: 0x382e9
 */

void __cdecl sub_42270(int a1)
{
  _BYTE v1[4]; // [esp+0h] [ebp-10h] BYREF
  __int16 v2; // [esp+4h] [ebp-Ch]

  if ( *(int *)(a1 + 424) > 0 )
  {
    v2 = *(_WORD *)(a1 + 424);
    sub_382E9((int)v1, *(_DWORD *)a1, 1282, (int)v1, 0);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
  }
}
