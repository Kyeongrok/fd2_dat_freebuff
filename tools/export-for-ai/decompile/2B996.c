/*
 * func-name: sub_2B996
 * func-address: 0x2b996
 * callers: 0x2ff01, 0x31266
 * callees: 0x25a96, 0x2eb9f, 0x3702f
 */

void __fastcall sub_2B996(__int32 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned __int8 a9)
{
  int v9; // ecx
  int n8; // edx
  int n7; // ebx
  __int32 v12; // eax
  int n8_1; // ebx
  int n7_1; // ebx
  int n7_2; // ebx
  _DWORD dst__1[7]; // [esp+0h] [ebp-54h] BYREF
  _DWORD dst_[7]; // [esp+1Ch] [ebp-38h] BYREF
  void (__noreturn *v18)(); // [esp+38h] [ebp-1Ch]
  __int16 v19; // [esp+3Ch] [ebp-18h]
  char v20; // [esp+3Eh] [ebp-16h]
  int v21; // [esp+40h] [ebp-14h]
  int v22; // [esp+50h] [ebp-4h]

  sub_3702F(a1, a2, a3, a4, 108);
  v22 = a3;
  v21 = 0;
  v18 = off_524EE;
  v19 = unk_524F2;
  v20 = unk_524F4;
  qmemcpy(dst_, &src__45, sizeof(dst_));
  qmemcpy(dst__1, &src__46, sizeof(dst__1));
  v9 = 0;
  n8 = n8_0;
  if ( !*(_BYTE *)(n8_0 + 80 * a5 + 6) )
  {
    for ( n7 = 0; n7 < 7; ++n7 )
      dst_[n7] += 148;
  }
  v12 = a9;
  switch ( a9 )
  {
    case 3u:
      for ( n8_1 = 0; n8_1 < 8; ++n8_1 )
        dword_53F76[n8_1] = -2 * n8_1;
      goto LABEL_28;
    case 4u:
      for ( n7_1 = 0; n7_1 < 7; ++n7_1 )
      {
        if ( dword_53F76[n7_1] == 3 )
          sub_25A96(v12, n8, n7_1, v9, dword_54153, 1, 1);
        v12 = 4 * n7_1;
        if ( (unsigned int)dword_53F76[n7_1] < 0x10 )
        {
          n8 = *((unsigned __int8 *)&v18 + n7_1);
          if ( n8 == 1 )
          {
            v9 = dst_[n7_1] + a7;
            n8 = v9 + a8 * dst__1[n7_1];
            LOBYTE(v12) = sub_2EB9F(a6, dword_53F76[n7_1], n8, a8, -1);
          }
        }
      }
      break;
    case 5u:
      for ( n7_2 = 0; n7_2 < 7; ++n7_2 )
      {
        if ( (unsigned int)dword_53F76[n7_2] < 0x10 && !*((_BYTE *)&v18 + n7_2) )
          sub_2EB9F(a6, dword_53F76[n7_2], dst_[n7_2] + a7 + a8 * dst__1[n7_2], a8, -1);
        if ( ++dword_53F76[n7_2] == 9 )
          v21 = 1;
      }
LABEL_28:
      JUMPOUT(0x2C93D);
  }
  JUMPOUT(0x2C93B);
}
