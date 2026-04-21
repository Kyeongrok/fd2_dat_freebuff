/*
 * func-name: sub_32230
 * func-address: 0x32230
 * callers: 0x12eaa, 0x1300d, 0x13185, 0x13315, 0x1366a
 * callees: 0x1f183, 0x25a96, 0x3702f
 */

int __fastcall sub_32230(__int32 a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int result; // eax
  int v7; // edx
  _BYTE dst_[32]; // [esp+2h] [ebp-2Ch] BYREF
  int n6; // [esp+22h] [ebp-Ch]

  v5 = sub_3702F(a1, a2, a3, a4, 60);
  qmemcpy(dst_, &src__55, 0x1Cu);
  dst_[28] = unk_52741;
  if ( sub_1F183(v5, a2, a3, 0, a5) )
  {
    n6 = 6;
    result = (unsigned __int8)byte_54132 / 6;
    if ( !((unsigned __int8)byte_54132 % 6) )
      result = sub_25A96(result, 0, a3, 0, FDOTHER_DAT__1, 10, 1);
    goto LABEL_12;
  }
  if ( !dst_[*(unsigned __int8 *)(n8_0 + 80 * a5 + 32) - 1] )
  {
    v7 = (unsigned __int8)byte_54132;
    n6 = 6;
    goto LABEL_6;
  }
  if ( dst_[*(unsigned __int8 *)(n8_0 + 80 * a5 + 32) - 1] == 1 )
  {
    v7 = (unsigned __int8)byte_54132;
    n6 = 4;
LABEL_6:
    result = v7 / n6;
    if ( !(v7 % n6) )
      result = sub_25A96(result, 0, a3, 0, FDOTHER_DAT__1, 9, 1);
    goto LABEL_12;
  }
  n6 = 9;
  result = (unsigned __int8)byte_54132 / 9;
  if ( !((unsigned __int8)byte_54132 % 9) )
    result = sub_25A96(result, 0, a3, 0, FDOTHER_DAT__1, 11, 1);
LABEL_12:
  ++byte_54132;
  return result;
}
