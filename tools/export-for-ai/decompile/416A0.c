/*
 * func-name: sub_416A0
 * func-address: 0x416a0
 * callers: none
 * callees: none
 */

int __cdecl sub_416A0(int a1, int a2)
{
  int result; // eax

  if ( a1 )
  {
    result = a1 + 4 * *(_DWORD *)(a1 + 40);
    *(_DWORD *)(result + 24) = a2;
  }
  return result;
}
