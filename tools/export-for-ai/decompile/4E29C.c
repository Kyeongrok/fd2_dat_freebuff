/*
 * func-name: sub_4E29C
 * func-address: 0x4e29c
 * callers: 0x27079, 0x2810b, 0x2825b, 0x2a0c2, 0x2a694
 * callees: none
 */

char __cdecl sub_4E29C(char *src, char *buf, int a3)
{
  unsigned int count; // ecx
  char n24; // bl
  char n24_1; // bh
  char n73; // al
  char v9; // cl
  _BOOL1 v10; // cf
  char *v11; // edi

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
          n73 = *src++;
          v9 = 2 * n73;
          if ( !__CFSHL__(n73, 1) )
            break;
          v10 = __CFSHL__(v9, 1);
          LOBYTE(count) = 4 * n73;
          if ( v10 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 -= count;
            n73 = 73;
            memset(buf, 73, count);
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_15;
          }
          else
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 -= count;
            qmemcpy(buf, src, count);
            src += count;
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_15;
          }
        }
        v10 = __CFSHL__(v9, 1);
        LOBYTE(count) = 4 * n73;
        if ( v10 )
          break;
        LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
        n24_1 -= count;
        n73 = *src++;
        memset(buf, n73, count);
        buf += count;
        count = 0;
        if ( !n24_1 )
          goto LABEL_15;
      }
      LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
      n24_1 = n24_1 - count - count;
      n73 = *src++;
      do
      {
        v11 = buf + 1;
        *v11 = n73;
        buf = v11 + 1;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_15:
    buf += a3 - 24;
    --n24;
  }
  while ( n24 );
  return n73;
}
