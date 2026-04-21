/*
 * func-name: sub_16B43
 * func-address: 0x16b43
 * callers: 0x15f84
 * callees: 0x15e71, 0x15e9e, 0x3702f, 0x3790a
 */

void __fastcall sub_16B43(__int32 a1, int a2, int a3, int a4, int *a5, int a6)
{
  int n4; // ebx
  int *v7; // eax
  int v8; // edi
  int i; // ebx
  int v10; // ecx
  __int16 *v11; // edx
  int v12; // eax
  __int32 v13; // eax
  int v14; // [esp+0h] [ebp-18h]
  int v15; // [esp+4h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 48);
  for ( n4 = 4; ; --n4 )
  {
    v7 = &a5[n4];
    if ( n4 <= 0 )
      break;
    sub_15E71((__int32)v7, a2, n4, a4, *v7, 655360, 320);
    j___delay(10);
  }
  sub_15E71((__int32)v7, a2, n4, a4, *v7, 655360, 320);
  if ( a6 )
  {
    v15 = 24 * n10 + 4;
    v14 = 24 * n2_1 + 4;
    v8 = n2_1 + n10;
    if ( n2_1 + n10 )
    {
      for ( i = 0; i <= v8; ++i )
      {
        v10 = 5 - i * (5 - v15) / v8;
        v11 = (__int16 *)(*(__int16 *)(dword_53A81 + 6) + dword_53A81);
        sub_15E9E(a6 - i * (a6 - v14) / v8, (int)v11, i, v10, v11, 655360, 320, v10, a6 - i * (a6 - v14) / v8);
        *a5 = v12;
        v13 = j___delay(10);
        sub_15E71(v13, (int)v11, i, v10, *a5, 655360, 320);
      }
    }
  }
  JUMPOUT(0x10B46);
}
