/*
 * func-name: sub_1E1DC
 * func-address: 0x1e1dc
 * callers: 0x20c6f, 0x2111a, 0x21227, 0x213b7, 0x21548, 0x22721, 0x22866, 0x22997, 0x22af6, 0x22c04, 0x22d1b
 * callees: 0x3702f
 */

int __fastcall sub_1E1DC(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edx
  int result; // eax
  int n4; // edx
  char v9; // al
  char v10; // al
  _DWORD v11[2]; // [esp+0h] [ebp-8h]

  sub_3702F(a1, a2, a3, a4, 12);
  v11[1] = a3;
  v11[0] = dword_5204A;
  v5 = *(unsigned __int8 *)(80 * a5 + dword_53A45);
  v6 = *(unsigned __int8 *)(80 * a5 + dword_53A45 + 1);
  result = dword_53AA9 - 1;
  if ( v5 > dword_53AA9 - 1 )
  {
    result = dword_51A87 + dword_53AA9;
    if ( v5 < dword_51A87 + dword_53AA9 )
    {
      result = dword_53AAD - 1;
      if ( v6 >= dword_53AAD - 1 )
      {
        result = dword_51A8B + dword_53AAD;
        if ( v6 <= dword_51A8B + dword_53AAD )
        {
          for ( n4 = 0; n4 < 4; ++n4 )
          {
            v9 = 5 * n4;
            if ( n4 == 1 )
              v10 = v9 + 3;
            else
              v10 = v9 + 2;
            byte_53D34[n4 + dword_53EC4] = v10;
            result = dword_53EC4;
            byte_53DFC[n4 + dword_53EC4] = a5;
            byte_53C6C[n4 + result] = *((_BYTE *)v11 + n4);
          }
          dword_53EC4 += 4;
        }
      }
    }
  }
  return result;
}
