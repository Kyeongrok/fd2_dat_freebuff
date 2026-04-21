/*
 * func-name: sub_4E8D3
 * func-address: 0x4e8d3
 * callers: 0x2ff01, 0x30e9d
 * callees: none
 */

char __cdecl sub_4E8D3(__int16 *_BG.DAT_, int n164, int n50, int a4, int n320, int a6)
{
  __int16 *v6; // esi
  _BYTE *buf; // edi
  int v8; // edx
  unsigned int count_1; // ecx
  int value; // eax
  __int16 count; // bx
  char v12; // cl
  _BOOL1 v13; // cf
  _BYTE *v14; // edi

  ::count = *_BG.DAT_;
  v6 = _BG.DAT_ + 2;
  word_627B6 = _BG.DAT_[1];
  buf = (_BYTE *)(n164 + n320 * n50 + a4);
  v8 = n320 - (unsigned __int16)::count;
  count_1 = 0;
  value = 0;
  do
  {
    count = ::count;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          LOBYTE(value) = *(_BYTE *)v6;
          v6 = (__int16 *)((char *)v6 + 1);
          v12 = 2 * value;
          if ( __CFSHL__(value, 1) )
            break;
          v13 = __CFSHL__(v12, 1);
          LOBYTE(count_1) = 4 * value;
          if ( v13 )
          {
            LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
            count = count - count_1 - count_1;
            LOBYTE(value) = *(_BYTE *)v6;
            v6 = (__int16 *)((char *)v6 + 1);
            LOBYTE(value) = *(_BYTE *)(value + a6);
            do
            {
              v14 = buf + 1;
              *v14 = value;
              buf = v14 + 1;
              --count_1;
            }
            while ( count_1 );
            if ( !count )
              goto LABEL_17;
          }
          else
          {
            LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
            count -= count_1;
            LOBYTE(value) = *(_BYTE *)v6;
            v6 = (__int16 *)((char *)v6 + 1);
            LOBYTE(value) = *(_BYTE *)(value + a6);
            memset(buf, value, count_1);
            buf += count_1;
            count_1 = 0;
            if ( !count )
              goto LABEL_17;
          }
        }
        v13 = __CFSHL__(v12, 1);
        LOBYTE(count_1) = 4 * value;
        if ( !v13 )
          break;
        LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
        buf += count_1;
        count -= count_1;
        if ( !count )
          goto LABEL_17;
      }
      LOBYTE(count_1) = ((unsigned __int8)count_1 >> 2) + 1;
      count -= count_1;
      do
      {
        LOBYTE(value) = *(_BYTE *)v6;
        v6 = (__int16 *)((char *)v6 + 1);
        LOBYTE(value) = *(_BYTE *)(value + a6);
        *buf++ = value;
        --count_1;
      }
      while ( count_1 );
      count_1 = 0;
    }
    while ( count );
LABEL_17:
    buf += v8;
    --word_627B6;
  }
  while ( word_627B6 );
  return value;
}
