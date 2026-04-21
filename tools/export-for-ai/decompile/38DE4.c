/*
 * func-name: sub_38DE4
 * func-address: 0x38de4
 * callers: 0x3fdaf
 * callees: 0x37c9c, 0x3f22a, 0x3f2cc, 0x3f46b
 */

void __fastcall sub_38DE4(int a1)
{
  int v1; // edx

  v1 = ++dword_54178;
  if ( dword_54174 && (v1 == 1 || dword_54170) && !sub_3F22A(a1) && sub_37C9C() )
    fprintf(env, "AIL_release_all_timers()\n");
  sub_3F2CC();
  JUMPOUT(0x37F68);
}
