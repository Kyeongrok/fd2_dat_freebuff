/*
 * func-name: sub_423E0
 * func-address: 0x423e0
 * callers: none
 * callees: 0x3771c, 0x382e9
 */

void __cdecl sub_423E0(int a1, int a2, unsigned int n0x200)
{
  int n512; // eax
  int v4; // ebp
  _BYTE v5[4]; // [esp+0h] [ebp-24h] BYREF
  __int16 v6; // [esp+4h] [ebp-20h]
  _BYTE v7[4]; // [esp+Ch] [ebp-18h] BYREF
  __int16 v8; // [esp+10h] [ebp-14h]

  if ( *(int *)(a1 + 424) > 0 )
  {
    v8 = *(_WORD *)(a1 + 424);
    sub_382E9((int)v7, *(_DWORD *)a1, 1282, (int)v7, 0);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
  }
  if ( n0x200 <= 0x200 )
    n512 = n0x200;
  else
    n512 = 512;
  memmove(*(_DWORD *)(a1 + 8) + 256, a2, n512);
  v4 = *(_DWORD *)(a1 + 424) + 1;
  *(_DWORD *)(a1 + 424) = v4;
  if ( v4 > 0 )
  {
    v6 = *(_WORD *)(a1 + 424);
    sub_382E9((int)v5, *(_DWORD *)a1, 1282, (int)v5, 0);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
  }
}
