/*
 * func-name: sub_4E751
 * func-address: 0x4e751
 * callers: 0x4e4f6, 0x4e680
 * callees: none
 */

__int16 __fastcall sub_4E751(__int16 result, __int16 a2)
{
  char *v2; // esi
  _BYTE *v3; // edi

  if ( a2 == word_60071 )
  {
    HIBYTE(result) = byte_60077;
    if ( (unsigned __int8)byte_60077 <= (unsigned __int8)byte_60078 )
    {
      byte_60078 = byte_60077;
      if ( byte_60077 )
      {
        v2 = (char *)&unk_60079;
        v3 = (_BYTE *)dword_60073;
        do
        {
          LOBYTE(result) = v2[3];
          *v3++ = result;
          v2 += 8;
          --HIBYTE(result);
        }
        while ( HIBYTE(result) );
      }
    }
  }
  return result;
}
