/*
 * func-name: sub_44EB0
 * func-address: 0x44eb0
 * callers: 0x3c2f6
 * callees: none
 */

int __cdecl sub_44EB0(int a1, int a2, int a3)
{
  int result; // eax

  if ( a1 )
  {
    result = a1 + 4 * a2;
    *(_DWORD *)(result + 1684) = a3;
  }
  return result;
}
