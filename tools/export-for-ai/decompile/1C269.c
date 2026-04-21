/*
 * func-name: sub_1C269
 * func-address: 0x1c269
 * callers: 0x1598a, 0x15b77, 0x17aed, 0x18d8c, 0x1ceed, 0x1cff0, 0x1d51d
 * callees: 0x3702f
 */

void __fastcall sub_1C269(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int n8; // eax
  int n5; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 24);
  v6 = 0;
  v7 = 80 * a5 + dword_53A45;
  for ( n5 = 0; n5 < 5; ++n5 )
  {
    v8 = *(unsigned __int8 *)(n5 + v7 + 26);
    for ( n8 = 0; n8 < 8; ++n8 )
    {
      if ( ((v8 >> n8) & 1) != 0 )
      {
        if ( a6 )
          *(_BYTE *)(a6 + v6) = n8 + 8 * n5;
        ++v6;
      }
    }
  }
  JUMPOUT(0x22BBE);
}
