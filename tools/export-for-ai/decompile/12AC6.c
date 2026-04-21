/*
 * func-name: sub_12AC6
 * func-address: 0x12ac6
 * callers: 0x129ec
 * callees: 0x3702f, 0x4e0a2, 0x4e22a
 */

char __fastcall sub_12AC6(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  char v8; // bl
  char *src; // ecx
  char *dst; // eax

  sub_3702F(a1, a2, a3, a4, 28);
  LOBYTE(v7) = dword_53AA9 - 1;
  if ( dword_53AA9 - 1 <= a6 )
  {
    LOBYTE(v7) = dword_51A87 + dword_53AA9;
    if ( dword_51A87 + dword_53AA9 >= a6 )
    {
      LOBYTE(v7) = dword_53AAD - 1;
      if ( dword_53AAD - 1 <= a7 )
      {
        v7 = dword_51A8B + dword_53AAD + 1;
        if ( v7 >= a7 && a7 >= 0 )
        {
          v7 = *(_WORD *)(4 * (a6 + dword_53AC1 * a7) + dword_53A51 + 4) & 0x3FF;
          v8 = *(_BYTE *)(dword_53A69 + 4 * (unsigned __int16)v7);
          if ( (v8 & 8) != 0 )
            v7 += 2 * dword_53A40;
          if ( v8 < 0 )
          {
            src = (char *)(dword_53A5D + *(_DWORD *)(dword_53A5D + 4 * v7 + 10));
            dst = (char *)(10944 * (a7 - dword_53AAD) + a5 + 32904 + 24 * (a6 - dword_53AA9));
            if ( *(unsigned __int8 *)(4 * (a6 + dword_53AC1 * a7) + dword_53A51 + 7) == 255 )
              LOBYTE(v7) = sub_4E22A(src, dst, 456);
            else
              LOBYTE(v7) = sub_4E0A2(
                             src,
                             dst,
                             456,
                             dword_53A6D + *(_DWORD *)(dword_53A6D + 4 * (unsigned __int8)byte_51A97[dword_53C1F] + 6));
          }
        }
      }
    }
  }
  return v7;
}
