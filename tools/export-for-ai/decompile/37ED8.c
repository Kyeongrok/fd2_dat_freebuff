/*
 * func-name: sub_37ED8
 * func-address: 0x37ed8
 * callers: 0x25bf4, 0x33faf
 * callees: 0x3759c, 0x37c9c, 0x3f22a, 0x3f46b, 0x3fdaf
 */

int sub_37ED8()
{
  int v0; // edx
  int result; // eax

  v0 = ++dword_54178;
  if ( dword_54174 && (v0 == 1 || dword_54170) && !((int (*)(void))sub_3F22A)() && sub_37C9C() )
    fprintf(env, "AIL_shutdown()\n");
  result = sub_3FDAF();
  if ( dword_54174 && (dword_54178 == 1 || dword_54170) )
  {
    result = sub_3F22A(result);
    if ( !result )
      result = fclose(env);
  }
  --dword_54178;
  return result;
}
