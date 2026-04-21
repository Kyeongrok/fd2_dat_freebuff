/*
 * func-name: sub_45E21
 * func-address: 0x45e21
 * callers: 0x3c8b4
 * callees: 0x364d4, 0x392d0, 0x3c11c, 0x3c209, 0x45670
 */

int *__cdecl sub_45E21(int a1, int a2, int a3, int n16_1)
{
  int *result; // eax
  int *v5; // ebp
  int *v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int n16; // ecx
  int n16_2; // eax
  int v13; // eax
  int v14; // eax
  int n16_3; // ecx
  int i; // ecx

  sub_45670();
  result = (int *)sub_364D4(1628);
  v5 = result;
  v6 = result;
  if ( result )
  {
    result[1] = a1;
    *result = a2;
    result[2] = a3;
    v7 = a2;
    sub_3C11C(a3, a2, (int)sub_45A20);
    v5[3] = v8;
    v9 = a2;
    sub_3C209(v8, a2, (int)sub_459F5);
    v5[4] = v10;
    *(_DWORD *)(a2 + 432) = v5;
    for ( n16 = 0; n16 < 16; ++n16 )
    {
      v6[n16 + 5] = 0;
      v6[n16 + 21] = 0;
      v6[n16 + 37] = 64;
      v6[n16 + 101] = 0;
      v6[n16 + 165] = 127;
      v6[n16 + 181] = 64;
      v6[n16 + 197] = 127;
      v7 = dword_54348;
      v6[n16 + 261] = dword_54348;
    }
    for ( v6[309] = 0; ; v6[309] = v13 + 1 )
    {
      v14 = n16_1 <= 16 ? n16_1 : 16;
      if ( v14 <= v6[309] )
        break;
      sub_392D0(v14, v7, v9, n16, v6[1]);
      n16 = n16_2;
      v6[v6[309] + 293] = n16_2;
      v13 = v6[309];
      if ( !v6[v13 + 293] )
        break;
      v9 = v13 + 1;
    }
    for ( n16_3 = 0; n16_3 < 16; ++n16_3 )
      v6[n16_3 + 277] = 0;
    for ( i = 0; i < v6[309]; ++i )
      v6[i + 310] = -1;
    v6[406] = 0;
    return v6;
  }
  else
  {
    strcpy(&Corrupted__INI_file_n, "Insufficient memory for HWAVE descriptor\n");
  }
  return result;
}
