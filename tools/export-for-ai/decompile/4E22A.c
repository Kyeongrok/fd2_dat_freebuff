/*
 * func-name: sub_4E22A
 * func-address: 0x4e22a
 * callers: 0x11eee, 0x126f7, 0x127e0, 0x12ac6, 0x1399c, 0x1acf3, 0x1cb94, 0x1da16, 0x265ec, 0x2b4fb, 0x344b4
 * callees: none
 */

char __cdecl sub_4E22A(char *src, char *dst, int arg8)
{
  unsigned int count; // ecx
  char n24; // bl
  char n24_1; // bh
  char value; // al
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
          value = *src++;
          v9 = 2 * value;
          if ( !__CFSHL__(value, 1) )
            break;
          v10 = __CFSHL__(v9, 1);
          LOBYTE(count) = 4 * value;
          if ( v10 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            dst += count;
            n24_1 -= count;
            if ( !n24_1 )
              goto LABEL_15;
          }
          else
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 -= count;
            qmemcpy(dst, src, count);
            src += count;
            dst += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_15;
          }
        }
        v10 = __CFSHL__(v9, 1);
        LOBYTE(count) = 4 * value;
        if ( v10 )
          break;
        LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
        n24_1 -= count;
        value = *src++;
        memset(dst, value, count);
        dst += count;
        count = 0;
        if ( !n24_1 )
          goto LABEL_15;
      }
      LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
      n24_1 = n24_1 - count - count;
      value = *src++;
      do
      {
        v11 = dst + 1;
        *v11 = value;
        dst = v11 + 1;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_15:
    dst += arg8 - 24;
    --n24;
  }
  while ( n24 );
  return value;
}
