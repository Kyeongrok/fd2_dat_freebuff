/*
 * func-name: sub_1B750
 * func-address: 0x1b750
 * callers: 0x1088d, 0x10c50, 0x1a866, 0x1bbdc, 0x1bffe, 0x1e292, 0x21082, 0x2872b, 0x28cbd, 0x28f65, 0x2ac7d
 * callees: 0x3702f, 0x37af4, 0x4e8bc
 */

void __fastcall sub_1B750(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int n8; // esi
  char *v7; // eax
  double v8; // st7
  double v9; // st7
  __int16 v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 36);
  v5 = 80 * a5 + dword_53A45;
  v12 = *(__int16 *)(v5 + 55);
  v13 = *(__int16 *)(v5 + 57);
  v11 = *(__int16 *)(v5 + 62);
  if ( *(_BYTE *)(v5 + 36) )
    v11 += 15;
  v10 = v11;
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    if ( (*(_BYTE *)(v5 + 2 * n8 + 10) & 0x40) != 0 )
    {
      v7 = sub_4E8BC(*(unsigned __int8 *)(v5 + 2 * n8 + 11));
      v12 += *(__int16 *)(v7 + 1);
      v13 += *(__int16 *)(v7 + 5);
      v10 += *(_WORD *)(v7 + 3);
      v11 += *(__int16 *)(v7 + 7);
    }
  }
  if ( *(_BYTE *)(v5 + 34) )
  {
    v8 = (double)v12 * dbl_5018D;
    _CHP();
    v12 = (int)v8;
  }
  if ( *(_BYTE *)(v5 + 35) )
  {
    v9 = (double)v13 * dbl_5018D;
    _CHP();
    v13 = (int)v9;
  }
  *(_WORD *)(v5 + 72) = v12;
  *(_WORD *)(v5 + 74) = v13;
  *(_WORD *)(v5 + 76) = v10;
  JUMPOUT(0x114FB);
}
