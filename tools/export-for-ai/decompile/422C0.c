/*
 * func-name: sub_422C0
 * func-address: 0x422c0
 * callers: 0x42980, 0x43ad0, 0x447d0, 0x44f00, 0x450b0, 0x45240
 * callees: 0x382e9
 */

int __cdecl sub_422C0(int a1, char a2, char a3, char a4)
{
  unsigned int n128; // eax
  int n2; // eax
  int n2_1; // edi
  int v7; // eax
  int v8; // edx
  int result; // eax
  int v10; // edx
  int v11; // edx
  _BYTE v12[4]; // [esp+0h] [ebp-14h] BYREF
  __int16 v13; // [esp+4h] [ebp-10h]

  n128 = a2 & 0xF0;
  if ( n128 < 0xB0 )
  {
    if ( n128 < 0x90 )
    {
      if ( n128 != 128 )
      {
LABEL_16:
        n2 = 0;
        goto LABEL_17;
      }
    }
    else if ( n128 > 0x90 && n128 != 160 )
    {
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  if ( n128 > 0xB0 )
  {
    if ( n128 < 0xD0 )
    {
      if ( n128 != 192 )
        goto LABEL_16;
    }
    else if ( n128 > 0xD0 )
    {
      if ( n128 != 224 )
        goto LABEL_16;
      goto LABEL_14;
    }
    n2 = 2;
    goto LABEL_17;
  }
LABEL_14:
  n2 = 3;
LABEL_17:
  n2_1 = n2;
  if ( (unsigned int)(*(_DWORD *)(a1 + 428) + n2) > 0x200 && *(int *)(a1 + 424) > 0 )
  {
    v13 = *(_WORD *)(a1 + 424);
    sub_382E9((int)v12, *(_DWORD *)a1, 1282, (int)v12, 0);
    *(_DWORD *)(a1 + 424) = 0;
    *(_DWORD *)(a1 + 428) = 0;
  }
  v7 = *(_DWORD *)(a1 + 428);
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 428) = v7 + 1;
  *(_BYTE *)(v8 + v7 + 256) = a2;
  result = *(_DWORD *)(a1 + 428);
  v10 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 428) = result + 1;
  *(_BYTE *)(v10 + result + 256) = a3;
  if ( n2_1 == 3 )
  {
    result = *(_DWORD *)(a1 + 428);
    v11 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 428) = result + 1;
    *(_BYTE *)(v11 + result + 256) = a4;
  }
  ++*(_DWORD *)(a1 + 424);
  return result;
}
