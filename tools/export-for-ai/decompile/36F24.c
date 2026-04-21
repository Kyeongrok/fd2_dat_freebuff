/*
 * func-name: sub_36F24
 * func-address: 0x36f24
 * callers: 0x36ff4
 * callees: none
 */

void __usercall sub_36F24(char *a1@<esi>)
{
  _WORD *n655360; // edi
  __int16 n64000_1; // bx
  unsigned int v3; // ecx
  __int16 n64000; // dx
  char v5; // al
  __int16 value; // ax
  unsigned int i; // ecx
  unsigned int count; // ecx

  n655360 = (_WORD *)::n655360;
  n64000_1 = 0;
  v3 = 0;
  n64000 = ::n64000;
  while ( n64000_1 != n64000 )
  {
    v5 = *a1++;
    if ( (v5 & 0xC0) == 0xC0 )
    {
      LOBYTE(v3) = v5 & 0x3F;
      n64000_1 += v3;
      LOBYTE(value) = *a1++;
      HIBYTE(value) = value;
      for ( i = v3 >> 1; i; --i )
        *n655360++ = value;
      __asm { rcl     ecx, 1 }
      memset(n655360, value, count);
      n655360 = (_WORD *)((char *)n655360 + count);
      v3 = 0;
    }
    else
    {
      *(_BYTE *)n655360 = v5;
      n655360 = (_WORD *)((char *)n655360 + 1);
      ++n64000_1;
    }
  }
}
