/*
 * func-name: sub_230F2
 * func-address: 0x230f2
 * callers: 0x15311, 0x1cff0, 0x25bf4
 * callees: 0x112a5, 0x11506, 0x15f84, 0x233c6, 0x34894, 0x3702f
 */

void __usercall sub_230F2(__int32 a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<ebx>, int a5, ...)
{
  int v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  __int32 v8; // eax
  unsigned __int8 v9; // [esp+7h] [ebp-19h] BYREF
  int v10; // [esp+8h] [ebp-18h]
  __int16 v11; // [esp+Ch] [ebp-14h]
  char v12; // [esp+Eh] [ebp-12h]
  int v13; // [esp+10h] [ebp-10h]
  __int16 v14; // [esp+14h] [ebp-Ch]
  char v15; // [esp+16h] [ebp-Ah]
  _UNKNOWN *retaddr; // [esp+20h] [ebp+0h] BYREF
  int v17; // [esp+28h] [ebp+8h] BYREF
  va_list va; // [esp+28h] [ebp+8h]
  int v19; // [esp+2Ch] [ebp+Ch]
  va_list va1; // [esp+30h] [ebp+10h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v5 = sub_3702F(a1, a2, a4, a3, 80);
  v13 = unk_520BA;
  v14 = unk_520BE;
  v15 = unk_520C0;
  v10 = unk_520C1;
  v11 = unk_520C5;
  v12 = unk_520C7;
  sub_11506(v5, a2, a4, a3);
  v6 = sub_34894(6);
  if ( v6 )
  {
    sub_15F84(&v9, v6, a2, a3, a4, arg0_0, 6, 655360, 320, 205, 76, 74, 19, 1);
    JUMPOUT(0x2328A);
  }
  v7 = sub_233C6(va1, (int *)va, &retaddr, 0, 6, 0, 0, 0, 0, 2, 0);
  sub_15F84(&v9, v7, a2, a3, a4, arg0_0, 7, 655360, 320, 205, 76, 74, 19, 1);
  sub_112A5(v8, a2, a4, a3, 2u);
  JUMPOUT(0x23285);
}
