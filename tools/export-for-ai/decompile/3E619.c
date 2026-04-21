/*
 * func-name: sub_3E619
 * func-address: 0x3e619
 * callers: 0x3e117
 * callees: 0x3e493, 0x3e4bc, 0x3e4e3, 0x3e536, 0x3e602, 0x3ea52, 0x46e61, 0x46ec2, 0x46f0a
 */

void __usercall sub_3E619(int n0x65@<edx>, _BYTE *a2, _DWORD *a3, int a4, int a5)
{
  _BYTE *v5; // esi
  unsigned __int8 n0x58; // dl
  int v7; // edi
  _BOOL1 v8; // zf
  _BOOL1 v9; // zf
  int v10; // eax
  int v11; // [esp-4h] [ebp-18h]
  int v12; // [esp+0h] [ebp-14h]
  int n0x65_1; // [esp+4h] [ebp-10h]
  int n10; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]
  __int16 __DS__; // [esp+10h] [ebp-4h]

  v5 = a2;
  v15 = 1;
  *(_DWORD *)(a4 + 12) = 0;
  __DS__ = __DS__;
  n0x58 = *(_BYTE *)(a4 + 21);
  v7 = (int)a2;
  if ( n0x58 < 0x69u )
  {
    if ( n0x58 < 0x58u )
      goto LABEL_21;
    if ( n0x58 > 0x58u )
    {
      if ( n0x58 != 100 )
        goto LABEL_21;
      goto LABEL_19;
    }
    goto LABEL_13;
  }
  if ( n0x58 <= 0x69u )
    goto LABEL_19;
  if ( n0x58 < 0x75u )
  {
    v8 = n0x58 == 111;
  }
  else
  {
    if ( n0x58 <= 0x75u )
    {
LABEL_13:
      if ( (*(_BYTE *)(a4 + 20) & 0x20) != 0 )
      {
        *a3 += 4;
        n0x65 = *(_DWORD *)(*a3 - 4);
      }
      else if ( (*(_BYTE *)(a4 + 20) & 0x10) != 0 )
      {
        *a3 += 4;
        n0x65 = *(unsigned __int16 *)(*a3 - 4);
      }
      else
      {
        *a3 += 4;
        n0x65 = *(_DWORD *)(*a3 - 4);
      }
      n0x65_1 = n0x65;
      *(_BYTE *)(a4 + 20) &= 0xF9u;
LABEL_19:
      if ( *(_DWORD *)(a4 + 8) != -1 )
        *(_BYTE *)(a4 + 22) = 32;
LABEL_21:
      LOBYTE(n0x65) = *(_BYTE *)(a4 + 21);
      n10 = 10;
      if ( (unsigned __int8)n0x65 >= 0x65u )
      {
        if ( (unsigned __int8)n0x65 <= 0x65u )
          goto LABEL_54;
        if ( (unsigned __int8)n0x65 >= 0x6Fu )
        {
          if ( (unsigned __int8)n0x65 <= 0x6Fu )
          {
            if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
            {
              *a2 = 48;
              v5 = a2 + 1;
            }
            sub_46F0A(n0x65_1, v5, 8);
            goto LABEL_58;
          }
          if ( (unsigned __int8)n0x65 >= 0x73u )
          {
            if ( (unsigned __int8)n0x65 > 0x73u )
            {
              if ( (unsigned __int8)n0x65 >= 0x75u )
              {
                if ( (unsigned __int8)n0x65 <= 0x75u )
                {
LABEL_90:
                  sub_46EC2(n0x65_1, a2, n10);
                  if ( *(_BYTE *)(a4 + 21) == 88 )
                    sub_3EA52(a2);
                  goto LABEL_58;
                }
                if ( (_BYTE)n0x65 != 120 )
                  goto LABEL_102;
LABEL_86:
                if ( (*(_BYTE *)(a4 + 20) & 1) != 0 && n0x65_1 )
                {
                  *(_BYTE *)(a4 + 23) = 48;
                  *(_BYTE *)(a4 + 24) = *(_BYTE *)(a4 + 21);
                  *(_BYTE *)(a4 + 25) = 0;
                }
                n10 = 16;
                goto LABEL_90;
              }
              goto LABEL_102;
            }
LABEL_68:
            if ( *(char *)(a4 + 20) >= 0 )
            {
              if ( (*(_BYTE *)(a4 + 20) & 0x40) == 0 )
              {
                *a3 += 4;
                v7 = *(_DWORD *)(*a3 - 4);
                if ( !v7 )
                  v7 = a5;
                goto LABEL_78;
              }
              *a3 += 4;
              v7 = *(_DWORD *)(*a3 - 4);
              if ( v7 )
              {
LABEL_78:
                __DS__ = __DS__;
                goto LABEL_79;
              }
            }
            else
            {
              *a3 += 8;
              v7 = *(_DWORD *)(*a3 - 8);
              if ( v7 || *(_WORD *)(*a3 - 4) )
              {
                __DS__ = *(_WORD *)(*a3 - 4);
LABEL_79:
                *(_BYTE *)(a4 + 20) &= 0xF9u;
                v15 = 0;
                if ( *(_BYTE *)(a4 + 21) == 83 )
                {
                  if ( (*(_BYTE *)(a4 + 20) & 0x20) != 0 )
                  {
                    v10 = (unsigned __int16)*MK_FP(__DS__, v7);
                    v7 += 2;
                  }
                  else
                  {
                    v10 = (unsigned __int8)*MK_FP(__DS__, v7++);
                  }
LABEL_104:
                  if ( !v15 )
                    goto LABEL_115;
                  if ( *MK_FP(__DS__, v7) == 45 )
                  {
                    --v10;
                    *(_BYTE *)(a4 + 23) = 45;
                  }
                  else if ( (*(_BYTE *)(a4 + 20) & 2) != 0 )
                  {
                    *(_BYTE *)(a4 + 23) = 32;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(a4 + 20) & 4) == 0 )
                      goto LABEL_112;
                    *(_BYTE *)(a4 + 23) = 43;
                  }
                  *(_BYTE *)(a4 + 24) = 0;
LABEL_112:
                  if ( v10 <= *(_DWORD *)(a4 + 8) )
                    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 8) - v10;
                  else
                    *(_DWORD *)(a4 + 8) = v10;
LABEL_115:
                  if ( *(_BYTE *)(a4 + 22) == 42 )
                  {
                    *(_BYTE *)(a4 + 23) = 0;
                    *(_BYTE *)(a4 + 20) &= 0xF9u;
                  }
                  if ( (*(_DWORD *)(a4 + 8) == -1 || v10 < *(_DWORD *)(a4 + 8)) && *(_BYTE *)(a4 + 21) != 99 )
                    *(_DWORD *)(a4 + 8) = v10;
                  *(_DWORD *)(a4 + 4) -= *(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 8) + sub_3E493(a4 + 23, __DS__, -1);
                  JUMPOUT(0x3E331);
                }
                if ( (*(_BYTE *)(a4 + 20) & 0x20) != 0 )
                {
                  sub_3E4BC(v7, __DS__, *(_DWORD *)(a4 + 8));
                  goto LABEL_104;
                }
                v11 = *(_DWORD *)(a4 + 8);
LABEL_62:
                v10 = sub_3E493(v7, __DS__, v11);
                goto LABEL_104;
              }
            }
            v7 = a5;
            goto LABEL_78;
          }
          if ( (_BYTE)n0x65 != 112 )
            goto LABEL_102;
LABEL_92:
          if ( !*(_DWORD *)(a4 + 4) )
          {
            if ( *(char *)(a4 + 20) >= 0 )
              *(_DWORD *)(a4 + 4) = 8;
            else
              *(_DWORD *)(a4 + 4) = 13;
          }
          *(_BYTE *)(a4 + 20) &= 0xF9u;
          *a3 += 4;
          v12 = *(_DWORD *)(*a3 - 4);
          if ( *(char *)(a4 + 20) >= 0 )
          {
            sub_3E4E3(*(_DWORD *)(*a3 - 4), a2, 8);
          }
          else
          {
            *a3 += 4;
            sub_3E4E3((unsigned __int16)*(_DWORD *)(*a3 - 4), a2, 4);
            a2[4] = 58;
            sub_3E4E3(v12, a2 + 5, 8);
          }
          if ( *(_BYTE *)(a4 + 21) == 80 )
            sub_3EA52(a2);
          goto LABEL_61;
        }
        if ( (unsigned __int8)n0x65 >= 0x67u )
        {
          if ( (unsigned __int8)n0x65 > 0x67u )
          {
            if ( (_BYTE)n0x65 != 105 )
              goto LABEL_102;
            goto LABEL_63;
          }
LABEL_54:
          __DS__ = n0x65;
          v7 = sub_3E602();
          v10 = sub_3E493(v7, n0x65, -1);
          goto LABEL_104;
        }
