/*
 * func-name: sub_311E5
 * func-address: 0x311e5
 * callers: 0x2cf30, 0x2ff01, 0x31c49
 * callees: 0x2eb9f, 0x3702f
 */

int __fastcall sub_311E5(__int32 a1, int a2, int a3, int a4, unsigned __int8 *arg0, int value, int arg8, int argC)
{
  int arg4; // eax

  arg4 = sub_3702F(a1, a2, a3, a4, 28);
  if ( !value )
  {
    byte_54130 = 0;
LABEL_5:
    arg4_1 = 0;
    return arg4;
  }
  sub_2EB9F((unsigned __int8)arg4_1, a2, (int)arg0, a4, (int)arg0, (unsigned __int8)arg4_1, arg8, argC, value);
  arg4 = arg0[*(_DWORD *)&arg0[4 * (unsigned __int8)arg4_1 + 8] + 6];
  if ( (unsigned __int8)++byte_54130 >= arg4 )
  {
    byte_54130 = 0;
    ++arg4_1;
    arg4 = *arg0;
    if ( (unsigned __int8)arg4_1 >= arg4 )
      goto LABEL_5;
  }
  return arg4;
}
