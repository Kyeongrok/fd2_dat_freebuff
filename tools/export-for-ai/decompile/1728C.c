/*
 * func-name: sub_1728C
 * func-address: 0x1728c
 * callers: 0x16f55
 * callees: 0x1741c, 0x176b4, 0x177fc, 0x3702f, 0x3b124
 */

void __fastcall sub_1728C(__int32 a1, int a2, int a3, int a4)
{
  int v4; // ebx
  _BYTE dst__1[16]; // [esp-10h] [ebp-2Ch] BYREF
  _DWORD dst_[7]; // [esp+0h] [ebp-1Ch] BYREF

  sub_3702F(a1, a2, a3, a4, 60);
  dst_[6] = a3;
  qmemcpy(dst_, &src__7, 0x10u);
  qmemcpy(dst__1, &src__8, sizeof(dst__1));
  n3_3 = 0;
  while ( 1 )
  {
    dst_[0] = (n127 == 0) + 18;
    dst_[1] = (byte_51E62 == 0) + 20;
    dst_[2] = (byte_53AF9 != 0) + 22;
    dst_[3] = (byte_51AAB == 0) + 24;
    ((void (__cdecl *)(_DWORD *, _BYTE *))sub_1741C)(dst_, dst__1);
    do
      v4 = sub_177FC(dst_, dst__1);
    while ( !v4 );
    sub_176B4(dst_, dst__1);
    if ( v4 == -1 )
      break;
    if ( n3_3 )
    {
      if ( n3_3 == 2 )
      {
        byte_53AF9 ^= 1u;
      }
      else if ( n3_3 == 3 )
      {
        byte_51AAB ^= 1u;
      }
      else
      {
        byte_51E62 = byte_51E62 == 0;
      }
    }
    else
    {
      n127 = n127 == 0;
      if ( n127 )
        sub_3B124(dword_53ED0, 127, 1000);
      else
        sub_3B124(dword_53ED0, (unsigned __int8)n127, 1000);
    }
  }
  JUMPOUT(0x16FDD);
}
