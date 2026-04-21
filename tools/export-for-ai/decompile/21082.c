/*
 * func-name: sub_21082
 * func-address: 0x21082
 * callers: 0x20c6f
 * callees: 0x11cac, 0x1b750, 0x1b8e7, 0x1c2da, 0x1c4cc, 0x1df58, 0x1e0db, 0x3702f
 */

int __fastcall sub_21082(
        __int32 a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 *n6,
        int n950,
        int n55,
        int n3,
        int n30,
        unsigned __int8 *a10,
        int n17)
{
  int v11; // eax
  int v13; // eax
  _WORD *v14; // eax
  __int32 v15; // eax
  int v16; // eax
  __int32 v17; // eax
  __int32 v18; // eax

  v11 = sub_3702F(a1, a2, a3, a4, 24);
  v13 = sub_1C4CC(v11, a2, (int)a10, a4, (int)n6, n17, n30, (int)a10);
  sub_1C2DA(v13, a2, (int)a10, a4, (int)n6, n17, n30, (int)a10);
  v14 = (_WORD *)(n55 + dword_53A45 + 80 * *a10);
  *v14 += n950;
  sub_1E0DB(*a10, n950, (int)a10, a4, n950, 94, *a10);
  v16 = sub_11CAC(v15, n950, (int)a10, a4, 0);
  sub_1DF58(v16, n950, (int)a10, a4);
  sub_1B750(v17, n950, (int)a10, a4, (int)n6);
  return sub_1B8E7(v18, n950, (int)a10, a4, (int)n6, n3);
}
