/*
 * func-name: sub_1E0DB
 * func-address: 0x1e0db
 * callers: 0x20c6f, 0x21082, 0x2111a, 0x211a4, 0x21227, 0x213b7, 0x21548, 0x21b18, 0x22721, 0x22866, 0x22997, 0x22af6, 0x22d1b
 * callees: 0x3702f, 0x37b29, 0x37b55
 */

void __fastcall sub_1E0DB(__int32 a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int n3; // edi
  int v8; // esi
  unsigned __int8 *v9; // eax
  int v10; // edx
  int v11; // ebx
  int n4; // ebx
  int v13; // eax
  unsigned int n3_1; // edx
  int v15; // eax
  char _____[20]; // [esp+0h] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 40);
  v17 = a3;
  strcpy(_____, "    ");
  n3 = 3;
  v8 = 0;
  v9 = (unsigned __int8 *)(80 * a7 + dword_53A45);
  v10 = *v9;
  v11 = v9[1];
  if ( v10 > dword_53AA9 - 1
    && v10 < dword_51A87 + dword_53AA9
    && v11 >= dword_53AAD - 1
    && v11 <= dword_51A8B + dword_53AAD )
  {
    for ( n4 = 0; n4 < 4; ++n4 )
    {
      sprintf(_____, "%d", a5);
      v13 = dword_53EC4;
      byte_53D34[n4 + dword_53EC4] = 5 * n4 + 2;
      byte_53DFC[n4 + v13] = a7;
      n3_1 = strlen(_____);
      v15 = n4 + dword_53EC4;
      if ( n3_1 <= n3 )
        byte_53C6C[v15] = 0;
      else
        byte_53C6C[v15] = _____[v8++] + a6 - 48;
      --n3;
    }
    dword_53EC4 += 4;
  }
  JUMPOUT(0x10B46);
}
