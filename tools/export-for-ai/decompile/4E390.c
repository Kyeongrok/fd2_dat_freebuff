/*
 * func-name: sub_4E390
 * func-address: 0x4e390
 * callers: 0x14237, 0x14818, 0x14b78, 0x1598a, 0x18890
 * callees: 0x4e42c
 */

void __cdecl sub_4E390(int a1, char a2, char a3, char a4, char *a5, int a6)
{
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  char *v9; // ebx
  __int16 v10; // dx

  dword_6006A = a1;
  byte_6006E = a2;
  byte_6006F = a3;
  byte_60070 = a4;
  dword_60064 = (int)a5;
  byte_60068 = *a5;
  byte_60069 = a5[2];
  dword_60060 = a6;
  v6 = 4 * (unsigned __int8)byte_60068;
  v7 = v6;
  LOWORD(v6) = (unsigned __int8)a3 * (unsigned __int8)byte_60068;
  v8 = v6;
  LOWORD(v6) = (unsigned __int8)a2;
  v9 = &a5[4 * v6 + 7 + 4 * v8];
  LOBYTE(v10) = a2;
  HIBYTE(v10) = a3;
  *v9 = a4;
  sub_4E42C(v6, v10, a4, (int)v9, v7, (int)&unk_60079);
}
