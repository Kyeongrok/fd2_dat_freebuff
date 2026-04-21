/*
 * func-name: sub_2C441
 * func-address: 0x2c441
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f, 0x4ebe3
 */

void __fastcall sub_2C441(__int32 a1, int a2, int n2, int a4, int a5, int a6, int a7, int a8, char n2_1)
{
  int n10_1; // ecx
  int v10; // edx
  int n10_2; // eax
  int v12; // eax
  int n10_3; // eax
  _DWORD dst_[10]; // [esp+0h] [ebp-3Ch] BYREF
  int n10; // [esp+28h] [ebp-14h]
  int n2_2; // [esp+38h] [ebp-4h]

  sub_3702F(a1, a2, n2, a4, 84);
  n2_2 = n2;
  qmemcpy(dst_, &src__51, sizeof(dst_));
  n10_1 = 0;
  v10 = 80 * a5;
  if ( !*(_BYTE *)(80 * a5 + n8_0 + 6) )
  {
    for ( n10 = 0; n10 < 10; ++n10 )
      dst_[n10] += 143;
  }
  if ( n2_1 )
  {
    if ( n2_1 != 3 )
    {
      if ( n2_1 == 6 )
      {
        byte_54087 = 1;
      }
      else if ( n2_1 == 2 || n2_1 == 5 || n2_1 == 8 )
      {
        for ( n10 = 0; n10 < 6; ++n10 )
        {
          if ( (unsigned int)dword_54050[n10] <= 5 )
          {
            n2 = dst_[dword_54068[n10]] + a7;
            v10 = dword_54050[n10] + (unsigned __int8)byte_54080[n10];
            sub_2EB9F(a6, v10, n2, a8, -1);
          }
          if ( !dword_54050[n10] )
          {
            if ( n10 )
            {
              if ( n10 == 3 )
                sub_25B45(3, v10, n2, n10_1, dword_54153, 1, 1);
            }
            else
            {
              sub_25A96(0, v10, n2, n10_1, dword_54153, 1, 1);
            }
          }
          ++dword_54050[n10];
          n2 = 4 * n10;
          if ( dword_54050[n10] == 7 && !byte_54087 )
          {
            ++::n10_1;
            n10_1 = 10;
            ::n10_1 = (unsigned __int8)::n10_1 % 10;
            n10_3 = (unsigned __int8)::n10_1;
            dword_54068[n10] = (unsigned __int8)::n10_1;
            *(int *)((char *)dword_54050 + n2) = 0;
            n2 = 2;
            v10 = 6 * (sub_4EBE3(n10_3) % 2);
            byte_54080[n10] = v10;
          }
        }
      }
    }
  }
  else
  {
    for ( n10 = 0; n10 < 6; ++n10 )
    {
      n10_2 = n10;
      dword_54050[n10] = -2 * n10;
      dword_54068[n10_2] = n10_2;
      v12 = sub_4EBE3(n10_2);
      byte_54080[n10] = 6 * (v12 % 2);
    }
    ::n10_1 = n10;
    byte_54087 = 0;
  }
  JUMPOUT(0x2C439);
}
