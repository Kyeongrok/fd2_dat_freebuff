/*
 * func-name: sub_4C4BD
 * func-address: 0x4c4bd
 * callers: 0x4b122, 0x4b681
 * callees: 0x4c523
 */

int __usercall sub_4C4BD@<eax>(int a1@<eax>, int a2@<edx>, int a3@<edi>)
{
  __int16 v4; // si
  __int64 v5; // rax
  int v6; // [esp-1Ch] [ebp-1Ch]

  if ( !*(_WORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) && !*(_DWORD *)a1 )
    return 0;
  if ( *(_WORD *)(a2 + 8) || *(_DWORD *)(a2 + 4) || *(_DWORD *)a2 )
  {
    v4 = *(_WORD *)(a1 + 8);
    LOWORD(a3) = *(_WORD *)(a2 + 8);
    v5 = sub_4C523(a1);
    *(_QWORD *)v6 = v5;
    *(_WORD *)(v6 + 8) = v4;
    return a3;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 8) = 0;
    return 0;
  }
}
