/*
 * func-name: sub_49690
 * func-address: 0x49690
 * callers: 0x404c0
 * callees: 0x489c6, 0x489e7, 0x48a0b, 0x48a37
 */

int __cdecl sub_49690(int a1)
{
  int v1; // ecx
  _DWORD *v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rax
  int p_sub_10000; // eax
  char *v6; // edx
  unsigned int v7; // eax
  int v8; // ebx
  _DWORD *v9; // edi
  int v10; // ebx
  unsigned int v11; // esi
  int v12; // ebx
  int result; // eax
  int v14; // ebx

  v1 = a1;
  v2 = *(_DWORD **)a1;
  v3 = 0;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 24) == 2 || v2[6] == 3 )
    v3 = 1;
  if ( *(_DWORD *)(a1 + 52) == 2 || *(_DWORD *)(a1 + 52) == 3 )
  {
    v3 |= 2u;
    if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
      v3 |= 4u;
  }
  if ( *(_DWORD *)(a1 + 52) == 1 || *(_DWORD *)(a1 + 52) == 3 )
    v3 |= 8u;
  if ( *(_DWORD *)(a1 + 64) == 127 && *(_DWORD *)(a1 + 68) == 64 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
      v3 |= 0x10u;
  }
  else
  {
    v3 |= 0x40u;
  }
  dword_538A0 = v3;
  LODWORD(v4) = 0;
  HIDWORD(v4) = *(_DWORD *)(a1 + 60);
  if ( SHIDWORD(v4) <= 0 )
    HIDWORD(v4) = 1;
  p_sub_10000 = v4 / (unsigned int)(v2[5] << 16);
  v6 = (char *)(p_sub_10000 - (_DWORD)sub_10000);
  if ( p_sub_10000 <= (int)sub_10000 )
    v6 = (char *)sub_10000 - p_sub_10000;
  if ( (unsigned int)v6 > dword_54324 )
  {
    LODWORD(qword_538B4) = p_sub_10000 << 16;
    v7 = HIWORD(p_sub_10000);
    v8 = v7 + 1;
    if ( (dword_538A0 & 2) != 0 )
    {
      v7 *= 2;
      v8 *= 2;
    }
    if ( (dword_538A0 & 8) != 0 )
    {
      v7 *= 2;
      v8 *= 2;
    }
    HIDWORD(qword_538B4) = v7;
    dword_538BC = v8;
    dword_538A0 |= 0x20u;
  }
  dword_538AC = v2[20];
  dword_538B0 = v2[19] + dword_538AC;
  v9 = (_DWORD *)dword_538AC;
  do
  {
    v10 = *(_DWORD *)(v1 + 40);
    dword_538A4 = *(_DWORD *)(v1 + 4 * v10 + 24) + *(_DWORD *)(v1 + 4 * v10 + 8);
    dword_538A8 = *(_DWORD *)(v1 + 4 * v10 + 16) + *(_DWORD *)(v1 + 4 * v10 + 8);
    if ( *(_DWORD *)(v1 + 2120) )
      (*(void (__stdcall **)(int))(v1 + 2120))(v1);
    v11 = dword_538A4;
    ((void (__usercall *)(int@<eax>, _DWORD *@<edi>, _BYTE *@<esi>))funcs_497CC[dword_538A0])(
      0,
      v9,
      (_BYTE *)dword_538A4);
    v1 = a1;
    v12 = *(_DWORD *)(a1 + 40);
    result = v11 - *(_DWORD *)(a1 + 4 * v12 + 8);
    *(_DWORD *)(a1 + 4 * v12 + 24) = result;
    if ( v11 < dword_538A8 )
      break;
    if ( *(_DWORD *)(a1 + 2124) )
      result = (*(int (__stdcall **)(int))(a1 + 2124))(a1);
    if ( *(_DWORD *)(a1 + 48) )
    {
      if ( *(_DWORD *)(a1 + 48) == 1 )
      {
        v14 = *(_DWORD *)(a1 + 40) ^ 1;
        if ( *(_DWORD *)(a1 + 4 * v14 + 32) )
        {
          *(_DWORD *)(a1 + 4) = 2;
          if ( *(_DWORD *)(a1 + 2128) )
            return (*(int (__stdcall **)(int))(a1 + 2128))(a1);
          return result;
        }
        if ( !*(_DWORD *)(a1 + 4 * v14 + 16) || *(_DWORD *)(a1 + 4 * v14 + 24) )
          return result;
        *(_DWORD *)(a1 + 40) = v14;
      }
      else
      {
        --*(_DWORD *)(a1 + 48);
      }
    }
    *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 40) + 24) = 0;
  }
  while ( (unsigned int)v9 < dword_538B0 );
  return result;
}
