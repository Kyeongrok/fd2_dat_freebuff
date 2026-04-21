/*
 * func-name: sub_1AF99
 * func-address: 0x1af99
 * callers: 0x1b1e7
 * callees: 0x3702f, 0x3771c
 */

int __fastcall sub_1AF99(__int32 a1, int a2, int a3, int a4, int a5, int n4)
{
  int n320; // eax
  int n170; // ebp
  int n75; // ebx
  int v9; // eax
  int n117; // esi
  int v11; // edi
  int v12; // ebx

  n320 = sub_3702F(a1, a2, a3, a4, 32);
  n170 = 170;
  if ( n4 <= 4 )
  {
    v9 = 50 * (4 - n4);
    n75 = v9 + 75;
    n320 = v9 + 245;
    if ( n320 > 320 )
      n170 = 320 - n75;
  }
  else
  {
    n75 = 75;
  }
  n117 = 0;
  v11 = a5 + 11915;
  v12 = n75 + 11840;
  while ( n117 < 117 )
  {
    n320 = memmove(v12 + dword_53A49, v11, n170);
    v11 += 320;
    v12 += 320;
    ++n117;
  }
  return n320;
}
