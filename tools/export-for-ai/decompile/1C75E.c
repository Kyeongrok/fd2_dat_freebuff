/*
 * func-name: sub_1C75E
 * func-address: 0x1c75e
 * callers: 0x20c6f, 0x2111a, 0x21227, 0x213b7, 0x21548, 0x2ff01
 * callees: 0x1c81f, 0x1f183, 0x3702f, 0x4e866, 0x4ebe3
 */

int __fastcall sub_1C75E(__int32 a1, int a2, int a3, int a4, int a5, int n9)
{
  int v6; // esi
  __int16 *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // edx
  _BYTE dst_[112]; // [esp+4h] [ebp-80h] BYREF
  int v14; // [esp+74h] [ebp-10h]
  int v15; // [esp+80h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 140);
  v15 = a3;
  qmemcpy(dst_, &src__19, sizeof(dst_));
  v6 = *(unsigned __int8 *)(80 * a5 + dword_53A45 + 32);
  v7 = (__int16 *)sub_4E866(n9);
  v8 = *(_DWORD *)&dst_[4 * v6 - 4] * *v7 / 10;
  v9 = *((unsigned __int8 *)v7 + 2);
  v14 = v9;
  if ( n9 > 9 && n9 < 13 )
  {
    v9 = sub_1F183(a5);
    if ( v9 )
      return 0;
  }
  v10 = sub_4EBE3(v9) % 100;
  if ( v10 >= v14 )
    return 0;
  else
    return sub_1C81F(a5, v8);
}
