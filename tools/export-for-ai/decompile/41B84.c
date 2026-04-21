/*
 * func-name: sub_41B84
 * func-address: 0x41b84
 * callers: 0x41ddb, 0x41ec1, 0x41fee
 * callees: 0x39694, 0x39716, 0x39798, 0x3994c, 0x41b1c, 0x41b26
 */

void __cdecl sub_41B84(_DWORD *a1, int a2)
{
  int v2; // ebp
  unsigned __int8 *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int n0xFFFF; // ebx
  unsigned int v10; // ebp
  unsigned __int64 n128000000; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v2 = 0;
  while ( !v2 )
  {
    v3 = (unsigned __int8 *)a1[542];
    v4 = *v3;
    switch ( *v3 )
    {
      case 0u:
        sub_41B26(v4, (int)a1);
        return;
      case 1u:
        if ( !a1[546] )
          goto LABEL_39;
        v5 = sub_41B1C((_DWORD *)a1[542]);
        sub_39694((int)(v3 + 6), (int)a1, (int)(v3 + 6), v5 - 2);
        sub_3994C(0xF4240 / (256 - (unsigned int)v3[4]), (int)a1, 0xF4240 / (256 - (unsigned int)v3[4]));
        v7 = sub_39716(v6, (int)a1, 0, 0);
        goto LABEL_8;
      case 4u:
        v8 = a1[545];
        if ( v8 != -1 )
          a1[546] = *((__int16 *)v3 + 2) == v8;
        goto LABEL_39;
      case 6u:
        a1[543] = v3;
        a1[544] = *((unsigned __int16 *)v3 + 2);
        goto LABEL_39;
      case 7u:
        n0xFFFF = a1[544];
        if ( n0xFFFF == 0xFFFF || (a1[544] = n0xFFFF - 1, n0xFFFF) )
          v3 = (unsigned __int8 *)a1[543];
        goto LABEL_39;
      case 8u:
        if ( !a1[546] )
          goto LABEL_39;
        if ( v3[7] )
        {
          sub_39716(v4, (int)a1, 2, 0);
          v10 = (unsigned int)sub_10000 - *((unsigned __int16 *)v3 + 2);
          n128000000 = 128000000;
        }
        else
        {
          sub_39716(v4, (int)a1, 0, 0);
          v10 = (unsigned int)sub_10000 - *((unsigned __int16 *)v3 + 2);
          n128000000 = 256000000;
        }
        sub_3994C(n128000000 / v10, (int)a1, n128000000 / v10);
        v3 += sub_41B1C(v3) + 4;
        v12 = sub_41B1C(v3);
        v7 = sub_39694((int)(v3 + 6), (int)a1, (int)(v3 + 6), v12 - 2);
LABEL_8:
        if ( a2 )
          goto LABEL_37;
        goto LABEL_38;
      case 9u:
        if ( !a1[546] )
          goto LABEL_39;
        v13 = sub_41B1C((_DWORD *)a1[542]);
        v14 = sub_39694((int)(v3 + 16), (int)a1, (int)(v3 + 16), v13 - 12);
        sub_3994C(v14, (int)a1, *((_DWORD *)v3 + 1));
        if ( v3[9] != 1 || *((_WORD *)v3 + 5) )
        {
          if ( v3[9] != 2 || *((_WORD *)v3 + 5) )
          {
            if ( v3[9] == 1 && *((_WORD *)v3 + 5) == 4 )
            {
              v7 = sub_39716(v7, (int)a1, 1, 1);
            }
            else if ( v3[9] == 2 && *((_WORD *)v3 + 5) == 4 )
            {
              v7 = sub_39716(v7, (int)a1, 3, 1);
            }
          }
          else
          {
            v7 = sub_39716(v7, (int)a1, 2, 0);
          }
        }
        else
        {
          v7 = sub_39716(v7, (int)a1, 0, 0);
        }
        if ( a2 )
LABEL_37:
          sub_39798(v7, (int)a1);
LABEL_38:
        v2 = 1;
LABEL_39:
        a1[542] = &v3[sub_41B1C(v3) + 4];
        break;
      default:
        goto LABEL_39;
    }
  }
}
