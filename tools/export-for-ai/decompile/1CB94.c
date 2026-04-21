/*
 * func-name: sub_1CB94
 * func-address: 0x1cb94
 * callers: 0x1cac7
 * callees: 0x11eee, 0x3702f, 0x4e22a, 0x4ebab
 */

void __fastcall sub_1CB94(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int n6; // esi
  int i; // eax
  char v17; // cl
  unsigned __int8 *v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int16 *retaddr; // [esp+1Ch] [ebp+0h]
  char *dst; // [esp+20h] [ebp+4h]

  sub_3702F(a1, a2, a3, a4, 56);
  sub_11EEE(a5 + 32904, a2, a3, a4, a5 + 32904, 456, 13, 8, dword_53AA9, dword_53AAD);
  retaddr = (__int16 *)(dword_53AD1 + *(_DWORD *)(dword_53AD1 + 4 * a15 + 6));
  for ( n6 = 0; n6 < n6_0; ++n6 )
  {
    v18 = (unsigned __int8 *)(80 * n6 + dword_53A45);
    if ( (v18[5] & 1) == 0 )
    {
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      if ( v19 >= dword_53AA9 - 1
        && v19 <= dword_51A87 + dword_53AA9
        && v20 >= dword_53AAD - 1
        && v20 <= dword_51A8B + dword_53AAD + 1 )
      {
        dst = (char *)(24 * (v19 - dword_53AA9) + a12 + 32904 + 10944 * (v20 - dword_53AAD) - 2736);
        v17 = 0;
        for ( i = 0; i < a6; ++i )
        {
          if ( *(unsigned __int8 *)(a7 + i) == n6 )
            v17 = 1;
        }
        if ( v17 )
        {
          sub_4EBAB(dst, retaddr, 456);
        }
        else
        {
          v22 = 12 * v21;
          if ( n3_1 == 3 )
            v23 = v22 + 2;
          else
            v23 = n3_1 + v22;
          sub_4E22A((char *)(*(_DWORD *)(dword_53A61 + 4 * v23) + dword_53A61), dst, 456);
        }
      }
    }
  }
  JUMPOUT(0x1317D);
}
