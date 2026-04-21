/*
 * func-name: sub_3F27D
 * func-address: 0x3f27d
 * callers: 0x388a7
 * callees: 0x3806a, 0x3806f
 */

__int32 __cdecl sub_3F27D(int a1, __int32 a2)
{
  __int32 v2; // eax
  __int32 v4; // [esp-4h] [ebp-10h]

  v2 = sub_3806A();
  if ( a1 != -1 )
    v2 = _InterlockedExchange((int *)((char *)dword_52B94 + a1), a2);
  v4 = v2;
  sub_3806F(v2);
  return v4;
}
