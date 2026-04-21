/*
 * func-name: sub_44AF0
 * func-address: 0x44af0
 * callers: 0x3b80f
 * callees: 0x3771c, 0x37b29, 0x382e9
 */

int __cdecl sub_44AF0(int *a1, int a2, int a3)
{
  int v4; // edi
  int v5; // ebp
  _BYTE v6[4]; // [esp+0h] [ebp-24h] BYREF
  __int16 v7; // [esp+4h] [ebp-20h]
  __int16 v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+Eh] [ebp-16h]

  if ( a1[105] && ((int (__cdecl *)(int *, int, int))a1[105])(a1, a2, a3) )
    return 1;
  v4 = a1[5];
  v5 = a1[106];
  byte_5372A = a3;
  byte_5372B = a2;
  a1[5] = v4 + 1;
  if ( v5 > 0 )
  {
    v7 = *((_WORD *)a1 + 212);
    sub_382E9(*a1, *a1, 1282, (int)v6, 0);
    a1[106] = 0;
    a1[107] = 0;
  }
  memmove(a1[2] + 256, aTimb_0, 12);            // "TIMB"
  sub_382E9((int)&v8, *a1, 1283, 0, (int)&v8);
  --a1[5];
  if ( !v8 )
    sprintf(
      &Corrupted__INI_file_n,
      "Driver could not install timbre bank %u, patch %u\n",
      (__int16)v9 >> 8,
      (unsigned __int8)v9);
  return v8;
}
