/*
 * func-name: sub_2CAFC
 * func-address: 0x2cafc
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f
 */

int __fastcall sub_2CAFC(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // ebp
  int v10; // ecx
  int n10; // ebx
  int n4; // ebx
  int n4_1; // edx
  int n3; // ebx
  _DWORD dst_[14]; // [esp+0h] [ebp-38h] BYREF

  sub_3702F(a1, a2, a3, a4, 80);
  dst_[13] = a3;
  v9 = 0;
  qmemcpy(dst_, &src__53, 0x28u);
  v10 = 0;
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    for ( n10 = 0; n10 < 10; ++n10 )
      dst_[n10] += 130;
  }
  if ( a9 )
  {
    switch ( a9 )
    {
      case 3:
        return 32;
      case 6:
        byte_540EC = 1;
        return 16;
      case 2:
      case 5:
      case 8:
        n4_1 = (unsigned __int8)++byte_540ED % 2;
        byte_540ED = (unsigned __int8)byte_540ED % 2;
        for ( n3 = 0; n3 < 3; ++n3 )
        {
          if ( (unsigned int)dword_540CB[n3] <= 4 )
          {
            n4_1 = dword_540DB[n3];
            v10 = dst_[n4_1] + a7;
            sub_2EB9F(a6, dword_540CB[n3], v10, a8, -1);
          }
          if ( !byte_540ED )
          {
            if ( dword_540CB[n3] == 1 )
            {
              if ( n3 )
              {
                if ( n3 == 1 )
                  sub_25B45((unsigned __int8)byte_540ED, n4_1, 1, v10, dword_54153, 1, 1);
              }
              else
              {
                sub_25A96((unsigned __int8)byte_540ED, n4_1, 0, v10, dword_54153, 1, 1);
              }
            }
            if ( ++dword_540CB[n3] == 2 )
              v9 = 1;
            v10 = 4 * n3;
            if ( dword_540CB[n3] == 7 && !byte_540EC )
            {
              n4_1 = (unsigned __int8)++n4_0 % 10;
              n4_0 = n4_1;
              dword_540DB[n3] = (unsigned __int8)n4_1;
              dword_540CB[n3] = 0;
            }
          }
        }
        return v9;
      default:
        return 0;
    }
  }
  else
  {
    for ( n4 = 0; n4 < 4; ++n4 )
    {
      dword_540CB[n4] = -3 * n4;
      dword_540DB[n4] = n4;
    }
    n4_0 = n4;
    byte_540EC = 0;
    byte_540ED = 0;
    return 2;
  }
}
