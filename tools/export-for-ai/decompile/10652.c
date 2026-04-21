/*
 * func-name: sub_10652
 * func-address: 0x10652
 * callers: 0x10010, 0x1088d, 0x24754
 * callees: 0x111ba, 0x24d22, 0x3702f, 0x3706e, 0x3776e, 0x4e98d
 */

int sub_10652()
{
  int result; // eax
  int n462; // edi
  int n226; // esi
  unsigned __int8 n16; // bl
  int v4; // eax

  result = sub_3702F(44);
  n462 = 462;
  n226 = 226;
  n16 = 16;
  if ( dword_53AFF )
    result = free(dword_53AFF);
  dword_53AFF = 0;
  if ( dword_53B03 )
    result = free(dword_53B03);
  dword_53B03 = 0;
  switch ( n17 )
  {
    case 9:
    case 24:
    case 25:
      v4 = sub_111BA((int)aFdotherDat, dword_53AFF, 15);// "FDOTHER.DAT"
LABEL_25:
      dword_53AFF = v4;
      result = malloc(64000);
      dword_53B03 = result;
      return result;
    case 17:
    case 21:
    case 22:
    case 27:
      switch ( n17 )
      {
        case 21:
          n462 = 408;
          n226 = 276;
          n16 = 35;
          break;
        case 22:
          n462 = 408;
          n226 = 256;
          n16 = 40;
          break;
        case 27:
          n226 = 244;
          n16 = 46;
          break;
      }
      dword_53AFF = malloc(n226 * n462);
      dword_53B03 = sub_111BA((int)aFdotherDat, dword_53B03, n16);// "FDOTHER.DAT"
      sub_4E98D(dword_53B03, 0, 0, dword_53AFF, n462, -1);
      dword_53B03 = sub_111BA((int)aFdotherDat, dword_53B03, n16 + 1);// "FDOTHER.DAT"
      sub_4E98D(dword_53B03, 0, n226 / 2, dword_53AFF, n462, -1);
      result = free(dword_53B03);
      dword_53B03 = 0;
      break;
    case 23:
      dword_53AFF = malloc(59904);
      dword_53B03 = sub_111BA((int)aFdotherDat, dword_53B03, 42);// "FDOTHER.DAT"
      sub_4E98D(dword_53B03, 0, 0, dword_53AFF, 312, -1);
      free(dword_53B03);
      dword_53B03 = 0;
      return sub_24D22(0);
    case 28:
    case 29:
      v4 = sub_111BA((int)aFdotherDat, dword_53AFF, 55);// "FDOTHER.DAT"
      goto LABEL_25;
  }
  return result;
}
