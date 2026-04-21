/*
 * func-name: sub_314DE
 * func-address: 0x314de
 * callers: 0x2cf30, 0x2dfc8, 0x2e2b0
 * callees: 0x111ba, 0x3702f
 */

_BYTE *__fastcall sub_314DE(__int32 a1, int a2, int a3, int a4, int n3)
{
  int v5; // edx
  __int32 v7; // [esp-2h] [ebp-14h]
  _BYTE v8[6]; // [esp+2h] [ebp-10h] BYREF

  sub_3702F(a1, a2, a3, a4, 32);
  v5 = 0;
  qmemcpy(v8, "012345", sizeof(v8));
  if ( n3 && *(_BYTE *)(n3 + 4) )
  {
    v7 = (unsigned __int8)v8[*(unsigned __int8 *)(n3 + 4) - 1];
    // "FDOTHER.DAT"
    return sub_111BA(v7, 0, a3, a4, (int)aFdotherDat, 0, v7);
  }
  return (_BYTE *)v5;
}
