/*
 * func-name: sub_4E0A2
 * func-address: 0x4e0a2
 * callers: 0x12ac6
 * callees: none
 */

char __cdecl sub_4E0A2(char *src, char *dst, int n456, int a4)
{
  unsigned int count; // ecx
  int value; // eax
  char n24; // bl
  char n24_1; // bh
  char v10; // cl
  _BOOL1 v11; // cf
  char *v12; // edi

  count = 0;
  value = 0;
  n24 = 24;
  do
  {
    n24_1 = 24;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          LOBYTE(value) = *src++;
          v10 = 2 * value;
          if ( __CFSHL__(value, 1) )
            break;
          v11 = __CFSHL__(v10, 1);
          LOBYTE(count) = 4 * value;
          if ( v11 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 = n24_1 - count - count;
            LOBYTE(value) = *src++;
            LOBYTE(value) = *(_BYTE *)(a4 + value);
            do
            {
              v12 = dst + 1;
              *v12 = value;
              dst = v12 + 1;
              --count;
            }
            while ( count );
            if ( !n24_1 )
              goto LABEL_17;
          }
          else
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 -= count;
            LOBYTE(value) = *src++;
            LOBYTE(value) = *(_BYTE *)(a4 + value);
            memset(dst, value, count);
            dst += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_17;
          }
        }
        v11 = __CFSHL__(v10, 1);
        LOBYTE(count) = 4 * value;
        if ( !v11 )
          break;
        LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
        dst += count;
        n24_1 -= count;
        if ( !n24_1 )
          goto LABEL_17;
      }
      LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
      n24_1 -= count;
      do
      {
        LOBYTE(value) = *src++;
        LOBYTE(value) = *(_BYTE *)(a4 + value);
        *dst++ = value;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_17:
    dst += n456 - 24;
    --n24;
  }
  while ( n24 );
  return value;
}
