/*
 * func-name: sub_4E1A6
 * func-address: 0x4e1a6
 * callers: 0x127e0, 0x2b4fb
 * callees: none
 */

char __cdecl sub_4E1A6(char *src, char *buf, int n456)
{
  unsigned int count; // ecx
  char n24; // bl
  char n24_1; // bh
  char value; // al
  char v9; // cl
  _BOOL1 v10; // cf
  char v11; // al
  char v12; // al
  char *v13; // edi
  char v14; // al

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
          value = *src++;
          v9 = 2 * value;
          if ( __CFSHL__(value, 1) )
            break;
          v10 = __CFSHL__(v9, 1);
          LOBYTE(count) = 4 * value;
          if ( v10 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 = n24_1 - count - count;
            v12 = *src++;
            value = (v12 & 7) + 24;
            do
            {
              v13 = buf + 1;
              *v13 = value;
              buf = v13 + 1;
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
            v11 = *src++;
            value = (v11 & 7) + 24;
            memset(buf, value, count);
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_17;
          }
        }
        v10 = __CFSHL__(v9, 1);
        LOBYTE(count) = 4 * value;
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
        v14 = *src++;
        value = (v14 & 7) + 24;
        *buf++ = value;
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
  return value;
}
