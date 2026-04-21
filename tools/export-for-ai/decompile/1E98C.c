/*
 * func-name: sub_1E98C
 * func-address: 0x1e98c
 * callers: 0x1e856
 * callees: 0x15e71, 0x15f0e, 0x1b722, 0x1b83d, 0x1da16, 0x25a96, 0x3702f, 0x3790a, 0x4e87d, 0x4e8bc
 */

void __fastcall sub_1E98C(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  unsigned __int8 *v10; // edi
  unsigned __int8 *v11; // eax
  int i; // ebx
  bool v13; // eax
  int v14; // eax
  int v15; // esi
  __int32 v16; // eax
  int n255; // eax
  bool v18; // eax
  int v19; // [esp+0h] [ebp-1Ch]
  int v20; // [esp+4h] [ebp-18h]
  int v21; // [esp+8h] [ebp-14h]

  v6 = sub_3702F(a1, a2, a3, a4, 56);
  v7 = sub_1B83D(v6, a2, a3, a4, a5, 0);
  v8 = sub_1B722(v7, a2, a3, a4, a5, v7);
  v9 = sub_4E8BC(v8);
  v10 = (unsigned __int8 *)sub_4E87D((unsigned __int8)*v9);
  v21 = *v10;
  v11 = (unsigned __int8 *)(80 * a6 + dword_53A45);
  v20 = 24 * (*v11 - dword_53AA9) + 4;
  v19 = 24 * (v11[1] - dword_53AAD);
  for ( i = 0; i < v21; ++i )
  {
    n255 = v10[2 * i + 2];
    if ( n255 != 255 )
    {
      if ( byte_53C6B )
        sub_25A96(dword_53B0F, 4, 1);
      else
        sub_25A96(dword_53B0F, n255, 1);
    }
    v13 = byte_53C6B == 0;
    if ( v13 && i == 0 )
    {
      sub_1DA16(v13, a2, i, a4, 656644, 320, a6, 2);
    }
    else
    {
      v18 = i == 1;
      if ( byte_53C6B == 0 && v18 )
        sub_1DA16(v18, a2, i, a4, 656644, 320, a6, 0);
    }
    sub_15F0E(v10[2 * i + 1], a2, i, a4, dword_53AD1, 655360, 320, v20, v19, v10[2 * i + 1]);
    v15 = v14;
    v16 = j___delay(80);
    sub_15E71(v16, a2, i, a4, v15, 655360, 320);
  }
  JUMPOUT(0x1317D);
}
