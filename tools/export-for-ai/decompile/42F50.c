/*
 * func-name: sub_42F50
 * func-address: 0x42f50
 * callers: 0x448a0, 0x450b0
 * callees: 0x42980
 */

void __cdecl sub_42F50(int a1, int a2)
{
  int n6; // edx
  unsigned int n6_1; // ecx
  int v4; // eax
  int n6_2; // edx
  int n6_3; // ebp
  int n6_4; // ebx
  int n6_5; // ebp
  int n6_6; // ebx
  int n6_7; // ebp
  int n6_8; // ebx
  int n6_9; // ebp
  int n6_10; // ebx
  int n6_11; // ebp
  int n6_12; // ebx

  n6 = *(_DWORD *)(a1 + 4 * a2 + 592);
  if ( n6 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x72u, n6, 0);
  n6_1 = *(_DWORD *)(a1 + 4 * a2 + 208);
  if ( n6_1 != -1 )
    sub_42980(a1, a2 | 0xC0, n6_1, 0, 0);
  v4 = a1 + 4 * a2;
  n6_2 = *(_DWORD *)(v4 + 336);
  if ( n6_2 != -1 )
    sub_42980(a1, a2 | 0xE0, *(_DWORD *)(v4 + 272), n6_2, 0);
  n6_3 = *(_DWORD *)(a1 + 4 * a2 + 464);
  if ( n6_3 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x6Fu, n6_3, 0);
  n6_4 = *(_DWORD *)(a1 + 4 * a2 + 528);
  if ( n6_4 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x70u, n6_4, 0);
  n6_5 = *(_DWORD *)(a1 + 4 * a2 + 784);
  if ( n6_5 != -1 )
    sub_42980(a1, a2 | 0xB0, 1u, n6_5, 0);
  n6_6 = *(_DWORD *)(a1 + 4 * a2 + 848);
  if ( n6_6 != -1 )
    sub_42980(a1, a2 | 0xB0, 7u, n6_6, 0);
  n6_7 = *(_DWORD *)(a1 + 4 * a2 + 912);
  if ( n6_7 != -1 )
    sub_42980(a1, a2 | 0xB0, 0xAu, n6_7, 0);
  n6_8 = *(_DWORD *)(a1 + 4 * a2 + 976);
  if ( n6_8 != -1 )
    sub_42980(a1, a2 | 0xB0, 0xBu, n6_8, 0);
  n6_9 = *(_DWORD *)(a1 + 4 * a2 + 1040);
  if ( n6_9 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x40u, n6_9, 0);
  n6_10 = *(_DWORD *)(a1 + 4 * a2 + 1104);
  if ( n6_10 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x5Bu, n6_10, 0);
  n6_11 = *(_DWORD *)(a1 + 4 * a2 + 1168);
  if ( n6_11 != -1 )
    sub_42980(a1, a2 | 0xB0, 0x5Du, n6_11, 0);
  n6_12 = *(_DWORD *)(a1 + 4 * a2 + 1232);
  if ( n6_12 != -1 )
    sub_42980(a1, a2 | 0xB0, 6u, n6_12, 0);
}
