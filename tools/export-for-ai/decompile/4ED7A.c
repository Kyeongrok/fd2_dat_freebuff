/*
 * func-name: sub_4ED7A
 * func-address: 0x4ed7a
 * callers: 0x15f84
 * callees: none
 */

void __cdecl __spoils<> sub_4ED7A(
        int a1,
        int n10,
        int n658255,
        unsigned __int16 argC,
        char arg10,
        char arg14,
        int arg18)
{
  int arg18_1; // eax
  __int16 arg18_2; // bx
  int value; // eax
  char *n658255_1; // edi
  char n16; // bl
  __int16 *v12; // esi
  char *n658255_2; // edi
  char arg10_1; // dl
  char arg14_1; // dh
  char n16_1; // ch
  __int16 v17; // ax
  __int16 v18; // ax
  char v19; // t0
  char n16_2; // cl
  _BOOL1 v21; // cf
  char *n658255_3; // [esp-24h] [ebp-24h]

  dword_627AC = a1;
  n10_2 = n10;
  ::n658255 = n658255;
  ::argC = argC;
  ::arg10 = arg10;
  ::arg14 = arg14;
  arg18_1 = arg18;
  ::arg18 = arg18;
  if ( (_BYTE)arg18 )
  {
    BYTE1(arg18_1) = arg18;
    arg18_2 = arg18_1;
    value = arg18_1 << 16;
    LOWORD(value) = arg18_2;
    n658255_1 = (char *)::n658255;
    n16 = 16;
    do
    {
      memset32(n658255_1, value, 4u);
      n658255_1 += argC;
      --n16;
    }
    while ( n16 );
  }
  if ( n10_2 != 10 )
  {
    v12 = (__int16 *)(32 * n10_2 + dword_627AC);
    n658255_2 = (char *)::n658255;
    arg10_1 = ::arg10;
    arg14_1 = ::arg14;
    n16_1 = 16;
    do
    {
      v17 = *v12++;
      v19 = v17;
      LOBYTE(v18) = HIBYTE(v17);
      HIBYTE(v18) = v19;
      n658255_3 = n658255_2;
      n16_2 = 16;
      do
      {
        v21 = __CFSHL__(v18, 1);
        v18 *= 2;
        if ( v21 )
        {
          *n658255_2 = arg10_1;
          n658255_2[argC - 1] = arg14_1;
          n658255_2[argC] = arg14_1;
        }
        ++n658255_2;
        --n16_2;
      }
      while ( n16_2 );
      n658255_2 = &n658255_3[argC];
      --n16_1;
    }
    while ( n16_1 );
  }
}
