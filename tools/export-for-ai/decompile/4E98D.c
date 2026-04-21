/*
 * func-name: sub_4E98D
 * func-address: 0x4e98d
 * callers: 0x10652, 0x16886, 0x1acf3, 0x1aeb1, 0x1f73f, 0x1f894, 0x26152, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2e9a8, 0x2eb9f, 0x2f4d4, 0x2f631, 0x2fb2c, 0x2fe14, 0x2ff01, 0x31529, 0x31c49, 0x33faf
 * callees: none
 */

char __cdecl sub_4E98D(__int16 *arg0, int arg4, int arg8, int argC, int arg10, int value_1)
{
  char *src; // esi
  _BYTE *dst; // edi
  int v8; // edx
  unsigned int count_1; // ecx
  __int16 count; // bx
  char value; // al
  char v12; // cl
  _BOOL1 v13; // cf
  _BYTE *v14; // edi
  __int16 count_3; // bx
  char v16; // cl
  _BYTE *v17; // edi
  __int16 count_2; // bp
  char v19; // cl
  char v20; // al
  char v21; // al
  _BYTE *v22; // edi
  char v23; // al

  ::count = *arg0;
  src = (char *)(arg0 + 2);
  word_627B6 = arg0[1];
  dst = (_BYTE *)(arg4 + arg10 * arg8 + argC);
  v8 = arg10 - (unsigned __int16)::count;
  count_1 = 0;
  if ( value_1 == -1 )
  {
    do
    {
      count = ::count;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            value = *src++;
            v12 = 2 * value;
            if ( !__CFSHL__(value, 1) )
              break;
            v13 = __CFSHL__(v12, 1);
            LOBYTE(count_1) = 4 * value;
            if ( v13 )
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              dst += count_1;
              count -= count_1;
              if ( !count )
                goto LABEL_17;
            }
            else
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              count -= count_1;
              qmemcpy(dst, src, count_1);
              src += count_1;
              dst += count_1;
              count_1 = 0;
              if ( !count )
                goto LABEL_17;
            }
          }
          v13 = __CFSHL__(v12, 1);
          LOBYTE(count_1) = 4 * value;
          if ( v13 )
            break;
          LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
          count -= count_1;
          value = *src++;
          memset(dst, value, count_1);
          dst += count_1;
          count_1 = 0;
          if ( !count )
            goto LABEL_17;
        }
        LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
        count = count - count_1 - count_1;
        value = *src++;
        do
        {
          v14 = dst + 1;
          *v14 = value;
          dst = v14 + 1;
          --count_1;
        }
        while ( count_1 );
      }
      while ( count );
LABEL_17:
      dst += v8;
      --word_627B6;
    }
    while ( word_627B6 );
  }
  else if ( (unsigned __int16)value_1 > 0xFFu )
  {
    do
    {
      count_2 = ::count;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            value = *src++;
            v19 = 2 * value;
            if ( __CFSHL__(value, 1) )
              break;
            v13 = __CFSHL__(v19, 1);
            LOBYTE(count_1) = 4 * value;
            if ( v13 )
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              count_2 = count_2 - count_1 - count_1;
              v21 = *src++;
              value = value_1 + ((BYTE1(value_1) + v21) & 7);
              do
              {
                v22 = dst + 1;
                *v22 = value;
                dst = v22 + 1;
                --count_1;
              }
              while ( count_1 );
              if ( !count_2 )
                goto LABEL_49;
            }
            else
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              count_2 -= count_1;
              v20 = *src++;
              value = value_1 + ((BYTE1(value_1) + v20) & 7);
              memset(dst, value, count_1);
              dst += count_1;
              count_1 = 0;
              if ( !count_2 )
                goto LABEL_49;
            }
          }
          v13 = __CFSHL__(v19, 1);
          LOBYTE(count_1) = 4 * value;
          if ( !v13 )
            break;
          LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
          dst += count_1;
          count_2 -= count_1;
          if ( !count_2 )
            goto LABEL_49;
        }
        LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
        count_2 -= count_1;
        do
        {
          v23 = *src++;
          value = value_1 + ((BYTE1(value_1) + v23) & 7);
          *dst++ = value;
          --count_1;
        }
        while ( count_1 );
      }
      while ( count_2 );
LABEL_49:
      dst += v8;
      --word_627B6;
    }
    while ( word_627B6 );
  }
  else
  {
    do
    {
      count_3 = ::count;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            value = *src++;
            v16 = 2 * value;
            if ( !__CFSHL__(value, 1) )
              break;
            v13 = __CFSHL__(v16, 1);
            LOBYTE(count_1) = 4 * value;
            if ( v13 )
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              dst += count_1;
              count_3 -= count_1;
              if ( !count_3 )
                goto LABEL_32;
            }
            else
            {
              LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
              count_3 -= count_1;
              src += count_1;
              value = value_1;
              memset(dst, value_1, count_1);
              dst += count_1;
              count_1 = 0;
              if ( !count_3 )
                goto LABEL_32;
            }
          }
          v13 = __CFSHL__(v16, 1);
          LOBYTE(count_1) = 4 * value;
          if ( v13 )
            break;
          LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
          count_3 -= count_1;
          ++src;
          value = value_1;
          memset(dst, value_1, count_1);
          dst += count_1;
          count_1 = 0;
          if ( !count_3 )
            goto LABEL_32;
        }
        LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
        count_3 = count_3 - count_1 - count_1;
        ++src;
        value = value_1;
        do
        {
          v17 = dst + 1;
          *v17 = value_1;
          dst = v17 + 1;
          --count_1;
        }
        while ( count_1 );
      }
      while ( count_3 );
LABEL_32:
      dst += v8;
      --word_627B6;
    }
    while ( word_627B6 );
  }
  return value;
}
