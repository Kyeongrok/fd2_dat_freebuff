/*
 * func-name: sub_2C217
 * func-address: 0x2c217
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x2eb9f, 0x3702f, 0x4ebe3
 */

int __fastcall sub_2C217(__int32 a1, int a2, int n2, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // ebp
  int n10_2; // ecx
  int n10_3; // edx
  int n10_4; // eax
  int v13; // eax
  __int32 n10_1; // eax
  int n10_5; // eax
  int v17; // eax
  _DWORD dst_[10]; // [esp+0h] [ebp-3Ch] BYREF
  __int32 n10; // [esp+28h] [ebp-14h]
  int n2_1; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, n2, a4, 84);
  n2_1 = n2;
  v9 = 0;
  qmemcpy(dst_, &src__50, sizeof(dst_));
  n10_2 = 0;
  n10_3 = 80 * a5;
  if ( !*(_BYTE *)(80 * a5 + n8_0 + 6) )
  {
    for ( n10 = 0; n10 < 10; ++n10 )
      dst_[n10] += 143;
  }
  if ( a9 )
  {
    switch ( a9 )
    {
      case 3:
        return 12;
      case 6:
        byte_5404F = 1;
        return 8;
      case 2:
      case 5:
      case 8:
        for ( n10 = 0; n10 < 6; ++n10 )
        {
          if ( (unsigned int)dword_54018[n10] <= 6 )
          {
            n2 = dst_[dword_54030[n10]] + a7;
            n10_3 = dword_54018[n10] + (unsigned __int8)byte_54048[n10];
            sub_2EB9F(a6, n10_3, n2, a8, -1);
          }
          if ( !dword_54018[n10] )
            sub_25A96(n10, n10_3, n2, n10_2, dword_54153, 1, 1);
          n10_1 = n10;
          ++dword_54018[n10];
          if ( dword_54018[n10_1] == 3 )
            v9 = 1;
          n2 = 4 * n10;
          if ( dword_54018[n10] == 8 && !byte_5404F )
          {
            ++n10_0;
            n10_2 = 10;
            n10_0 = (unsigned __int8)n10_0 % 10;
            n10_5 = (unsigned __int8)n10_0;
            dword_54030[n10] = (unsigned __int8)n10_0;
            *(int *)((char *)dword_54018 + n2) = 0;
            v17 = sub_4EBE3(n10_5);
            n2 = 2;
            n10_3 = n10;
            byte_54048[n10] = 7 * (v17 % 2);
          }
        }
        return v9;
      default:
        return 0;
    }
  }
  else
  {
    for ( n10 = 0; n10 < 6; ++n10 )
    {
      n10_4 = n10;
      dword_54018[n10] = -2 * n10;
      dword_54030[n10_4] = n10_4;
      v13 = sub_4EBE3(n10_4);
      byte_54048[n10] = 7 * (v13 % 2);
    }
    n10_0 = n10;
    byte_5404F = 0;
    return 2;
  }
}
