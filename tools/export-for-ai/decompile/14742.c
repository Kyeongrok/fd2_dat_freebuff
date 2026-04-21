/*
 * func-name: sub_14742
 * func-address: 0x14742
 * callers: 0x115b6
 * callees: 0x3702f, 0x37932
 */

void __fastcall sub_14742(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int n6)
{
  int v9; // edi
  unsigned __int8 *v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v13; // [esp+0h] [ebp-18h]
  int n6_1; // [esp+4h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 32);
  v9 = 0;
  for ( n6_1 = 0; n6_1 < n6_0; ++n6_1 )
  {
    v10 = (unsigned __int8 *)(80 * n6_1 + dword_53A45);
    v13 = v10[1];
    v11 = abs(*v10 - a5);
    v12 = v11 + abs(v13 - a6);
    if ( (v10[5] & 1) == 0
      && v12 < a7
      && (!n6 && !v10[6] || n6 == 1 && v10[6] || n6 == 2 && v10[6] == 1 || n6 == 3 && v10[6] == 2) )
    {
      if ( a8 )
        *(_BYTE *)(v9 + a8) = n6_1;
      ++v9;
    }
  }
  JUMPOUT(0x10B46);
}
