/*
 * func-name: sub_28B41
 * func-address: 0x28b41
 * callers: 0x2872b, 0x28cbd, 0x2a43e
 * callees: 0x11df2, 0x16559, 0x16886, 0x17aa9, 0x3702f, 0x3790a, 0x4e381
 */

__int16 __fastcall sub_28B41(__int32 a1, int a2, int n5, int a4)
{
  int v4; // eax
  __int32 v5; // eax
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  int n9; // ebx
  __int32 v11; // eax
  int n64; // ebx
  int v13; // eax
  int n7; // ebx
  __int32 v15; // eax

  v4 = sub_3702F(a1, a2, n5, a4, 24);
  switch ( ::n5 )
  {
    case 1:
      for ( n5 = 0; n5 < 5; ++n5 )
      {
        LOBYTE(v5) = sub_16886(n5 + 23, a2, n5, a4, 669929, 320, dword_53F66, n5 + 23);
        v4 = sub_17AA9(v5, a2, n5, a4, 2);
      }
      goto LABEL_8;
    case 3:
      v6 = sub_17AA9(v4, a2, n5, a4, 1);
      LOBYTE(v7) = sub_16886(v6, a2, n5, a4, 667988, 320, dword_53F66, 23);
      v4 = sub_17AA9(v7, a2, n5, a4, 8);
LABEL_8:
      sub_16559(v4, a2, n5, a4, 0);
      return sub_4E381();
    case 4:
      v8 = sub_16559(v4, a2, n5, a4, 3);
      v9 = sub_17AA9(v8, a2, n5, a4, 2);
      for ( n9 = 0; n9 < 9; ++n9 )
      {
        LOBYTE(v11) = sub_16886(n9 + 23, a2, n9, a4, 665747, 320, dword_53F66, n9 + 23);
        v9 = sub_17AA9(v11, a2, n9, a4, 2);
      }
      for ( n64 = 0; n64 < 64; n64 += 2 )
      {
        sub_11DF2(v9, a2, n64, a4, 0, 255, n64);
        v9 = j___delay(4);
      }
      v13 = sub_17AA9(v9, a2, n64, a4, 10);
      for ( n5 = 62; n5 >= 0; n5 -= 2 )
      {
        sub_11DF2(v13, a2, n5, a4, 0, 255, n5);
        v13 = j___delay(4);
      }
      v4 = sub_17AA9(v13, a2, n5, a4, 5);
      goto LABEL_8;
    case 5:
      for ( n7 = 0; n7 < 7; ++n7 )
      {
        LOBYTE(v15) = sub_16886(n7 + 23, a2, n7, a4, 664451, 320, dword_53F66, n7 + 23);
        sub_17AA9(v15, a2, n7, a4, 2);
      }
      break;
  }
  return sub_4E381();
}
