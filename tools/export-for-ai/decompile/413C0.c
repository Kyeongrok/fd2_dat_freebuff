/*
 * func-name: sub_413C0
 * func-address: 0x413c0
 * callers: 0x3908b
 * callees: 0x38463, 0x39176
 */

void sub_413C0()
{
  _BYTE v0[128]; // [esp+0h] [ebp-120h] BYREF
  char v1[128]; // [esp+80h] [ebp-A0h] BYREF
  _BYTE v2[32]; // [esp+100h] [ebp-20h] BYREF

  if ( sub_38463((int)v0, (int)v0, &aRdigIni[1]) )// "rDIG.INI"
    sub_39176((int)v1, v1, (int)v2);
  else
    strcpy(&Corrupted__INI_file_n, "Unable to open file DIG.INI\n");
}
