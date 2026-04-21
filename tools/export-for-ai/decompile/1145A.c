/*
 * func-name: sub_1145A
 * func-address: 0x1145a
 * callers: 0x112a5, 0x11506
 * callees: 0x3702f, 0x4e8bc
 */

int __fastcall sub_1145A(__int32 a1, int a2, int a3, int a4, int a5)
{
  __int16 *v5; // edi
  int n8; // esi
  char *v7; // eax
  int result; // eax
  __int16 v9; // [esp+0h] [ebp-1Ch]
  __int16 v10; // [esp+4h] [ebp-18h]
  __int16 v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 36);
  v5 = (__int16 *)(80 * a5 + dword_53BF7);
  v10 = *(__int16 *)((char *)v5 + 55);
  v11 = *(__int16 *)((char *)v5 + 57);
  v12 = v5[31];
  v9 = v5[31];
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    if ( (v5[n8 + 5] & 0x40) != 0 )
    {
      v7 = sub_4E8BC(HIBYTE(v5[n8 + 5]));
      v10 += *(_WORD *)(v7 + 1);
      v11 += *(_WORD *)(v7 + 5);
      v9 += *(_WORD *)(v7 + 3);
      v12 += *(__int16 *)(v7 + 7);
    }
  }
  v5[36] = v10;
  v5[37] = v11;
  v5[38] = v9;
  result = v12;
  v5[39] = v12;
  return result;
}
