/*
 * func-name: sub_2CCF4
 * func-address: 0x2ccf4
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f
 */

int __fastcall sub_2CCF4(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // esi
  int n16_1; // ebx
  int n16; // ebx
  int v13; // eax
  _BYTE dst_[28]; // [esp+0h] [ebp-20h] BYREF
  int v15; // [esp+1Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 56);
  v15 = a3;
  qmemcpy(dst_, &src__54, 0x10u);
  v9 = 0;
  if ( a9 )
  {
    switch ( a9 )
    {
      case 3:
        return 34;
      case 6:
        return 2;
      case 2:
      case 5:
        for ( n16 = 0; n16 < 16; ++n16 )
        {
          v13 = 4 * n16;
          if ( (unsigned int)dword_540EE[n16] < 8 )
          {
            a2 = (unsigned __int8)dst_[n16];
            LOBYTE(v13) = sub_2EB9F(a6, a2 + dword_540EE[n16], a7, a8, -1);
          }
          if ( !dword_540EE[n16] )
            v13 = sub_25A96(v13, a2, n16, 0, dword_54153, 1, 1);
          if ( dword_540EE[n16] == 4 )
            sub_25B45(v13, a2, n16, 0, dword_54153, 2, 1);
          if ( ++dword_540EE[n16] == 4 )
            v9 = 1;
        }
        return v9;
      default:
        return 0;
    }
  }
  else
  {
    for ( n16_1 = 0; n16_1 < 16; ++n16_1 )
      dword_540EE[n16_1] = -2 * n16_1;
    return 3;
  }
}
