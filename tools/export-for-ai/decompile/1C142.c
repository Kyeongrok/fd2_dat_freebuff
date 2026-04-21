/*
 * func-name: sub_1C142
 * func-address: 0x1c142
 * callers: 0x1bffe, 0x2872b
 * callees: 0x1b722, 0x3702f
 */

int __fastcall sub_1C142(__int32 a1, int a2, int a3, int a4, int n6, int n3)
{
  int v6; // esi
  int n128; // ebx
  int n8; // edx
  _BYTE *v9; // eax
  int n3_1; // eax

  sub_3702F(a1, a2, a3, a4, 20);
  v6 = 80 * n6 + dword_53A45;
  n128 = sub_1B722(80 * n6, n6, a3, a4, n6, n3);
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    v9 = (_BYTE *)(v6 + 2 * n8 + 10);
    if ( (*v9 & 0x40) != 0
      && (n128 < 128 && *(unsigned __int8 *)(v6 + 2 * n8 + 11) < 0x80u
       || n128 >= 128 && *(unsigned __int8 *)(v6 + 2 * n8 + 11) >= 0x80u) )
    {
      *v9 = 0;
    }
  }
  n3_1 = n3;
  *(_BYTE *)(v6 + 2 * n3 + 10) = 64;
  return n3_1;
}
