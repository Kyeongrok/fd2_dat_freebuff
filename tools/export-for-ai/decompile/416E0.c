/*
 * func-name: sub_416E0
 * func-address: 0x416e0
 * callers: 0x39aae
 * callees: none
 */

int __cdecl sub_416E0(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a1 )
    *(_DWORD *)(a1 + 48) = a2;
  return result;
}
