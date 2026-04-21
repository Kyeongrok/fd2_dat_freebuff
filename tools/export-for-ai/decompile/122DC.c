/*
 * func-name: sub_122DC
 * func-address: 0x122dc
 * callers: 0x11cac, 0x18b84
 * callees: 0x126f7, 0x3702f
 */

int __fastcall sub_122DC(__int32 a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp-8h] [ebp-8h]
  int n5; // [esp-4h] [ebp-4h]

  result = sub_3702F(a1, a2, a3, a4, 16);
  switch ( dword_51A83 )
  {
    case 1:
      n5 = 0;
LABEL_3:
      v5 = dword_53AB5;
      return sub_126F7(dword_53AB1, v5, n5);
    case 2:
      n5 = 1;
      goto LABEL_3;
    case 3:
      sub_126F7(dword_53AB1, dword_53AB5, 14);
      sub_126F7(dword_53AB1, dword_53AB5 - 1, 2);
      sub_126F7(dword_53AB1 - 1, dword_53AB5, 3);
      sub_126F7(dword_53AB1 + 1, dword_53AB5, 4);
      n5 = 5;
LABEL_8:
      v5 = dword_53AB5 + 1;
      return sub_126F7(dword_53AB1, v5, n5);
    case 4:
      sub_126F7(dword_53AB1, dword_53AB5, 1);
      sub_126F7(dword_53AB1, dword_53AB5 - 2, 2);
      sub_126F7(dword_53AB1 - 2, dword_53AB5, 3);
      sub_126F7(dword_53AB1 + 2, dword_53AB5, 4);
      sub_126F7(dword_53AB1, dword_53AB5 + 2, 5);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 - 1, 6);
      sub_126F7(dword_53AB1 + 1, dword_53AB5 - 1, 7);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 + 1, 8);
      sub_126F7(dword_53AB1 + 1, dword_53AB5 + 1, 9);
      sub_126F7(dword_53AB1, dword_53AB5 - 1, 10);
      sub_126F7(dword_53AB1 - 1, dword_53AB5, 11);
      sub_126F7(dword_53AB1 + 1, dword_53AB5, 12);
      n5 = 13;
      goto LABEL_8;
    case 5:
      sub_126F7(dword_53AB1, dword_53AB5, 1);
      sub_126F7(dword_53AB1, dword_53AB5 - 3, 2);
      sub_126F7(dword_53AB1 - 3, dword_53AB5, 3);
      sub_126F7(dword_53AB1 + 3, dword_53AB5, 4);
      sub_126F7(dword_53AB1, dword_53AB5 + 3, 5);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 - 2, 6);
      sub_126F7(dword_53AB1 - 2, dword_53AB5 - 1, 6);
      sub_126F7(dword_53AB1 + 1, dword_53AB5 - 2, 7);
      sub_126F7(dword_53AB1 + 2, dword_53AB5 - 1, 7);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 + 2, 8);
      sub_126F7(dword_53AB1 - 2, dword_53AB5 + 1, 8);
      sub_126F7(dword_53AB1 + 1, dword_53AB5 + 2, 9);
      sub_126F7(dword_53AB1 + 2, dword_53AB5 + 1, 9);
      sub_126F7(dword_53AB1, dword_53AB5 - 2, 10);
      sub_126F7(dword_53AB1 - 2, dword_53AB5, 11);
      sub_126F7(dword_53AB1 + 2, dword_53AB5, 12);
      sub_126F7(dword_53AB1, dword_53AB5 + 2, 13);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 - 1, 15);
      sub_126F7(dword_53AB1 + 1, dword_53AB5 - 1, 16);
      sub_126F7(dword_53AB1 - 1, dword_53AB5 + 1, 17);
      return sub_126F7(dword_53AB1 + 1, dword_53AB5 + 1, 18);
    case 6:
      result = dword_53AB1 + dword_53AC1 * dword_53AB5;
      *(_BYTE *)(dword_53A51 + 4 * result + 7) = 0;
      break;
  }
  return result;
}
