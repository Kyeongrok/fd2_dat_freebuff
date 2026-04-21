/*
 * func-name: sub_35730
 * func-address: 0x35730
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x11cac, 0x12263, 0x15f84, 0x1aa1d, 0x1db65, 0x2e2b0, 0x34894, 0x3702f
 */

void __fastcall sub_35730(__int32 a1, int a2, int arg4, int n3, int a5)
{
  __int32 _FDOTHER.DAT_; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 n8; // eax
  __int32 v9; // eax
  __int16 v10; // [esp-Ch] [ebp-Ch] BYREF
  char v11; // [esp-Ah] [ebp-Ah]
  unsigned __int8 v12; // [esp-9h] [ebp-9h] BYREF

  sub_3702F(a1, a2, arg4, n3, 52);
  v10 = unk_5274B;
  v11 = unk_5274D;
  if ( !a5 && !*(_BYTE *)n8_1 )
  {
    sub_15F84(&v12, n8_1, a2, n3, arg4, arg0_0, 0, 655360, 320, 205, 76, 74, 19, 1);
    v6 = sub_2E2B0(_FDOTHER.DAT_, a2, arg4, n3, 17, 0);
    v7 = sub_1DB65(v6, a2, arg4, n3);
    if ( sub_34894(v7, a2, arg4, n3, 17) )
    {
      n8 = n8_1;
      *(_BYTE *)n8_1 = 1;
      LOBYTE(v9) = sub_12263(n8, a2, arg4, n3);
      sub_11CAC(v9, a2, arg4, n3, 1);
      sub_1AA1D((__int32)&v10, a2, arg4, n3, 0, 1, (int)&v10);
    }
  }
  arg4_0 = 0;
  JUMPOUT(0x3531B);
}
