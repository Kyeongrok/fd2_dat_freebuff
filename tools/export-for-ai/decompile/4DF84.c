/*
 * func-name: sub_4DF84
 * func-address: 0x4df84
 * callers: 0x1cd17
 * callees: none
 */

char __cdecl sub_4DF84(char *a1, char *buf, int n456, char a4, char a5)
{
  unsigned int count; // ecx
  char n24; // bl
  char n24_1; // bh
  char value; // al
  char v11; // cl
  _BOOL1 v12; // cf
  char v13; // al
  char v14; // al
  char *v15; // edi
  char v16; // al
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

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
          value = *a1++;
          v11 = 2 * value;
          if ( __CFSHL__(value, 1) )
            break;
          v12 = __CFSHL__(v11, 1);
          LOBYTE(count) = 4 * value;
          if ( v12 )
          {
            LOBYTE(count) = ((unsigned __int8)count >> 2) + 1;
            n24_1 = n24_1 - count - count;
            v14 = *a1++;
            value = a4 + ((a5 + v14) & 7);
            do
            {
              v15 = buf + 1;
              *v15 = value;
              buf = v15 + 1;
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
            v13 = *a1++;
            value = a4 + ((a5 + v13) & 7);
            memset(buf, value, count);
            buf += count;
            count = 0;
            if ( !n24_1 )
              goto LABEL_17;
          }
        }
        v12 = __CFSHL__(v11, 1);
        LOBYTE(count) = 4 * value;
        if ( !v12 )
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
        v16 = *a1++;
        value = a4 + ((a5 + v16) & 7);
        *buf++ = value;
        --count;
      }
      while ( count );
    }
    while ( n24_1 );
LABEL_17:
    buf = (char *)&savedregs + (_DWORD)buf;
    --n24;
  }
  while ( n24 );
  return value;
}
