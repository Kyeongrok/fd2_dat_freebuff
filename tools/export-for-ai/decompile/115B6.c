/*
 * func-name: sub_115B6
 * func-address: 0x115b6
 * callers: 0x18890, 0x18d8c, 0x1bbdc, 0x1cff0
 * callees: 0x11b48, 0x11b9b, 0x11bfa, 0x11c59, 0x12d7b, 0x12dac, 0x12e38, 0x14742, 0x1f183, 0x25a96, 0x34894, 0x3702f, 0x4e8a5
 */

void __fastcall sub_115B6(__int32 a1, int a2, int a3, int a4, int n6, int n6_3, unsigned __int8 *a7)
{
  int n6_4; // ebp
  int v8; // esi
  int v9; // ebx
  int n6_1; // ebx
  unsigned __int8 *v11; // eax
  unsigned __int8 n19; // bl
  char *v13; // ebx
  _BOOL1 v14; // zf
  int n57; // eax
  _BYTE v16[8]; // [esp-4h] [ebp-24h] BYREF
  int v17; // [esp+4h] [ebp-1Ch]
  int n6_2; // [esp+8h] [ebp-18h]
  char v19; // [esp+Ch] [ebp-14h]
  int v20; // [esp+1Ch] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 60);
  v20 = a3;
  n6_4 = n6_3;
  v8 = 0;
  if ( n6 == 6 )
  {
    n6_2 = n6_3;
    n6_4 = 0;
  }
  v17 = dword_51A83;
  if ( dword_51A83 > 1 )
    --v17;
  if ( n6_4 )
  {
    v9 = *a7;
    goto LABEL_7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_41:
      n57 = sub_12DAC();
      if ( n57 == 1 )
LABEL_49:
        JUMPOUT(0x1951B);
      if ( n57 != 57 && n57 != 28 )
        break;
      if ( n6 == 6 )
      {
        v19 = 0;
        for ( n6_1 = 0; n6_1 < n6_0; ++n6_1 )
        {
          v11 = (unsigned __int8 *)(80 * n6_1 + dword_53A45);
          if ( n6_1 != n6_2 && *v11 == dword_53AB1 && v11[1] == dword_53AB5 && !sub_34894(n6_1) )
            v19 = 1;
        }
        if ( !v19 )
        {
          n19 = *(_BYTE *)(dword_53A45 + 80 * n6_2 + 32);
          if ( *(_BYTE *)(dword_53A45 + 80 * n6_2 + 7) == 28 )
            n19 = 1;
          if ( sub_1F183(n6_2) )
            n19 = 19;
          v13 = sub_4E8A5(n19);
          sub_12E38(dword_53AB1, dword_53AB5, v16);
          v14 = v13[v16[5]] == 20;
          goto LABEL_26;
        }
      }
      else if ( n6 != 5 && *(unsigned __int8 *)(dword_53A51 + 4 * (dword_53AB1 + dword_53AC1 * dword_53AB5) + 7) != 255 )
      {
        if ( n6 == 4 )
          goto LABEL_49;
        v14 = sub_14742(dword_53AB1, dword_53AB5, v17, 0, n6) == 0;
LABEL_26:
        if ( !v14 )
          goto LABEL_49;
      }
    }
    if ( (n57 == 44 || n57 == 76) && n6_4 )
    {
      if ( ++v8 == n6_4 )
        v8 ^= n6_4;
      v9 = a7[v8];
LABEL_7:
      if ( *(_BYTE *)(dword_53A45 + 80 * v9 + 7) != 121 )
        sub_12D7B(v9);
      goto LABEL_41;
    }
    if ( n57 == 72 )
    {
      sub_11B48();
      goto LABEL_40;
    }
    if ( n57 == 80 )
    {
      sub_11B9B(80);
      goto LABEL_40;
    }
    if ( n57 == 75 )
      break;
    if ( n57 == 77 )
    {
      sub_11BFA(77);
LABEL_40:
      sub_25A96(dword_53EEC, 0, 1);
    }
  }
  sub_11C59(75);
  goto LABEL_40;
}