LABEL_52:
        if ( (*(_BYTE *)(a4 + 20) & 0x10) != 0 )
        {
          *a3 += 4;
          sub_3E536(a2, *(_DWORD *)(*a3 - 4), a4);
          __DS__ = __DS__;
          v7 = (int)a2;
          v10 = sub_3E493((int)a2, __DS__, -1);
          goto LABEL_104;
        }
        goto LABEL_54;
      }
      if ( (unsigned __int8)n0x65 >= 0x50u )
      {
        if ( (unsigned __int8)n0x65 <= 0x50u )
          goto LABEL_92;
        if ( (unsigned __int8)n0x65 < 0x58u )
        {
          if ( (_BYTE)n0x65 != 83 )
            goto LABEL_102;
          goto LABEL_68;
        }
        if ( (unsigned __int8)n0x65 <= 0x58u )
          goto LABEL_86;
        if ( (unsigned __int8)n0x65 < 0x63u )
        {
LABEL_102:
          *(_DWORD *)(a4 + 4) = 0;
          *a2 = *(_BYTE *)(a4 + 21);
          a2[1] = 0;
          v15 = 0;
          goto LABEL_103;
        }
        if ( (unsigned __int8)n0x65 <= 0x63u )
        {
          *a3 += 4;
          *a2 = *(_BYTE *)(*a3 - 4);
          a2[1] = 0;
          v15 = 0;
LABEL_103:
          *(_DWORD *)(a4 + 8) = 1;
          v10 = 1;
          *(_BYTE *)(a4 + 20) &= 0xF9u;
          goto LABEL_104;
        }
LABEL_63:
        if ( (*(_BYTE *)(a4 + 20) & 0x20) != 0 )
        {
          *a3 += 4;
          sub_46F0A(*(_DWORD *)(*a3 - 4), a2, 10);
        }
        else if ( (*(_BYTE *)(a4 + 20) & 0x10) != 0 )
        {
          *a3 += 4;
          sub_46F0A(*(__int16 *)(*a3 - 4), a2, 10);
        }
        else
        {
          *a3 += 4;
          sub_46E61(*(_DWORD *)(*a3 - 4), a2, 10);
        }
LABEL_58:
        if ( !*(_DWORD *)(a4 + 8) && *v5 == 48 )
          *a2 = 0;
LABEL_61:
        v11 = -1;
        goto LABEL_62;
      }
      if ( (unsigned __int8)n0x65 < 0x46u )
      {
        v9 = (_BYTE)n0x65 == 69;
      }
      else
      {
        if ( (unsigned __int8)n0x65 <= 0x46u )
          goto LABEL_52;
        v9 = (_BYTE)n0x65 == 71;
      }
      if ( !v9 )
        goto LABEL_102;
      goto LABEL_54;
    }
    v8 = n0x58 == 120;
  }
  if ( !v8 )
    goto LABEL_21;
  goto LABEL_13;
}
