/*
 * func-name: sub_458F0
 * func-address: 0x458f0
 * callers: 0x45a20
 * callees: 0x3994c
 */

void __cdecl sub_458F0(int a1, int a2)
{
  _DWORD *v2; // eax
  int n9; // esi
  int v4; // ebx
  int v5; // edi
  int n0x2000; // eax
  int v7; // edx
  int v8; // eax
  int n127; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  __int64 v15; // rtt
  int v16; // [esp+0h] [ebp-14h]

  v2 = (_DWORD *)(a1 + 4 * a2);
  n9 = v2[310];
  v16 = v2[342];
  v4 = v2[358];
  v5 = v2[326];
  n0x2000 = (*(_DWORD *)(a1 + 4 * n9 + 148) << 7) | *(_DWORD *)(a1 + 4 * n9 + 84);
  if ( n0x2000 <= 0x2000 )
  {
    if ( n0x2000 >= 0x2000 )
    {
      v8 = 0;
      v7 = 0;
    }
    else
    {
      v8 = 0x2000 - n0x2000;
      v7 = -1;
    }
  }
  else
  {
    v7 = 1;
    v8 = n0x2000 - 0x1FFF;
  }
  n127 = v5 + *(_DWORD *)(a1 + 4 * n9 + 1044) * v7;
  if ( n127 < 0 )
    n127 = 0;
  if ( n127 > 127 )
    n127 = 127;
  v10 = dword_45470[v5];
  v11 = v8 * (dword_45470[n127] - v10);
  v12 = v10 + ((v11 - (__CFSHL__(v11 >> 31, 13) + (v11 >> 31 << 13))) >> 13);
  if ( n9 == 9 )
  {
    v14 = v12 * v4;
    v13 = v12 * v4;
  }
  else
  {
    v13 = v12 * (v10 * v4 / dword_45470[v16]);
    v14 = v13;
  }
  LODWORD(v15) = v13;
  HIDWORD(v15) = v14 >> 31;
  sub_3994C(a1 + 4 * a2, *(_DWORD *)(a1 + 4 * a2 + 1172), v15 / v10);
}
