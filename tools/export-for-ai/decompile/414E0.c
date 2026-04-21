/*
 * func-name: sub_414E0
 * func-address: 0x414e0
 * callers: 0x39521
 * callees: 0x40240
 */

int *__cdecl sub_414E0(int *a1)
{
  int *result; // eax
  int v2; // edx

  result = a1;
  if ( a1 )
  {
    a1[1] = 2;
    a1[2] = 0;
    a1[4] = 0;
    a1[6] = 0;
    a1[8] = 0;
    a1[3] = 0;
    a1[5] = 0;
    a1[7] = 0;
    a1[9] = 1;
    a1[10] = 0;
    a1[11] = -2;
    a1[12] = 1;
    a1[13] = 0;
    a1[14] = 0;
    a1[15] = 11025;
    a1[17] = 64;
    a1[530] = 0;
    a1[531] = 0;
    v2 = dword_54320;
    a1[532] = 0;
    a1[16] = v2;
    return sub_40240((int)a1);
  }
  return result;
}
