/*
 * func-name: sub_1F04A
 * func-address: 0x1f04a
 * callers: 0x15055, 0x1548e, 0x18d8c
 * callees: 0x3702f, 0x37932
 */

int __fastcall sub_1F04A(__int32 a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // ebx
  unsigned __int8 *v7; // esi
  int v8; // edi
  int result; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v6 = (unsigned __int8 *)(dword_53A45 + 80 * a5);
  v7 = (unsigned __int8 *)(dword_53A45 + 80 * a6);
  v8 = abs(*v6 - *v7);
  if ( v8 <= abs(v6[1] - v7[1]) )
  {
    result = v7[1];
    if ( v6[1] <= result )
      v6[3] = 0;
    else
      v6[3] = 2;
  }
  else
  {
    result = *v7;
    if ( *v6 <= result )
      v6[3] = 3;
    else
      v6[3] = 1;
  }
  return result;
}
