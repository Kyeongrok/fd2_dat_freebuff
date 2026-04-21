/*
 * func-name: sub_1AF1E
 * func-address: 0x1af1e
 * callers: 0x1b1e7
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1AF1E(__int32 a1, int a2, int a3, int a4, int a5, int n5)
{
  int n170; // ebp
  int n75; // eax
  int n75_1; // ebx
  int n75_2; // esi
  int result; // eax
  int v11; // edi
  int n117; // esi
  int v13; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  n170 = 170;
  n75 = 75;
  n75_1 = 75;
  if ( n5 < 5 )
  {
    n75_2 = 75 - 50 * (4 - n5);
    n75_1 = n75_2;
    if ( n75_2 < 0 )
    {
      n170 = n75_2 + 170;
      n75 = 50 * (4 - n5);
      n75_1 = 0;
    }
  }
  result = n75 + 11840;
  v11 = result + a5;
  n117 = 0;
  v13 = n75_1 + 11840;
  while ( n117 < 117 )
  {
    result = memmove(v13 + dword_53A49, v11, n170);
    v11 += 320;
    v13 += 320;
    ++n117;
  }
  return result;
}
