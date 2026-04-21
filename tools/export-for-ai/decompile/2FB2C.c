/*
 * func-name: sub_2FB2C
 * func-address: 0x2fb2c
 * callers: 0x2aa00
 * callees: 0x111ba, 0x11d40, 0x11df2, 0x11eb0, 0x17aa9, 0x1f525, 0x1f882, 0x2eb9f, 0x2fe14, 0x3702f, 0x3706e, 0x3771c, 0x3776e, 0x3790a, 0x37910, 0x4e98d
 */

int __fastcall sub_2FB2C(__int32 a1, int a2, int a3, int a4, int a5, int n50)
{
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  __int64 v9; // rax
  int n8; // esi
  int n20; // esi
  __int64 v12; // rax
  __int32 v14; // [esp-4h] [ebp-20h]
  int v15; // [esp+0h] [ebp-1Ch] BYREF
  _BYTE *arg0_2; // [esp+4h] [ebp-18h]
  _BYTE *arg0_1; // [esp+8h] [ebp-14h]
  int v18; // [esp+18h] [ebp-4h]

  v6 = sub_3702F(a1, a2, a3, a4, 56);
  v18 = a3;
  v7 = 0;
  dword_5413F[0] = 0;
  BG_DAT = 0;
  BG_DAT__0 = 0;
  dword_5413F[0] = (int)sub_111BA(v6, a2, a3, a4, (int)aBgDat, 0, 0);// "BG.DAT"
  BG_DAT = (int)sub_111BA(dword_5413F[0], a2, a3, a4, (int)aBgDat, BG_DAT, 1);// "BG.DAT"
  BG_DAT__0 = (int)sub_111BA(BG_DAT, a2, a3, a4, (int)aBgDat, BG_DAT__0, 2);// "BG.DAT"
  v8 = malloc(&loc_1F400);
  v14 = 3 * *(unsigned __int8 *)(80 * a5 + n8_0 + 7);
  arg0_1 = sub_111BA(v14, *(unsigned __int8 *)(80 * a5 + n8_0 + 7), a3, a4, (int)aFiganiDat, 0, v14);// "FIGANI.DAT"
  arg0_2 = sub_111BA(3 * n50, n50, a3, a4, (int)aFiganiDat, 0, 3 * n50);// "FIGANI.DAT"
  v15 = malloc(64000);
  v9 = memmove(v15, 655360, 64000);
  LODWORD(v9) = sub_1F882(v9, SHIDWORD(v9), a3, a4);
  sub_17AA9(v9, SHIDWORD(v9), a3, a4, 1);
  for ( n8 = 8; n8 >= 0; --n8 )
  {
    memset(v8, 0, &loc_1F400);
    if ( &v15 )
    {
      HIDWORD(v9) = (v7 + 1) % 3;
      v7 = HIDWORD(v9);
    }
    sub_4E98D((__int16 *)dword_5413F[v7], 0, 50, v8, 640, -1);
    LOBYTE(v9) = sub_2EB9F(v8 + 10 * n8, SHIDWORD(v9), a3, a4, (int)arg0_1, 0, v8 + 10 * n8, 640, -1);
    sub_11EB0(v9, SHIDWORD(v9), a3, a4, 655360, 320, v8, 640, 320, 200);
    sub_11D40(6 * n8, SHIDWORD(v9), a3, a4, 0, 255, 6 * n8);
  }
  sub_2FE14(arg0_1, v8, 16);
  for ( n20 = 0; n20 < 20; ++n20 )
  {
    sub_11DF2(3 * n20, SHIDWORD(v9), a3, a4, 0, 255, 3 * n20);
    j___delay(10);
  }
  memset(v8, 0, &loc_1F400);
  LOBYTE(v9) = sub_4E98D((__int16 *)dword_5413F[0], 0, 50, v8, 640, -1);
  LOBYTE(v9) = sub_2EB9F(v9, SHIDWORD(v9), a3, a4, (int)arg0_2, 0, v8 + 10 * n20, 640, -1);
  LODWORD(v9) = sub_11EB0(v9, SHIDWORD(v9), a3, a4, 655360, 320, v8, 640, 320, 200);
  sub_11D40(v9, SHIDWORD(v9), a3, a4, 0, 255, 0);
  LODWORD(v9) = sub_2FE14(arg0_2, v8, 24);
  sub_1F882(v9, SHIDWORD(v9), a3, a4);
  v12 = memmove(655360, v15, 64000);
  sub_1F525(v12, SHIDWORD(v12), a3, a4);
  free(v15);
  free(dword_5413F[0]);
  free(BG_DAT);
  free(BG_DAT__0);
  free(arg0_1);
  free(arg0_2);
  return free(v8);
}
