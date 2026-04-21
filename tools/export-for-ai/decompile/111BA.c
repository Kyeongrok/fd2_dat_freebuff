/*
 * func-name: sub_111BA
 * func-address: 0x111ba
 * callers: 0x10010, 0x10652, 0x1088d, 0x10b4e, 0x15f84, 0x17eef, 0x1956b, 0x1a7bd, 0x1d4cb, 0x1f73f, 0x1f81e, 0x1f894, 0x20421, 0x22253, 0x22e5c, 0x24336, 0x24754, 0x25977, 0x25bf4, 0x25ebb, 0x26152, 0x279bc, 0x28efe, 0x29300, 0x29620, 0x29daa, 0x2cf30, 0x2d80d, 0x2dfc8, 0x2e2b0, 0x2fb2c, 0x2ff01, 0x314de, 0x31529, 0x31c49, 0x32999, 0x3396a, 0x33faf, 0x35a0d
 * callees: 0x3702f, 0x3706e, 0x37119, 0x37324, 0x373ca, 0x3759c, 0x3776e, 0x37940
 */

_BYTE *__fastcall sub_111BA(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int _rb_; // esi
  int *v8; // ebx
  int v9; // edi
  _BYTE *v10; // ebx

  sub_3702F(a1, a2, a3, a4, 32);
  if ( a6 )
    free(a6);
  _rb_ = fopen(a5, (int)aRb_12);                // "rb"
  if ( !_rb_ )
  {
    printf(aFileNotFoundS);                     // "\n\n File not found %s!!! \n\n"
    goto LABEL_8;
  }
  v8 = (int *)malloc(8);
  fseek(_rb_, 4 * a7 + 6, 0);
  sub_373CA(v8, 1u, 8, _rb_);
  v9 = *v8;
  dword_53BFF = v8[1] - *v8;
  free(v8);
  v10 = (_BYTE *)malloc(dword_53BFF);
  if ( !v10 )
  {
    printf(aOutOfMemoryAtL);                    // "Out of Memory at Load %s Number:%d!!\n"
LABEL_8:
    JUMPOUT(0x1005E);
  }
  fseek(_rb_, v9, 0);
  sub_373CA(v10, 1u, dword_53BFF, _rb_);
  fclose(_rb_);
  return v10;
}
