/*
 * func-name: sub_16C57
 * func-address: 0x16c57
 * callers: 0x10010, 0x15f84, 0x17aed, 0x190ac, 0x1aa1d, 0x1b9de, 0x1d51d, 0x2872b, 0x28cbd, 0x28f65, 0x2968d, 0x2986f, 0x29bcb, 0x2a43e, 0x2aa00, 0x2ac7d, 0x2b439, 0x31bdf, 0x35854, 0x35a0d, 0x35fcf
 * callees: 0x10620, 0x16559, 0x1685c, 0x3702f, 0x370f0, 0x4e31c, 0x4ebe3
 */

void __fastcall sub_16C57(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n18; // esi
  int v6; // edi
  int n1132; // edx
  int v8; // ebp
  int v9; // eax
  int n658255; // [esp+0h] [ebp-20h]
  int n18336; // [esp+4h] [ebp-1Ch]
  __int16 n1132_1; // [esp+8h] [ebp-18h]
  unsigned __int8 v14; // [esp+Ch] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 52);
  v14 = 0;
  n18 = 18;
  v6 = 0;
  n18336 = 18336;
  if ( !dword_53A51 )
    n18336 = 18288;
  n1132_1 = MEMORY[0x46C];
  n1132 = ((int (*)(void))sub_4EBE3)() % 30;
  v8 = n1132 + 2;
  if ( n1832 == 1832 )
    n658255 = 658255;
  else
    n658255 = 693535;
  if ( a5 == 1 )
    sub_1685C(n18336 + n658255 + 1600, n1132, a3, a4, n18336 + n658255 + 1600, 320, dword_53A81, 18);
  while ( !sub_10620() )
  {
    sub_4E31C();
    n1132 = n1132_1;
    if ( MEMORY[0x46C] - n1132_1 >= 2 )
    {
      if ( a5 == 1 && ++v6 == 3 )
      {
        v6 = 0;
        if ( ++n18 == 20 )
          n18 = 18;
        sub_1685C(n18336 + n658255 + 1600, n1132_1, a3, a4, n18336 + n658255 + 1600, 320, dword_53A81, n18);
      }
      if ( v14 )
      {
        v9 = sub_16559(v14, n1132_1, a3, a4, 0);
        v8 = sub_4EBE3(v9) % 30 + 2;
        v14 = 0;
      }
      else if ( !v8-- )
      {
        sub_16559(0, n1132_1, a3, a4, 3);
        v14 = 1;
      }
      n1132 = 1132;
      n1132_1 = MEMORY[0x46C];
    }
  }
  if ( a5 == 1 )
    sub_1685C(n18336 + n658255, n1132, a3, a4, n18336 + n658255, 320, dword_53A81, 13);
  HIBYTE(n3) = 16;
  int386(22, &n3, &n3);
  if ( HIBYTE(n3) == 224 || HIBYTE(n3) == 82 )
    HIBYTE(n3) = 28;
  if ( HIBYTE(n3) == 83 )
    HIBYTE(n3) = 1;
  JUMPOUT(0x15D9A);
}
