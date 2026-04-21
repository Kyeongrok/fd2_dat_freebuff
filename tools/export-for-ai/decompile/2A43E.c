/*
 * func-name: sub_2A43E
 * func-address: 0x2a43e
 * callers: 0x29daa
 * callees: 0x15f84, 0x16559, 0x16c57, 0x187d6, 0x1956b, 0x197e5, 0x19953, 0x25977, 0x26996, 0x26b91, 0x28b41, 0x2a07a, 0x2a29d, 0x3702f, 0x4ebff
 */

int __usercall sub_2A43E@<eax>(__int32 a1@<eax>, int n8@<edx>, int a3@<ecx>, int n6@<ebx>, unsigned __int8 *a5@<edi>)
{
  int n5; // ebx
  int v6; // eax
  __int32 v7; // eax
  int v8; // eax
  __int32 v9; // eax
  int result; // eax
  int v11; // eax
  __int32 v12; // eax
  int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  int v16; // ebx
  __int32 v17; // eax
  __int32 v18; // eax
  __int32 v19; // esi
  __int32 v20; // eax
  __int32 v21; // eax
  int v22; // eax
  __int32 v23; // eax
  int v24; // eax
  int v25; // eax
  __int32 v26; // eax
  _BYTE v27[36]; // [esp+0h] [ebp-28h] BYREF
  int n6_1; // [esp+24h] [ebp-4h]

  sub_3702F(a1, n8, n6, a3, 80);
  n6_1 = n6;
  while ( 1 )
  {
    n5 = sub_2A07A((__int32)v27, n8, n6, a3, (int)v27);
    if ( !n5 )
      break;
    v11 = sub_1956B((unsigned __int8)byte_5238B, n8, n5, a3, (unsigned __int8)byte_5238B);
    sub_15F84(a5, v11, n8, a3, n5, arg0, 589, 693452, 320, 205, 76, 74, 19, 1);
    v13 = sub_16559(v12, n8, n5, a3, 0);
    sub_16C57(v13, n8, n5, a3, 1);
    sub_26996(v14, n8, n5, a3);
    sub_2A29D((__int32)v27, n8, n5, a3, n5, (int)v27);
    v16 = v15;
    result = sub_26996(v15, n8, v15, a3);
    if ( v16 == -1 )
      return result;
    sub_1956B((unsigned __int8)byte_5238B, n8, v16, a3, (unsigned __int8)byte_5238B);
    n6 = n8_0 + 80 * (unsigned __int8)v27[n3_3];
    dword_53AD9 = *(unsigned __int8 *)(n6 + 8) + 1;
    arg4 = word_52397[*(unsigned __int8 *)(n6 + 32)] * *(unsigned __int8 *)(n6 + 33);
    sub_15F84(a5, arg4, n8, a3, n6, arg0, 590, 693452, 320, 205, 76, 74, 19, 1);
    sub_19953(v17, n8, n6, a3);
    v19 = v18;
    sub_197E5(v18, n8, n6, a3);
    if ( v19 == -1 || n3_3 )
    {
LABEL_9:
      sub_26996(v20, n8, n6, a3);
    }
    else
    {
      if ( n6_6 < arg4 )
      {
        sub_15F84(a5, n6_6, n8, a3, n6, arg0, 504, 705612, 320, 205, 76, 74, 19, 1);
        v22 = sub_16559(v21, n8, n6, a3, 0);
        sub_16C57(v22, n8, n6, a3, 1);
        goto LABEL_9;
      }
      sub_26B91(n6_6, n8, n6, a3, arg4);
      *(_BYTE *)(n6 + 5) = 0;
      *(_WORD *)(n6 + 64) = *(_WORD *)(n6 + 66);
      n6 = *(_DWORD *)(dword_53F66 + 10) + dword_53F66;
      sub_4EBFF(dword_53C5F + 30405, n6, 320);
      LOBYTE(v23) = sub_187D6(dword_53C5F + 31696, n8, n6, a3, dword_53C5F + 31696, 320, n6_6, 31, 8);
      v24 = sub_26996(v23, n8, n6, a3);
      v25 = sub_25977(v24, n8, n6, a3, 17, 1);
      LOWORD(v26) = sub_28B41(v25, n8, n6, a3);
      sub_25977(v26, n8, n6, a3, 11, 1);
    }
  }
  v6 = sub_1956B((unsigned __int8)byte_5238B, n8, 0, a3, (unsigned __int8)byte_5238B);
  sub_15F84(a5, v6, n8, a3, 0, arg0, 588, 693452, 320, 205, 76, 74, 19, 1);
  v8 = sub_16559(v7, n8, 0, a3, 0);
  sub_16C57(v8, n8, 0, a3, 0);
  return sub_26996(v9, n8, 0, a3);
}
