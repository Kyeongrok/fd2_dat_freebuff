/*
 * func-name: sub_149F8
 * func-address: 0x149f8
 * callers: 0x15055, 0x1567e, 0x1cff0
 * callees: 0x12c0d, 0x3702f
 */

void __fastcall sub_149F8(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // ebx
  int i; // esi
  int v13; // eax
  int v14; // eax
  int v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+8h] [ebp-14h]
  int v18; // [esp+Ch] [ebp-10h]

  sub_3702F(a1, a2, a3, a4, 32);
  v17 = 0;
  v18 = 0;
  v11 = 0;
  if ( a8 == a5 )
  {
    if ( a9 <= a6 )
      v18 = 1;
    else
      v18 = -1;
  }
  else if ( a8 <= a5 )
  {
    v17 = 1;
  }
  else
  {
    v17 = -1;
  }
  v15 = dword_53AB1;
  v16 = dword_53AB5;
  dword_53AB1 = a8;
  dword_53AB5 = a9;
  for ( i = 0; i < a10; ++i )
  {
    dword_53AB1 += v17;
    dword_53AB5 += v18;
    if ( dword_53AB1 < dword_53AC1 && dword_53AB1 >= 0 && dword_53AB5 < dword_53AC5 && dword_53AB5 >= 0 )
    {
      v13 = sub_12C0D(dword_53AB5, a2, v11, a4);
      a2 = v13;
      a4 = v13;
      if ( v13 != -1 )
      {
        if ( (a2 = dword_53A45, v14 = dword_53A45 + 80 * v13, !a11) && *(_BYTE *)(v14 + 6)
          || a11 && !*(_BYTE *)(v14 + 6) )
        {
          *(_BYTE *)(v11 + a7) = a4;
          ++v11;
        }
      }
    }
  }
  dword_53AB1 = v15;
  dword_53AB5 = v16;
  JUMPOUT(0x114FF);
}
