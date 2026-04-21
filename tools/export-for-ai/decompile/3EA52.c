/*
 * func-name: sub_3EA52
 * func-address: 0x3ea52
 * callers: 0x3e619
 * callees: 0x46f3a
 */

void __cdecl sub_3EA52(_BYTE *a1)
{
  while ( *a1 )
  {
    *a1 = toupper((unsigned __int8)*a1);
    ++a1;
  }
}
