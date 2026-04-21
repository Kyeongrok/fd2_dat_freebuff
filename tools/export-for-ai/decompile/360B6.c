/*
 * func-name: sub_360B6
 * func-address: 0x360b6
 * callers: 0x117e7, 0x16f55, 0x190ac, 0x1a813, 0x1aa1d, 0x1d80b, 0x1d8ba
 * callees: 0x10b4e, 0x13512, 0x15f84, 0x361b0, 0x3702f, 0x3790a
 */

void __usercall sub_360B6(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, unsigned __int8 *a5@<edi>)
{
  int v5; // eax
  int n4; // ebx
  __int32 v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  unsigned __int8 n3; // [esp+0h] [ebp-8h]

  v5 = sub_3702F(a1, a2, a4, a3, 48);
  n4 = *(unsigned __int8 *)(n8_1 + 17);
  if ( n4 == 4 )
  {
    sub_15F84(a5, v5, a2, a3, 4, arg0_0, 2, 655360, 320, 205, 76, 74, 19, 1);
    sub_10B4E(v7, a2, 4, a3, 1);
    *(_BYTE *)(n8_1 + 21) = n6_0 - 3;
    *(_BYTE *)(dword_53A55 + 9) = n999;
    ((void (*)(void))sub_361B0)();
    v8 = j___delay(400);
    sub_361B0(v8);
    v9 = j___delay(400);
    for ( n3 = 3; n3 <= 6u; ++n3 )
    {
      v10 = sub_361B0(v9);
      sub_15F84(a5, v10, SHIDWORD(v10), a3, n3, arg0_0, n3, 655360, 320, 205, 76, 74, 19, 1);
    }
  }
  else
  {
    sub_13512(v5, a2, n4, a3, 1);
    ++*(_BYTE *)(n8_1 + 17);
    *(_BYTE *)(dword_53A55 + 6) = n999 + 1;
  }
}
