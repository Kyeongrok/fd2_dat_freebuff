/*
 * func-name: sub_2AC7D
 * func-address: 0x2ac7d
 * callers: 0x2aa00
 * callees: 0x15f84, 0x16559, 0x16c57, 0x1956b, 0x1b750, 0x1e529, 0x26996, 0x3702f, 0x4e381, 0x4e7dd, 0x4e821
 */

__int16 __fastcall sub_2AC7D(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  unsigned __int8 *v6; // edi
  __int32 v7; // eax
  int n3; // eax
  int n3_1; // eax
  int n3_2; // eax
  int n3_3; // eax
  int v12; // edi
  __int32 arg4; // eax
  __int32 v14; // eax
  __int32 v15; // eax

  sub_3702F(a1, a2, a3, a4, 52);
  v5 = 80 * a5 + n8_0;
  v6 = (unsigned __int8 *)sub_4E821(*(unsigned __int8 *)(v5 + 7));
  sub_4E381();
  sub_1956B(*(unsigned __int8 *)(v5 + 7), a2, a3, a4, *(unsigned __int8 *)(v5 + 7));
  dword_53AD9 = *(unsigned __int8 *)(v5 + 32) + 150;
  sub_15F84(v6, dword_53AD9, a2, a4, a3, arg0, 595, 693535, 320, 205, 76, 74, 19, 1);
  sub_16559(v7, a2, a3, a4, 0);
  sub_4E381();
  n3 = sub_1E529(v5 + 55, a2, a3, a4, (_WORD *)(v5 + 55), v6, 490, 1);
  n3_1 = sub_1E529(v5 + 57, a2, a3, a4, (_WORD *)(v5 + 57), v6 + 2, 491, n3);
  n3_2 = sub_1E529(v5 + 62, a2, a3, a4, (_WORD *)(v5 + 62), v6 + 4, 492, n3_1);
  n3_3 = sub_1E529(v5 + 66, a2, a3, a4, (_WORD *)(v5 + 66), v6 + 6, 493, n3_2);
  v12 = sub_1E529(v5 + 70, a2, a3, a4, (_WORD *)(v5 + 70), v6 + 8, 494, n3_3);
  arg4 = *(unsigned __int8 *)(sub_4E7DD(*(unsigned __int8 *)(v5 + 7)) + 1);
  if ( arg4 )
  {
    ::arg4 = arg4;
    sub_15F84(
      (unsigned __int8 *)v12,
      6080 * v12 + 693535,
      a2,
      a4,
      a3,
      arg0,
      596,
      6080 * v12 + 693535,
      320,
      205,
      76,
      74,
      19,
      1);
    sub_16C57(v14, a2, a3, a4, 0);
    LOBYTE(arg4) = ::arg4;
    *(_BYTE *)(v5 + 59) += ::arg4;
  }
  sub_1B750(arg4, a2, a3, a4, a5);
  sub_26996(v15, a2, a3, a4);
  *(_BYTE *)(v5 + 33) = 1;
  *(_BYTE *)(v5 + 60) = 0;
  *(_WORD *)(v5 + 64) = *(_WORD *)(v5 + 66);
  *(_WORD *)(v5 + 68) = *(_WORD *)(v5 + 70);
  return sub_4E381();
}
