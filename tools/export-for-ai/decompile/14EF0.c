/*
 * func-name: sub_14EF0
 * func-address: 0x14ef0
 * callers: 0x13a9f
 * callees: 0x14237, 0x15055, 0x15311, 0x1548e, 0x1567e, 0x1598a, 0x3702f, 0x4e866
 */

void __fastcall sub_14EF0(__int32 a1, int a2, int a3, int n100, int a5, int a6)
{
  int v6; // eax
  int v7; // edx
  char v8; // bl
  unsigned __int16 *v9; // eax
  int v10; // [esp+0h] [ebp-14h]

  v6 = sub_3702F(a1, a2, a3, n100, 32);
  sub_14237(v6, a2, a3, n100, a5, a6);
  sub_1598A(a5, a6);
  sub_1567E(a5, a6);
  v7 = dword_53A45 + 80 * a5;
  v8 = *(_BYTE *)(v7 + 52) & 0x40;
  v10 = *(unsigned __int16 *)(v7 + 72) - *(unsigned __int16 *)(dword_53A45 + 80 * dword_53C4B + 74);
  if ( n8 < 6 && n6_3 < 6 && n6_4 < 6 )
LABEL_24:
    JUMPOUT(0x22BBE);
  if ( n8 > n6_3 && n8 > n6_4 )
    goto LABEL_6;
  if ( n8 == n6_3 && n8 > n6_4 )
  {
    v9 = (unsigned __int16 *)sub_4E866(n11);
    if ( n11 >= 11 )
    {
      if ( !v8 )
        goto LABEL_11;
    }
    else if ( *v9 >= v10 )
    {
LABEL_11:
      sub_15311(a5, a6);
      goto LABEL_23;
    }
LABEL_6:
    sub_1548E(a5, a6);
LABEL_23:
    dword_51A83 = 0;
    goto LABEL_24;
  }
  if ( n8 == n6_4 && n8 > n6_3 )
  {
    if ( v8 )
      goto LABEL_6;
  }
  else
  {
    if ( n6_3 > n8 && n6_3 >= n6_4 )
      goto LABEL_11;
    if ( n6_4 <= n8 || n6_4 <= n6_3 )
      goto LABEL_23;
  }
  sub_15055(a5, a6);
  goto LABEL_23;
}
