/*
 * func-name: sub_27079
 * func-address: 0x27079
 * callers: 0x26eda
 * callees: 0x2810b, 0x3702f, 0x4e29c, 0x4ebff, 0x4ed34
 */

int __fastcall sub_27079(__int32 a1, int a2, int a3, int a4, _DWORD *dst, int n3)
{
  int result; // eax
  int n3_1; // ebp
  int n4; // edi
  int n3_2; // esi

  sub_3702F(a1, a2, a3, a4, 32);
  if ( (n3_4 & 1) != 0 )
    ++::n4;
  if ( ::n4 == 4 )
    ::n4 = 0;
  result = n3_4 / 2;
  switch ( n3 )
  {
    case 0:
      return sub_4ED34(
               dst[n3_3] + 709680,
               *(_DWORD *)(dword_53F66 + 4 * (2 * n3_3 + 3 + result) + 6) + dword_53F66,
               320);
    case 1:
    case 3:
      if ( n3 == 3 )
        sub_2810B(n3_3, 655360);
      if ( dword_53F4E )
        sub_4EBFF(694058, *(_DWORD *)(dword_53F66 + 4 * (n3_4 / 2 + 11) + 6) + dword_53F66, 320);
      else
        sub_4EBFF(694058, *(_DWORD *)(dword_53F66 + 74) + dword_53F66, 320);
      if ( dword_53F4E + 6 >= n3_5 )
        return sub_4EBFF(713578, *(_DWORD *)(dword_53F66 + 74) + dword_53F66, 320);
      else
        return sub_4EBFF(713578, *(_DWORD *)(dword_53F66 + 4 * (n3_4 / 2 + 13) + 6) + dword_53F66, 320);
    case 2:
      if ( dword_53F4E )
        sub_4EBFF(694058, *(_DWORD *)(dword_53F66 + 4 * (result + 11) + 6) + dword_53F66, 320);
      else
        sub_4EBFF(694058, *(_DWORD *)(dword_53F66 + 74) + dword_53F66, 320);
      if ( dword_53F4E + 3 >= n3_5 )
        result = sub_4EBFF(713578, *(_DWORD *)(dword_53F66 + 74) + dword_53F66, 320);
      else
        result = sub_4EBFF(713578, *(_DWORD *)(dword_53F66 + 4 * (n3_4 / 2 + 13) + 6) + dword_53F66, 320);
      n3_1 = n3_5;
      if ( n3_5 > 3 )
        n3_1 = 3;
      n4 = ::n4;
      if ( ::n4 == 3 )
        n4 = 1;
      for ( n3_2 = 0; n3_2 < n3_1; ++n3_2 )
        result = sub_4E29C(
                   dword_53A61
                 + *(_DWORD *)(dword_53A61 + 48 * *(unsigned __int8 *)(dword_53F62 + n3_2 + dword_53F4E) + 4 * n4),
                   320 * (26 * n3_2 + 117) + 655374,
                   320);
      break;
  }
  return result;
}
