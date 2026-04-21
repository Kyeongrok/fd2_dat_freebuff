/*
 * func-name: sub_2FE14
 * func-address: 0x2fe14
 * callers: 0x2fb2c
 * callees: 0x11eb0, 0x17aa9, 0x2eb9f, 0x3702f, 0x37910, 0x4e98d
 */

int __fastcall sub_2FE14(__int32 a1, int a2, int a3, int a4, _BYTE *arg0, int arg8, int n16)
{
  int result; // eax
  int arg4_1; // esi
  int v9; // ebp
  __int32 v10; // eax
  __int32 v11; // eax
  int v12; // eax
  int v13; // edx
  int n16_1; // [esp+0h] [ebp-18h]
  int v15; // [esp+4h] [ebp-14h]

  result = sub_3702F(a1, a2, a3, a4, 52);
  arg4_1 = 0;
  v15 = 0;
  v9 = 0;
  for ( n16_1 = 0; n16_1 < n16; ++n16_1 )
  {
    memset(arg8, 0, &loc_1F400);
    v15 = (v15 + 1) % 3;
    LOBYTE(v10) = sub_4E98D((__int16 *)dword_5413F[v15], 0, 50, arg8, 640, -1);
    LOBYTE(v11) = sub_2EB9F(v10, v15, 3, a4, (int)arg0, arg4_1, arg8, 640, -1);
    v12 = sub_11EB0(v11, v15, 3, a4, 655360, 320, arg8, 640, 320, 200);
    v13 = (unsigned __int8)arg0[*(_DWORD *)&arg0[4 * arg4_1 + 8] + 6];
    if ( ++v9 == v13 )
    {
      v9 ^= v13;
      v13 = (unsigned __int8)*arg0;
      if ( ++arg4_1 == v13 )
        arg4_1 ^= v13;
    }
    result = sub_17AA9(v12, v13, 3, a4, 1);
  }
  return result;
}
