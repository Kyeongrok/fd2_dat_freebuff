/*
 * func-name: sub_44240
 * func-address: 0x44240
 * callers: 0x3aa72
 * callees: 0x38463, 0x3ab49
 */

void sub_44240()
{
  _BYTE v0[128]; // [esp+0h] [ebp-120h] BYREF
  char v1[128]; // [esp+80h] [ebp-A0h] BYREF
  _BYTE v2[32]; // [esp+100h] [ebp-20h] BYREF

  if ( sub_38463((int)v0, (int)v0, &aMdiIni[1]) )// " MDI.INI"
    sub_3AB49((int)v1, v1, (int)v2);
  else
    strcpy(&Corrupted__INI_file_n, "Unable to open file MDI.INI\n");
}
