/*
 * func-name: sub_4E016
 * func-address: 0x4e016
 * callers: 0x11eee
 * callees: none
 */

char __cdecl sub_4E016(char *src, _BYTE *buf, int arg8, int argC)
{
  unsigned int count; // ecx
  int value; // eax
  char n24; // bl
  char n24_1; // bh
  char v10; // al
  char v11; // cl
  _BOOL1 v12; // cf
  _BYTE *v13; // edi
  unsigned __int8 v14; // cl

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
          v10 = *src++;
          v11 = 2 * v10;
          if ( __CFSHL__(v10, 1) )
            break;
          v12 = __CFSHL__(v11, 1);
          LOBYTE(count) = 4 * v10;
          if ( v12 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 = n24_1 - count - count;
            LOBYTE(value) = *src++;
            LOBYTE(value) = *(_BYTE *)(argC + value);
            do
            {
              v13 = buf + 1;
              *v13 = value;
              buf = v13 + 1;
              --count;
            }
            while ( count );
            if ( !n24_1 )
              goto LABEL_19;
          }
          else
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 -= count;
            LOBYTE(value) = *src++;
            LOBYTE(value) = *(_BYTE *)(argC + value);
            memset(buf, value, count);
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_19;
          }
        }
        v12 = __CFSHL__(v11, 1);
        v14 = 4 * v10;
        if ( v12 )
          break;
        LOBYTE(count) = (v14 >> 2) + 1;
        n24_1 -= count;
        do
        {
          LOBYTE(value) = *src++;
          LOBYTE(value) = *(_BYTE *)(argC + value);
          *buf++ = value;
          --count;
        }
        while ( count );
        if ( !n24_1 )
          goto LABEL_19;
      }
      LOBYTE(count) = (v14 >> 2) + 1;
      n24_1 -= count;
      do
      {
        LOBYTE(value) = *buf;
        LOBYTE(value) = *(_BYTE *)(argC + value);
        *buf++ = value;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_19:
    buf += arg8 - 24;
    --n24;
  }
  while ( n24 );
  return value;
}
