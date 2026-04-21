/*
 * func-name: sub_127E0
 * func-address: 0x127e0
 * callers: 0x127a9, 0x1366a, 0x1741c, 0x176b4, 0x179d5, 0x1db65, 0x21548, 0x32999
 * callees: 0x3702f, 0x4e1a6, 0x4e22a
 */

void __fastcall sub_127E0(__int32 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int8 *v5; // eax
  int v6; // ebp
  int v7; // ebx
  int n2; // esi
  int n4; // ecx
  int v10; // ebx
  int n3; // edx
  char *src; // eax
  int v13; // ebx
  char v14; // [esp+0h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 40);
  if ( MEMORY[0x46C] != dword_53A08 )
  {
    LOBYTE(dword_53A04) = dword_53A04 ^ 1;
    dword_53A08 = MEMORY[0x46C];
  }
  v5 = (unsigned __int8 *)(80 * a5 + dword_53A45);
  v6 = *v5;
  v7 = v5[1];
  n2 = v5[3];
  v14 = v5[5];
  if ( v6 >= dword_53AA9 - 1
    && v6 <= dword_51A87 + dword_53AA9
    && v7 >= dword_53AAD - 1
    && v7 <= dword_51A8B + dword_53AAD + 1 )
  {
    if ( v5[3] )
    {
      if ( n2 == 1 )
      {
        n4 = -4;
      }
      else if ( n2 == 2 )
      {
        n4 = -1824;
      }
      else
      {
        n4 = 4;
      }
    }
    else
    {
      n4 = 1824;
    }
    v10 = 24 * (v6 - dword_53AA9) + 10944 * (v7 - dword_53AAD) + n4 * v5[4];
    if ( v5[38] )
      v10 += dword_53A04;
    if ( v5[4] )
      n3 = n3_0;
    else
      n3 = n3_1;
    if ( n3 == 3 )
      n3 = 1;
    if ( v5[38] )
      n3 = 0;
    src = (char *)(dword_53A61 + *(_DWORD *)(dword_53A61 + 4 * (n3 + 12 * v5[2] + 3 * n2)));
    v13 = v10 + 30168;
    if ( v13 >= 0 )
    {
      if ( v14 < 0 )
        sub_4E1A6(src, v13 + dword_53A49, 456);
      else
        sub_4E22A(src, (char *)(dword_53A49 + v13), 456);
    }
  }
  JUMPOUT(0x10B46);
}
