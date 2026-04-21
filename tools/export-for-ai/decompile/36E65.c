/*
 * func-name: sub_36E65
 * func-address: 0x36e65
 * callers: 0x36ff4
 * callees: none
 */

void __usercall sub_36E65(char *a1@<esi>)
{
  __int16 n768; // bx
  unsigned int v2; // ecx
  _WORD *buf; // edi
  char v4; // al
  __int16 value; // ax
  unsigned int i; // ecx
  unsigned int count; // ecx

  n768 = 0;
  v2 = 0;
  buf = (_WORD *)::buf;
  while ( n768 != 768 )
  {
    v4 = *a1++;
    if ( (v4 & 0xC0) == 0xC0 )
    {
      LOBYTE(v2) = v4 & 0x3F;
      n768 += v2;
      LOBYTE(value) = *a1++;
      HIBYTE(value) = value;
      for ( i = v2 >> 1; i; --i )
        *buf++ = value;
      __asm { rcl     ecx, 1 }
      memset(buf, value, count);
      buf = (_WORD *)((char *)buf + count);
      v2 = 0;
    }
    else
    {
      *(_BYTE *)buf = v4;
      buf = (_WORD *)((char *)buf + 1);
      ++n768;
    }
  }
}
