/*
 * func-name: sub_1D51D
 * func-address: 0x1d51d
 * callers: 0x1cff0
 * callees: 0x16c57, 0x1c269, 0x1ceed, 0x25a96, 0x3702f, 0x4e866
 */

void __fastcall sub_1D51D(
        __int32 a1,
        int a2,
        int n6_1,
        int a4,
        unsigned __int8 *n6,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int n30; // eax
  __int32 v12; // eax
  int v13; // ebx
  int v14; // eax
  _UNKNOWN *retaddr; // [esp+18h] [ebp+0h] BYREF

  n30 = sub_3702F(a1, a2, n6_1, a4, 40);
  sub_1CEED(n30, a2, n6_1, a4, (int)n6, n3_3, 655360);
  sub_1C269(80 * a11, a2, a11, a4, a11, 0);
  v13 = v12;
  sub_16C57(v12, a2, v12, a4, 0);
  switch ( v14 )
  {
    case 72:
      if ( n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        --n3_3;
      }
      else
      {
        sub_25A96(dword_53EEC, 0, 1);
        n3_3 = v13 - 1;
      }
      break;
    case 80:
      if ( v13 - 1 == n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        n3_3 = 0;
      }
      else
      {
        sub_25A96(dword_53EEC, 0, 1);
        ++n3_3;
      }
      break;
    case 75:
      if ( n3_3 >= 4 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        n3_3 -= 4;
      }
      break;
    case 77:
      if ( v13 - 4 > n3_3 )
      {
        sub_25A96(dword_53EEC, 0, 1);
        n3_3 += 4;
      }
      break;
    case 28:
    case 57:
      sub_1C269((__int32)&retaddr, a2, v13, a4, a11, (int)&retaddr);
      sub_4E866(*((unsigned __int8 *)&retaddr + n3_3));
      break;
  }
  JUMPOUT(0x16F04);
}
