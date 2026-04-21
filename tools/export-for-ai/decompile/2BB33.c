/*
 * func-name: sub_2BB33
 * func-address: 0x2bb33
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x2eb9f, 0x3702f
 */

void __fastcall sub_2BB33(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned __int8 a9)
{
  int v9; // ecx
  int n8; // edx
  int n8_1; // ebx
  int v12; // eax
  int n8_2; // ebx
  int n4; // ebx
  int n4_1; // ebx
  int n8_3; // ebx
  _DWORD dst_[8]; // [esp+0h] [ebp-54h] BYREF
  _DWORD dst__1[8]; // [esp+20h] [ebp-34h] BYREF
  int v19; // [esp+40h] [ebp-14h]
  int v20; // [esp+50h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 108);
  v20 = a3;
  v19 = 0;
  qmemcpy(dst_, &src__47, sizeof(dst_));
  qmemcpy(dst__1, &src__48, sizeof(dst__1));
  v9 = 0;
  n8 = n8_0;
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    for ( n8_1 = 0; n8_1 < 8; ++n8_1 )
      dst_[n8_1] += 148;
  }
  v12 = a9;
  switch ( a9 )
  {
    case 3u:
      for ( n8_2 = 0; n8_2 < 8; ++n8_2 )
        dword_53F92[n8_2] = -2 * n8_2;
      JUMPOUT(0x2C93D);
    case 4u:
      for ( n4 = 0; n4 < 4; ++n4 )
      {
        if ( (unsigned int)dword_53F92[n4] <= 0xE )
          sub_2EB9F(a6, dword_53F92[n4], a7 + dst_[n4] + a8 * dst__1[n4] + 80, a8, -1);
      }
      while ( n4 < 8 )
      {
        if ( (unsigned int)dword_53F92[n4] <= 0xE )
          sub_2EB9F(a6, dword_53F92[n4] + 15, a7 + dst_[(n4 + 4) % 8] + a8 * dst__1[(n4 + 4) % 8] + 80, a8, -1);
        ++n4;
      }
      break;
    case 5u:
      for ( n4_1 = 0; n4_1 < 4; ++n4_1 )
      {
        v9 = 4 * n4_1;
        if ( (unsigned int)dword_53F92[n4_1] <= 0xE )
        {
          n8 = a7 + dst_[(n4_1 + 4) % 8] + a8 * dst__1[(n4_1 + 4) % 8] + 80;
          LOBYTE(v12) = sub_2EB9F(a6, dword_53F92[n4_1] + 15, n8, a8, -1);
        }
      }
      while ( n4_1 < 8 )
      {
        v12 = 4 * n4_1;
        if ( (unsigned int)dword_53F92[n4_1] <= 0xE )
        {
          n8 = a7 + dst_[n4_1] + a8 * dst__1[n4_1] + 80;
          LOBYTE(v12) = sub_2EB9F(a6, dword_53F92[n4_1], n8, a8, -1);
        }
        ++n4_1;
      }
      for ( n8_3 = 0; n8_3 < 8; ++n8_3 )
      {
        if ( ++dword_53F92[n8_3] == 9 )
          v19 = 1;
        if ( dword_53F92[n8_3] == 5 )
          v12 = sub_25A96(v12, n8, n8_3, v9, dword_54153, 1, 1);
      }
      JUMPOUT(0x2BB2A);
  }
  JUMPOUT(0x2C93B);
}
