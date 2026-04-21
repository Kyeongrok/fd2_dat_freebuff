/*
 * func-name: sub_22866
 * func-address: 0x22866
 * callers: 0x20c6f, 0x2282f, 0x2d80d
 * callees: 0x1c2da, 0x1c4cc, 0x1e0db, 0x1e1dc, 0x3702f, 0x37af4, 0x4ebe3
 */

void __fastcall sub_22866(__int32 a1, int a2, int n4, int a4, int n6, int n30, unsigned __int8 *a7)
{
  int v7; // eax
  int v8; // eax
  int n30_1; // ebp
  int v10; // esi
  unsigned __int8 *v11; // edi
  int v12; // edx
  int v13; // [esp+0h] [ebp-1Ch]
  int v14; // [esp+8h] [ebp-14h]

  v7 = sub_3702F(a1, a2, n4, a4, 48);
  v8 = sub_1C4CC(v7, a2, n4, a4, n6, 18, n30, (int)a7);
  sub_1C2DA(v8, a2, n4, a4, n6, 18, n30, (int)a7);
  for ( n30_1 = 0; n30_1 < n30; ++n30_1 )
  {
    v10 = 80 * a7[n30_1] + dword_53A45;
    v14 = *(unsigned __int8 *)(v10 + 33);
    if ( *(unsigned __int8 *)(v10 + 32) > 8u && *(unsigned __int8 *)(v10 + 32) < 0x19u )
      v14 += 30;
    v11 = &a7[n30_1];
    if ( *(_BYTE *)(v10 + 35) )
    {
      sub_1E1DC(*v11, a7[n30_1], n4, a4, *v11);
    }
    else
    {
      n4 = 4;
      v12 = sub_4EBE3(*(unsigned __int8 *)(v10 + 35)) % 4 + 2;
      *(_BYTE *)(v10 + 35) = v12;
      v13 = (int)_CHP(v13, *(unsigned __int16 *)(v10 + 74), (double)*(unsigned __int16 *)(v10 + 74) * dbl_50218 + 1.0);
      sub_1E0DB(*v11, v12, 4, a4, v13, 105, *v11);
      *(_WORD *)(v10 + 74) += v13;
      arg4_0 += 2 * v14;
    }
  }
  JUMPOUT(0x2281B);
}
