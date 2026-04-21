/*
 * func-name: sub_4E127
 * func-address: 0x4e127
 * callers: 0x1c2da, 0x1da16
 * callees: none
 */

char __cdecl sub_4E127(char *src, _BYTE *buf, int n456)
{
  unsigned int count; // ecx
  char n24; // bl
  char n24_1; // bh
  char n456_1; // al
  char v9; // cl
  _BOOL1 v10; // cf
  _BYTE *v11; // edi

  count = 0;
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
          n456_1 = *src++;
          v9 = 2 * n456_1;
          if ( __CFSHL__(n456_1, 1) )
            break;
          v10 = __CFSHL__(v9, 1);
          LOBYTE(count) = 4 * n456_1;
          if ( v10 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 = n24_1 - count - count;
            ++src;
            n456_1 = n456;
            do
            {
              v11 = buf + 1;
              *v11 = n456;
              buf = v11 + 1;
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
            ++src;
            n456_1 = n456;
            memset(buf, n456, count);
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_17;
          }
        }
        v10 = __CFSHL__(v9, 1);
        LOBYTE(count) = 4 * n456_1;
        if ( !v10 )
          break;
        LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
        buf += count;
        n24_1 -= count;
        if ( !n24_1 )
          goto LABEL_17;
      }
      LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
      n24_1 -= count;
      do
      {
        ++src;
        n456_1 = n456;
        *buf++ = n456;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_17:
    buf += n456 - 24;
    --n24;
  }
  while ( n24 );
  return n456_1;
}
