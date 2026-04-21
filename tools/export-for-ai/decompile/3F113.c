/*
 * func-name: sub_3F113
 * func-address: 0x3f113
 * callers: 0x382e9
 * callees: 0x3806a, 0x3806f
 */

int __cdecl sub_3F113(int a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  __int16 v8; // dx
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // cx
  __int16 v12; // dx
  __int16 v13; // si
  __int16 v14; // di
  int v16; // [esp-Ch] [ebp-54h]
  _WORD buf_[25]; // [esp+Eh] [ebp-3Ah] BYREF

  sub_3806A();
  memset(buf_, 0, sizeof(buf_));
  _CF = __CFSHR__(50, 2);
  _ZF = 0;
  _SF = 0;
  buf_[18] = 0;
  buf_[17] = 0;
  __asm { pushfw }
  buf_[16] = 0;
  buf_[14] = a2;
  if ( a3 )
  {
    v8 = a3[3];
    v9 = a3[4];
    v10 = a3[5];
    buf_[12] = a3[2];
    buf_[10] = v8;
    buf_[2] = v9;
    buf_[0] = v10;
  }
  buf_[8] = *(_WORD *)(*(_DWORD *)(a1 + 8) + 50);
  __asm { int     31h; DPMI Services   ax=func xxxxh }
  if ( a4 )
  {
    v11 = buf_[12];
    v12 = buf_[10];
    v13 = buf_[2];
    v14 = buf_[0];
    *a4 = buf_[14];
    a4[2] = v11;
    a4[3] = v12;
    a4[4] = v13;
    a4[5] = v14;
    a4[1] = buf_[8];
  }
  v16 = buf_[14];
  sub_3806F(buf_[14]);
  return v16;
}
