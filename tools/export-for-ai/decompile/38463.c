/*
 * func-name: sub_38463
 * func-address: 0x38463
 * callers: 0x413c0, 0x44240
 * callees: 0x37c9c, 0x3f22a, 0x3f46b, 0x3f656
 */

int __usercall sub_38463@<eax>(int a1@<eax>, int a2, const char *a3)
{
  int v3; // edx
  int v5; // eax
  int v6; // edi
  unsigned int n0xE; // ebx
  unsigned int i; // ebx
  unsigned int n0xE_1; // ebx
  unsigned int j; // ebx
  unsigned int n0xE_2; // ebx
  unsigned int k; // ebx
  unsigned int n0xE_3; // ebx
  unsigned int m; // ebx
  unsigned int n0xE_4; // ebx
  unsigned int n; // ebx
  unsigned int n0xE_5; // ebx
  unsigned int ii; // ebx
  unsigned int n0xE_6; // ebx
  unsigned int jj; // ebx

  v3 = ++dword_54178;
  if ( dword_54174 && (v3 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_API_read_INI(0x%X,%s)\n", a2, a3);
  v5 = sub_3F656(a2, a3);
  v6 = v5;
  if ( v5 )
  {
    if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(v5) )
    {
      for ( n0xE = 0; n0xE < 0xE; ++n0xE )
        fprintf(env, " ");
      for ( i = 1; i < dword_54178; ++i )
        fprintf(env, byte_50311);
      fprintf(env, "Driver = %s\n", (const char *)(a2 + 128));
      for ( n0xE_1 = 0; n0xE_1 < 0xE; ++n0xE_1 )
        fprintf(env, " ");
      for ( j = 1; j < dword_54178; ++j )
        fprintf(env, byte_50311);
      fprintf(env, "Device = %s\n", (const char *)a2);
      for ( n0xE_2 = 0; n0xE_2 < 0xE; ++n0xE_2 )
        fprintf(env, " ");
      for ( k = 1; k < dword_54178; ++k )
        fprintf(env, byte_50311);
      fprintf(env, "IO     = %X\n", *(__int16 *)(a2 + 256));
      for ( n0xE_3 = 0; n0xE_3 < 0xE; ++n0xE_3 )
        fprintf(env, " ");
      for ( m = 1; m < dword_54178; ++m )
        fprintf(env, byte_50311);
      fprintf(env, "IRQ    = %d\n", *(__int16 *)(a2 + 258));
      for ( n0xE_4 = 0; n0xE_4 < 0xE; ++n0xE_4 )
        fprintf(env, " ");
      for ( n = 1; n < dword_54178; ++n )
        fprintf(env, byte_50311);
      fprintf(env, "DMA_8  = %d\n", *(__int16 *)(a2 + 260));
      for ( n0xE_5 = 0; n0xE_5 < 0xE; ++n0xE_5 )
        fprintf(env, " ");
      for ( ii = 1; ii < dword_54178; ++ii )
        fprintf(env, byte_50311);
      fprintf(env, "DMA_16 = %d\n", *(__int16 *)(a2 + 262));
    }
  }
  else if ( dword_54174 && (dword_54178 == 1 || dword_54170) && !sub_3F22A(0) )
  {
    for ( n0xE_6 = 0; n0xE_6 < 0xE; ++n0xE_6 )
      fprintf(env, " ");
    for ( jj = 1; jj < dword_54178; ++jj )
      fprintf(env, byte_50311);
    fprintf(env, "Result = %u\n", 0);
  }
  --dword_54178;
  return v6;
}
