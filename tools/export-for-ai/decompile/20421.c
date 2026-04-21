/*
 * func-name: sub_20421
 * func-address: 0x20421
 * callers: 0x1f81e, 0x1f894, 0x24336, 0x31529
 * callees: 0x10620, 0x111ba, 0x25a96, 0x36fd3, 0x36ff4, 0x3702f, 0x3706e, 0x37324, 0x373ca, 0x3759c, 0x3776e, 0x3790a, 0x37940, 0x4e381
 */

void __fastcall sub_20421(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int32 v7; // eax
  unsigned __int8 *v8; // ebp
  int _rb_; // edi
  int v10; // eax
  int i; // esi
  _WORD v12[4]; // [esp+0h] [ebp-24h] BYREF
  int v13; // [esp+8h] [ebp-1Ch]
  _BYTE *_FDOTHER.DAT_; // [esp+Ch] [ebp-18h]
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+20h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 56);
  v16 = a3;
  _FDOTHER.DAT_ = 0;
  LOWORD(v7) = sub_4E381();
  if ( a5 == 1 )
    _FDOTHER.DAT_ = sub_111BA(v7, a2, a3, a4, (int)aFdotherDat, 0, 78);// "FDOTHER.DAT"
  v13 = malloc(768);
  v8 = (unsigned __int8 *)malloc(64000);
  sub_36FD3(64000, 655360, v13);
  _rb_ = fopen((int)aAniDat, (int)aRb_13);      // "rb"
  fseek(_rb_, 4 * a5 + 6, 0);
  sub_373CA(v8, 1u, 8, _rb_);
  fseek(_rb_, *(_DWORD *)v8, 0);
  v10 = sub_373CA(v8, 1u, 173, _rb_);
  LOWORD(v10) = *(_WORD *)(v8 + 165);
  v15 = v10;
  for ( i = 0; i < (__int16)v15; ++i )
  {
    sub_373CA(v12, 1u, 8, _rb_);
    sub_373CA(v8, 1u, v12[0], _rb_);
    sub_36FF4(v12[1], v8);
    if ( a5 == 1 && !i )
      sub_25A96((int)_FDOTHER.DAT_, 0, 1);
    j___delay(a6);
    if ( a7 )
    {
      if ( sub_10620() )
        break;
    }
    sub_4E381();
  }
  free(v13);
  free(v8);
  if ( _FDOTHER.DAT_ )
  {
    sub_25A96((int)_FDOTHER.DAT_, -1, 1);
    free(_FDOTHER.DAT_);
  }
  fclose(_rb_);
  JUMPOUT(0x19518);
}
