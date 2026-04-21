/*
 * func-name: sub_26A0D
 * func-address: 0x26a0d
 * callers: 0x279bc
 * callees: 0x3702f
 */

int __fastcall sub_26A0D(__int32 a1, int a2, int a3, int a4, int a5)
{
  int n8; // ebp
  int n3; // edi
  int v7; // esi
  int n8_1; // edx
  _BYTE *v9; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  n8 = 8;
  if ( n5 == 1 )
  {
    n8 = 12;
    n3 = 3;
  }
  else if ( n5 == 3 )
  {
    n3 = 15;
  }
  else
  {
    n3 = 23;
  }
  v7 = 0;
  for ( n8_1 = 0; n8_1 < n8; ++n8_1 )
  {
    v9 = (_BYTE *)(n8_1 + n3 + dword_53F56);
    if ( (unsigned __int8)*v9 == 255 )
      break;
    *(_BYTE *)(v7 + a5) = *v9;
    ++v7;
  }
  return v7;
}
