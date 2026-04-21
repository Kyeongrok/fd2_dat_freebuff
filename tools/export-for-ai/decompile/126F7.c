/*
 * func-name: sub_126F7
 * func-address: 0x126f7
 * callers: 0x122dc
 * callees: 0x3702f, 0x4e22a
 */

char __fastcall sub_126F7(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char result; // al

  sub_3702F(a1, a2, a3, a4, 24);
  result = a5;
  if ( a5 >= dword_53AA9 )
  {
    result = dword_51A87 + dword_53AA9;
    if ( dword_51A87 + dword_53AA9 > a5 )
    {
      result = a6;
      if ( a6 >= dword_53AAD )
      {
        result = dword_51A8B + dword_53AAD;
        if ( dword_51A8B + dword_53AAD > a6 )
          return sub_4E22A(
                   (char *)(*(_DWORD *)(dword_53A4D + 4 * a7 + 6) + dword_53A4D),
                   (char *)(24 * (a5 - dword_53AA9) + 10944 * (a6 - dword_53AAD) + dword_53A49 + 32904),
                   456);
      }
    }
  }
  return result;
}
