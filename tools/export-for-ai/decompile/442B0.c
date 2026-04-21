/*
 * func-name: sub_442B0
 * func-address: 0x442b0
 * callers: none
 * callees: none
 */

int __cdecl sub_442B0(char *a1)
{
  char *p_SAMPLE; // edi
  char v3; // al
  char v4; // al
  int result; // eax
  unsigned int n2; // kr04_4
  unsigned int v7; // edx

  p_SAMPLE = aSample;                           // "SAMPLE"
  do
  {
    v3 = *a1;
    *p_SAMPLE = *a1;
    if ( !v3 )
      break;
    v4 = a1[1];
    a1 += 2;
    p_SAMPLE[1] = v4;
    p_SAMPLE += 2;
  }
  while ( v4 );
  result = 0;
  n2 = strlen(aSample) + 1;                     // "SAMPLE"
  v7 = n2 - 2;
  if ( n2 != 2 )
  {
    while ( 1 )
    {
      BYTE1(result) = aSample[v7];              // "SAMPLE"
      if ( BYTE1(result) == 92 )
        break;
      if ( BYTE1(result) == 46 )
      {
        aSample[v7] = 0;                        // "SAMPLE"
        return result;
      }
      if ( !--v7 )
        return result;
    }
    result = 0;
    if ( v7 == strlen(aSample) - 1 )            // "SAMPLE"
      aSample[v7] = 0;                          // "SAMPLE"
  }
  return result;
}
