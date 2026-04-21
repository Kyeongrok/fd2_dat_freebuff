/*
 * func-name: sub_14B16
 * func-address: 0x14b16
 * callers: 0x14237, 0x14b78, 0x1567e, 0x1598a
 * callees: 0x3702f
 */

int __fastcall sub_14B16(__int32 a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v6; // esi
  unsigned __int8 *v7; // edx
  int j; // ebx
  int i; // [esp+0h] [ebp-Ch]

  sub_3702F(a1, a2, a3, a4, 16);
  v6 = 0;
  v7 = (unsigned __int8 *)(dword_53A51 + 7);
  for ( i = 0; i < dword_53AC5; ++i )
  {
    for ( j = 0; j < dword_53AC1; ++j )
    {
      if ( *v7 != 255 )
      {
        *a5 = j;
        a5[1] = i;
        a5 += 2;
        ++v6;
      }
      v7 += 4;
    }
  }
  return v6;
}
