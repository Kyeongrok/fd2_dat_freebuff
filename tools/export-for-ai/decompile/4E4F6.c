/*
 * func-name: sub_4E4F6
 * func-address: 0x4e4f6
 * callers: 0x14121, 0x14b78, 0x18890
 * callees: 0x4e5cc, 0x4e751
 */

int __cdecl sub_4E4F6(int a1, char a2, char a3, char a4, int a5, char a6, char a7, char n2, char *a9, int a10)
{
  __int16 v1; // cx
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  char *v15; // ebx
  __int16 v16; // dx
  int v17; // eax

  dword_6006A = a1;
  byte_6006E = a2;
  byte_6006F = a3;
  byte_60070 = a4;
  dword_60073 = a5;
  LOBYTE(word_60071) = a6;
  HIBYTE(word_60071) = a7;
  ::n2 = n2;
  dword_60064 = (int)a9;
  byte_60068 = *a9;
  byte_60069 = a9[2];
  dword_60060 = a10;
  v12 = 4 * (unsigned __int8)byte_60068;
  v13 = v12;
  LOWORD(v12) = (unsigned __int8)a3 * (unsigned __int8)byte_60068;
  v14 = v12;
  LOWORD(v12) = (unsigned __int8)a2;
  v15 = &a9[4 * v12 + 7 + 4 * v14];
  LOBYTE(v16) = a2;
  HIBYTE(v16) = a3;
  LOBYTE(v1) = a4;
  *v15 = a4;
  byte_60077 = 0;
  byte_60078 = -1;
  LOWORD(v17) = sub_4E751((unsigned __int8)a2, v16);
  sub_4E5CC(v17, v16, v1, (int)v15, v13, (int)&unk_60079);
  return (unsigned __int8)byte_60078;
}
