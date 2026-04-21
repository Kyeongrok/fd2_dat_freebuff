/*
 * func-name: sub_184C0
 * func-address: 0x184c0
 * callers: 0x17e0b, 0x1b9de, 0x1bffe
 * callees: 0x15f84, 0x1685c, 0x16886, 0x187d6, 0x3702f, 0x4e8bc
 */

void __fastcall sub_184C0(__int32 a1, int a2, int a3, int a4, int a5, int n8_1, int a7)
{
  int v7; // esi
  int n8; // ebp
  int n61; // eax
  int v10; // ecx
  int n205; // eax
  unsigned int n32; // ecx
  int v13; // eax
  int n5; // edx
  __int32 v15; // eax
  int n999; // eax
  int v17; // edi
  int v18; // ecx
  char *v19; // ebx
  int v20; // [esp+4h] [ebp-2Ch]
  char v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  int n5_1; // [esp+18h] [ebp-18h]
  int v24; // [esp+1Ch] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 88);
  v20 = 80 * a5 + dword_53A45;
  v7 = 0;
  for ( n8 = 0; ; ++n8 )
  {
    if ( n8 >= 8 )
      JUMPOUT(0x11452);
    v18 = 2 * n8 + v20;
    v21 = *(_BYTE *)(v18 + 10);
    if ( v21 >= 0 )
      break;
LABEL_23:
    ;
  }
  v24 = 150 * ((v7 - (__CFSHL__(v7 >> 31, 2) + 4 * (v7 >> 31))) >> 2) + 42;
  v22 = *(unsigned __int8 *)(v18 + 11);
  v19 = sub_4E8BC(v22);
  if ( (unsigned __int8)*v19 >= 0x15u )
  {
    if ( (unsigned __int8)*v19 >= 0x20u )
      n61 = 61;
    else
      n61 = 60;
  }
  else
  {
    n61 = 59;
  }
  if ( (v21 & 0x40) != 0 )
    n61 += 3;
  v10 = 320 * (22 * (v7 & 3) + 101);
  sub_1685C(v10 + v24 + a7 - 29, v24 + a7, (int)v19, v10, v10 + v24 + a7 - 29, 320, dword_53A81, n61);
  n205 = 205;
  if ( n8 == n8_1 )
    n205 = 201;
  sub_15F84(
    (unsigned __int8 *)(22 * (v7 & 3) + 103),
    v22 + 181,
    v24 + a7,
    v10,
    (int)v19,
    arg0,
    v22 + 181,
    v24 + a7 + 320 * (22 * (v7 & 3) + 103),
    320,
    n205,
    76,
    0,
    0,
    0);
  n32 = (unsigned __int8)*v19;
  v13 = 320 * (22 * (v7 & 3) + 107);
  n5 = v13 + v24 + a7 + 93;
  n5_1 = n5;
  v15 = v24 + a7 + 68 + v13;
  if ( n32 >= 0x15 )
  {
    if ( (unsigned __int8)*v19 >= 0x20u )
    {
      if ( n32 != 32 || (n5 = (unsigned __int8)v19[13], n5 != 5) )
      {
        if ( *v19 == 32 && v19[13] == 11 )
        {
          v17 = 320 * (22 * (v7 & 3) + 107);
          sub_1685C(v17 + v24 + a7 + 68, n5, (int)v19, 22 * (v7 & 3) + 107, v17 + v24 + a7 + 68, 320, dword_53A81, 67);
          sub_187D6(v24 + a7 + 93 + v17, 320, *((__int16 *)v19 + 7), 42, 3);
        }
        else
        {
          sub_16886(
            v24 + a7 + 68 + 320 * (22 * (v7 & 3) + 107),
            v24 + a7 + 68,
            22 * (v7 & 3) + 107,
            n32,
            v24 + a7 + 68 + 320 * (22 * (v7 & 3) + 107),
            320,
            dword_53A81,
            41);
        }
        goto LABEL_22;
      }
      sub_1685C(v15, 5, (int)v19, 32, v15, 320, dword_53A81, 66);
      n999 = *((__int16 *)v19 + 7);
    }
    else
    {
      sub_1685C(v15, n5, (int)v19, n32, v15, 320, dword_53A81, 65);
      n999 = *(__int16 *)(v19 + 5);
    }
  }
  else
  {
    sub_1685C(v15, n5, (int)v19, n32, v15, 320, dword_53A81, 64);
    n999 = *(__int16 *)(v19 + 1);
  }
  sub_187D6(n5_1, 320, n999, 42, 3);
LABEL_22:
  ++v7;
  goto LABEL_23;
}
