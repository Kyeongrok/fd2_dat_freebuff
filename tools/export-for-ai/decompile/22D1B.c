/*
 * func-name: sub_22D1B
 * func-address: 0x22d1b
 * callers: 0x20c6f, 0x22cda, 0x2d80d
 * callees: 0x11cac, 0x1c2da, 0x1c4cc, 0x1c81f, 0x1e0db, 0x1e1dc, 0x3702f, 0x4ebe3
 */

void __fastcall sub_22D1B(__int32 a1, int n50, int n100, int a4, int a5, int n9, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // eax
  __int32 v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // edi
  unsigned __int8 n25; // dl
  __int32 v15; // eax
  int v16; // eax
  __int32 i; // [esp+0h] [ebp-14h]

  v9 = sub_3702F(a1, n50, n100, a4, 40);
  v10 = sub_1C4CC(v9, n50, n100, a4, a5, n9, a7, a8);
  sub_1C2DA(v10, n50, n100, a4, a5, n9, a7, a8);
  for ( i = 0; ; ++i )
  {
    if ( i >= a7 )
    {
      sub_11CAC(i, n50, n100, a4, 0);
      if ( dword_53EC4 )
        JUMPOUT(0x22A7B);
      JUMPOUT(0x22BBE);
    }
    v12 = (unsigned __int8 *)(i + a8);
    v13 = 80 * *(unsigned __int8 *)(i + a8) + dword_53A45;
    n25 = *(_BYTE *)(v13 + 32);
    if ( *(_BYTE *)(v13 + a9) || n25 == 25 || n25 == 26 )
      break;
    n100 = 100;
    n50 = sub_4EBE3(n25) % 100;
    if ( n50 >= 50 )
    {
      v11 = *v12;
LABEL_3:
      sub_1E1DC(v11, n50, n100, a4, v11);
      continue;
    }
    sub_1C81F(*v12, n50, 100, a4, *v12, 10);
    sub_1E0DB(v15, *v12, 100, a4, v15, 94, *v12);
    n100 = 4;
    n50 = sub_4EBE3(v16) % 4 + 2;
    *(_BYTE *)(v13 + a9) = n50;
    arg4_0 += 8 * *(unsigned __int8 *)(v13 + 33);
  }
  n50 = i + a8;
  v11 = *(unsigned __int8 *)(i + a8);
  goto LABEL_3;
}
