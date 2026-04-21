/*
 * func-name: sub_28632
 * func-address: 0x28632
 * callers: 0x2825b
 * callees: 0x3702f, 0x4e8bc
 */

void __fastcall sub_28632(__int32 a1, int a2, int a3, int a4, int a5, int a6, int *p_n999)
{
  char *v7; // eax
  int v8; // ebp
  int v9; // edx
  int n8; // edi
  char *v11; // eax
  __int16 *v12; // [esp+0h] [ebp-24h]
  int n20; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]

  sub_3702F(a1, a2, a3, a4, 44);
  v7 = sub_4E8BC(a6);
  n20 = (unsigned __int8)*v7;
  v12 = (__int16 *)(80 * a5 + dword_53A45);
  v15 = *(__int16 *)(v7 + 1) + *(__int16 *)((char *)v12 + 55);
  v8 = *(__int16 *)(v7 + 5) + *(__int16 *)((char *)v12 + 57);
  v9 = v12[31];
  v16 = v9 + *(__int16 *)(v7 + 3);
  v14 = *(__int16 *)(v7 + 7) + v9;
  for ( n8 = 0; n8 < 8; ++n8 )
  {
    v11 = sub_4E8BC(HIBYTE(v12[n8 + 5]));
    if ( (v12[n8 + 5] & 0x40) != 0
      && (n20 <= 20 && (unsigned __int8)*v11 > 0x14u || n20 > 20 && (unsigned __int8)*v11 <= 0x14u) )
    {
      v15 += *(__int16 *)(v11 + 1);
      v8 += *(__int16 *)(v11 + 5);
      v16 += *(__int16 *)(v11 + 3);
      v14 += *(__int16 *)(v11 + 7);
    }
  }
  *p_n999 = v15;
  p_n999[1] = v8;
  p_n999[2] = v16;
  p_n999[3] = v14;
  JUMPOUT(0x26E30);
}
