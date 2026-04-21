/*
 * func-name: sub_1DA16
 * func-address: 0x1da16
 * callers: 0x13fd4, 0x1a30b, 0x1e98c
 * callees: 0x3702f, 0x4e127, 0x4e22a
 */

void __fastcall sub_1DA16(__int32 a1, int a2, int a3, int a4, int a5, int n456, int a7, int n2_1)
{
  unsigned __int8 *v8; // eax
  int v9; // esi
  int v10; // ebp
  int n2; // edx
  int n456_1; // ecx
  int n4; // ecx
  int n3; // ebx
  char *src; // eax
  int v16; // esi
  int v17; // [esp+0h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 40);
  v8 = (unsigned __int8 *)(dword_53A45 + 80 * a7);
  v9 = *v8;
  v10 = v8[1];
  n2 = v8[3];
  v17 = v8[4];
  if ( v9 < dword_53AA9 - 1
    || v9 > dword_51A87 + dword_53AA9
    || v10 < dword_53AAD - 1
    || v10 > dword_51A8B + dword_53AAD + 1 )
  {
    goto LABEL_22;
  }
  if ( v8[3] )
  {
    if ( n2 == 1 )
    {
      n4 = -4;
      goto LABEL_13;
    }
    if ( n2 != 2 )
    {
      n4 = 4;
      goto LABEL_13;
    }
    n456_1 = -n456;
  }
  else
  {
    n456_1 = n456;
  }
  n4 = 4 * n456_1;
LABEL_13:
  if ( v8[4] )
    n3 = n3_0;
  else
    n3 = n3_1;
  if ( n3 == 3 )
    n3 = 1;
  src = (char *)(dword_53A61 + *(_DWORD *)(dword_53A61 + 4 * (n3 + 12 * v8[2] + 3 * n2)));
  v16 = a5 - 6 * n456 + 24 * n456 * (v10 - dword_53AAD) + 24 * (v9 - dword_53AA9);
  if ( n2_1 )
  {
    if ( n2_1 == 2 )
      sub_4E127(src, v16 + n4 * v17, n456);
  }
  else
  {
    sub_4E22A(src, (char *)(v16 + n4 * v17), n456);
  }
LABEL_22:
  JUMPOUT(0x22BBE);
}
