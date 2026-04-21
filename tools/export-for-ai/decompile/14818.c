/*
 * func-name: sub_14818
 * func-address: 0x14818
 * callers: 0x14237, 0x15055, 0x15311, 0x1567e, 0x1598a, 0x18d8c, 0x1bbdc, 0x1cff0
 * callees: 0x3702f, 0x37932, 0x4e390, 0x4e8a5
 */

void __fastcall sub_14818(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int n16, int a9, int n2)
{
  char *v10; // eax
  _BYTE *v11; // ebx
  int j; // ebp
  int k; // esi
  int v14; // edi
  int v15; // esi
  int v16; // ebx
  int i; // ebp
  int n6; // ebx
  unsigned __int8 *v19; // eax
  char *v20; // [esp-8h] [ebp-1Ch]
  int v21; // [esp-4h] [ebp-18h]
  int v22; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 48);
  v22 = 0;
  if ( n16 >= 16 )
  {
    v15 = 0;
    v16 = n16 - 16;
    while ( v15 < dword_53AC1 )
    {
      if ( abs(v15 - a5) <= v16 )
        *(_BYTE *)(dword_53A51 + 4 * (v15 + dword_53AC1 * a6) + 7) = 0;
      ++v15;
    }
    for ( i = 0; i < dword_53AC5; ++i )
    {
      if ( abs(i - a6) <= v16 )
        *(_BYTE *)(4 * (a5 + i * dword_53AC1) + dword_53A51 + 7) = 0;
    }
  }
  else
  {
    v21 = dword_53A69;
    v20 = (char *)dword_53A51;
    v10 = sub_4E8A5(0);
    sub_4E390((int)v10, a5, a6, n16, v20, v21);
    if ( a9 )
    {
      v11 = (_BYTE *)(dword_53A51 + 7);
      for ( j = 0; j < dword_53AC5; ++j )
      {
        for ( k = 0; k < dword_53AC1; ++k )
        {
          v14 = abs(k - a5);
          if ( v14 + abs(j - a6) < a9 )
            *v11 = -1;
          v11 += 4;
        }
      }
    }
  }
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v19 = (unsigned __int8 *)(80 * n6 + dword_53A45);
    if ( (v19[5] & 1) == 0
      && *(unsigned __int8 *)(4 * (dword_53AC1 * v19[1] + *v19) + dword_53A51 + 7) != 255
      && (!n2 && !v19[6] || n2 == 1 && v19[6] || n2 == 2 && v19[6] == 1 || n2 == 3 && v19[6] == 2) )
    {
      if ( a7 )
        *(_BYTE *)(v22 + a7) = n6;
      ++v22;
    }
  }
  JUMPOUT(0x22BBE);
}
