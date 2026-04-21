/*
 * func-name: sub_2BFD9
 * func-address: 0x2bfd9
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x25b45, 0x2eb9f, 0x3702f
 */

int __fastcall sub_2BFD9(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // ecx
  int n12; // ebx
  int n12_2; // ebx
  int n12_3; // edx
  int n12_1; // ebx
  __int32 v15; // eax
  __int32 v16; // eax
  _DWORD dst_[12]; // [esp+0h] [ebp-5Ch] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-2Ch]
  _DWORD v19[3]; // [esp+3Ch] [ebp-20h]
  int v20; // [esp+48h] [ebp-14h]
  int v21; // [esp+58h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 116);
  v21 = a3;
  v20 = 0;
  qmemcpy(dst_, &src__49, sizeof(dst_));
  v9 = 0;
  v19[0] = unk_5259D;
  v19[1] = unk_525A1;
  v19[2] = unk_525A5;
  v18[0] = unk_525A9;
  v18[1] = unk_525AD;
  v18[2] = unk_525B1;
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    for ( n12 = 0; n12 < 12; ++n12 )
      dst_[n12] += 20;
  }
  if ( a9 )
  {
    switch ( a9 )
    {
      case 3:
        return 40;
      case 6:
        byte_54016 = 1;
        return 20;
      case 2:
      case 5:
      case 8:
        n12_3 = (unsigned __int8)++byte_54017 % 2;
        byte_54017 = (unsigned __int8)byte_54017 % 2;
        for ( n12_1 = 0; n12_1 < 12; ++n12_1 )
        {
          if ( (unsigned int)dword_53FB5[n12_1] <= 0xA )
          {
            v9 = dword_53FE5[n12_1];
            n12_3 = dword_53FB5[n12_1] + *((unsigned __int8 *)v18 + v9);
            sub_2EB9F(a6, n12_3, dst_[v9] + a7 - a8 * *((unsigned __int8 *)v19 + v9), a8, -1);
          }
          if ( !byte_54017 )
          {
            if ( !dword_53FB5[n12_1] )
            {
              v15 = dword_53FE5[n12_1];
              if ( *((_BYTE *)v18 + v15) )
                sub_25A96(v15, n12_3, n12_1, v9, dword_54153, 2, 1);
            }
            if ( ++dword_53FB5[n12_1] == 3 )
            {
              v16 = dword_53FE5[n12_1];
              if ( !*((_BYTE *)v18 + v16) )
                sub_25B45(v16, n12_3, n12_1, v9, dword_54153, 1, 1);
              v20 = 1;
            }
            v9 = 4 * n12_1;
            if ( dword_53FB5[n12_1] == 11 && !byte_54016 )
            {
              n12_3 = (unsigned __int8)++::n12 % 12;
              ::n12 = n12_3;
              dword_53FE5[n12_1] = (unsigned __int8)n12_3;
              dword_53FB5[n12_1] = 0;
            }
          }
        }
        return v20;
      default:
        return 0;
    }
  }
  else
  {
    for ( n12_2 = 0; n12_2 < 12; ++n12_2 )
    {
      dword_53FB5[n12_2] = -2 * n12_2;
      dword_53FE5[n12_2] = n12_2;
    }
    ::n12 = n12_2;
    byte_54016 = 0;
    byte_54017 = 0;
    return 2;
  }
}
