/*
 * func-name: sub_4CE84
 * func-address: 0x4ce84
 * callers: 0x4c6e8, 0x4c980, 0x4ce64, 0x4ced6
 * callees: 0x4b882, 0x4bc86
 */

void __usercall sub_4CE84(int a1@<ecx>, int a2@<esi>)
{
  int v2; // edi
  unsigned __int64 v3; // rax
  int v4; // esi
  int v5; // esi
  int v6; // esi
  unsigned int vars0; // [esp+0h] [ebp+0h]
  unsigned int vars4; // [esp+4h] [ebp+4h]
  __int16 vars8; // [esp+8h] [ebp+8h]
  int varsC; // [esp+Ch] [ebp+Ch]

  v2 = a1;
  v3 = *(_QWORD *)a1;
  LOWORD(a2) = *(_WORD *)(a1 + 8);
  do
  {
    v4 = __ROL4__(a2, 16);
    LOWORD(v4) = vars8;
    v5 = __ROL4__(v4, 16);
    LODWORD(v3) = sub_4BC86(v3, vars4, vars0, v5);
    v2 += 10;
    v6 = __ROL4__(v5, 16);
    LOWORD(v6) = *(_WORD *)(v2 + 8);
    a2 = __ROL4__(v6, 16);
    LODWORD(v3) = sub_4B882(v3, *(_DWORD *)(v2 + 4), *(_DWORD *)v2, a2);
    --varsC;
  }
  while ( varsC );
}
