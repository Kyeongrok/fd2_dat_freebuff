/*
 * func-name: sub_4E71F
 * func-address: 0x4e71f
 * callers: 0x4e680
 * callees: none
 */

char sub_4E71F()
{
  char v0; // ah
  char *v1; // esi
  char v2; // bl
  char v3; // bh

  v0 = byte_60077;
  v1 = (char *)&unk_60079;
  v2 = 0;
  v3 = -1;
  do
  {
    if ( v1[3] != v3 )
    {
      ++v2;
      v3 = v1[3];
    }
    v1 += 8;
    --v0;
  }
  while ( v0 );
  return 4 * v2;
}
