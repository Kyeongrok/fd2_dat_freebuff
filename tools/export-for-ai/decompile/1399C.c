/*
 * func-name: sub_1399C
 * func-address: 0x1399c
 * callers: 0x2000a, 0x21548
 * callees: 0x3702f, 0x3706e, 0x37910, 0x4e22a
 */

void __fastcall sub_1399C(__int32 a1, int a2, int a3, int a4)
{
  _WORD *v4; // eax
  _WORD *v5; // edi
  int i; // esi
  int v7; // [esp+0h] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 32);
  v7 = *(unsigned __int16 *)(dword_53A5D + 4);
  v4 = (_WORD *)malloc(576 * v7 + 6);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 24;
    v4[1] = 24;
    v4[2] = v7;
    memset(v4 + 3, 0, 576 * v7);
    for ( i = 0; i < v7; ++i )
      sub_4E22A((char *)(dword_53A5D + *(_DWORD *)(dword_53A5D + 4 * i + 6)), (char *)&v5[288 * i + 3], 24);
    JUMPOUT(0x10C49);
  }
  JUMPOUT(0x10056);
}
