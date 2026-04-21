/*
 * func-name: sub_31266
 * func-address: 0x31266
 * callers: 0x2ff01
 * callees: 0x11eb0, 0x17aa9, 0x2b996, 0x2bb33, 0x2bd6c, 0x2bfd9, 0x2c217, 0x2c441, 0x2c67d, 0x2cafc, 0x2ccf4, 0x2ce1a, 0x2eb9f, 0x3702f
 */

void __fastcall sub_31266(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        int n6a,
        int _FDOTHER.DAT_,
        unsigned __int8 *n3,
        unsigned __int8 *arg0,
        int arg8,
        int a10,
        unsigned __int8 *arg0_1,
        int n28)
{
  int arg8_1; // ebx
  int v13; // eax
  int n5; // esi
  __int32 v15; // eax
  __int32 v16; // eax
  __int32 v17; // eax
  int v18; // eax
  int v19; // eax
  int n4; // esi
  __int32 v21; // eax
  __int32 v22; // eax
  __int32 v23; // eax
  int v24; // eax
  int v25; // eax
  int arg4; // [esp+0h] [ebp-1Ch]
  int v27; // [esp+4h] [ebp-18h]
  unsigned __int8 v28; // [esp+8h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 56);
  v27 = -1;
  v28 = 0;
  arg8_1 = arg8 + 18880;
  arg4 = *n3 - 1;
  v13 = *(unsigned __int8 *)(80 * n6a + n8_0 + 6);
  if ( !*(_BYTE *)(80 * n6a + n8_0 + 6) )
    v27 = 1;
  for ( n5 = 1; n5 < 5; ++n5 )
  {
    if ( n28 == 7 || n28 == 3 )
    {
      v28 ^= 1u;
      v19 = sub_11EB0(640 * v28, a2, arg8_1, a4, arg8_1 - 640 * v28, 640, a10, 320, 320, 200);
    }
    else
    {
      v19 = sub_11EB0(v13, a2, arg8_1, a4, arg8_1, 640, a10, 320, 320, 200);
    }
    ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
      v19,
      a2,
      arg8_1,
      a4,
      n6a,
      _FDOTHER.DAT_,
      arg8_1,
      640,
      4u);
    sub_2EB9F(v15, a2, arg8_1, a4, (int)n3, arg4, arg8_1, 640, -1);
    LOBYTE(v16) = sub_2EB9F(arg8_1 + v27 * 35 * n5, a2, arg8_1, a4, (int)arg0, 0, arg8_1 + v27 * 35 * n5, 640, -1);
    ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
      v16,
      a2,
      arg8_1,
      a4,
      n6a,
      _FDOTHER.DAT_,
      arg8_1,
      640,
      5u);
    v18 = sub_11EB0(v17, a2, arg8_1, a4, 655360, 320, arg8_1, 640, 320, 200);
    v13 = sub_17AA9(v18, a2, arg8_1, a4, 1);
  }
  for ( n4 = 4; n4 >= 0; --n4 )
  {
    if ( n28 == 7 || n28 == 3 )
    {
      v28 ^= 1u;
      v25 = sub_11EB0(640 * v28, a2, arg8_1, a4, arg8_1 - 640 * v28, 640, a10, 320, 320, 200);
    }
    else
    {
      v25 = sub_11EB0(v13, a2, arg8_1, a4, arg8_1, 640, a10, 320, 320, 200);
    }
    ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
      v25,
      a2,
      arg8_1,
      a4,
      n6a,
      _FDOTHER.DAT_,
      arg8_1,
      640,
      4u);
    sub_2EB9F(v21, a2, arg8_1, a4, (int)n3, arg4, arg8_1, 640, -1);
    LOBYTE(v22) = sub_2EB9F(arg8_1 + v27 * 35 * n4, a2, arg8_1, a4, (int)arg0_1, 0, arg8_1 + v27 * 35 * n4, 640, -1);
    ((void (__fastcall *)(__int32, int, int, int, int, int, int, int, unsigned __int8))funcs_30469[n28])(
      v22,
      a2,
      arg8_1,
      a4,
      n6a,
      _FDOTHER.DAT_,
      arg8_1,
      640,
      5u);
    v24 = sub_11EB0(v23, a2, arg8_1, a4, 655360, 320, arg8_1, 640, 320, 200);
    v13 = sub_17AA9(v24, a2, arg8_1, a4, 1);
  }
  JUMPOUT(0x2FE0C);
}
