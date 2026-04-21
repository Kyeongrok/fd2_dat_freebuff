/*
 * func-name: sub_42980
 * func-address: 0x42980
 * callers: 0x42980, 0x42dd0, 0x42ea0, 0x42f50, 0x43230, 0x43270, 0x44f00, 0x450b0, 0x45240
 * callees: 0x3bddf, 0x3c4db, 0x3c5c0, 0x3c636, 0x422c0, 0x427c0, 0x42980, 0x42ea0
 */

void __cdecl sub_42980(int a1, char a2, unsigned int n6, int n6_1, int a5)
{
  int v5; // ecx
  int n127; // edi
  int n176; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ett
  int v13; // eax
  int v14; // ebp
  int v15; // edx
  int n4; // eax
  int n3; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // [esp+0h] [ebp-20h]
  int v26; // [esp+4h] [ebp-1Ch]
  int v27; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]

  n127 = n6_1;
  v27 = *(_DWORD *)a1;
  n176 = a2 & 0xF0;
  v28 = a2 & 0xF;
  v26 = *(_DWORD *)(a1 + 4 * v28 + 144);
  if ( n176 == 176 || n176 == 192 || n176 == 224 )
    sub_427C0(a1 + 208, v28 | n176, n6, n6_1);
  if ( n176 != 176 )
    goto LABEL_31;
  if ( a5 )
  {
    v8 = a1 + 4 * v28;
    if ( *(_DWORD *)(v8 + 656) != -1 )
    {
      n127 = *(_DWORD *)(v8 + 656);
      *(_DWORD *)(v8 + 656) = -1;
    }
  }
  v25 = a1 + 4 * v28;
  v9 = v27 + 4 * v26;
  if ( n6 < 0x6F )
  {
    if ( n6 < 0x6C )
    {
      if ( n6 >= 6 )
      {
        if ( n6 <= 6 )
        {
          sub_42980(a1, a2 & 0xF | 0xB0, 100, 0, 0);
          sub_42980(a1, a2 & 0xF | 0xB0, 101, 0, 0);
          sub_42980(a1, a2 & 0xF | 0xB0, 38, 0, 0);
        }
        else if ( n6 == 7 )
        {
          v12 = n127 * *(_DWORD *)(a1 + 52);
          n127 = v12 / 127;
          if ( v12 / 127 > 127 )
            n127 = 127;
          if ( n127 < 0 )
            n127 = 0;
        }
      }
    }
    else
    {
      if ( n6 > 0x6C )
      {
        if ( n6 <= 0x6D )
        {
          sub_3BDDF(v9, a1, n127);
        }
        else
        {
          v21 = v28 + 1;
          if ( n127 < 64 )
          {
            if ( *(_DWORD *)(v9 + 32) == 1 )
            {
              sub_42EA0(a1, v28);
              sub_3C5C0(v26 + 1, v27, v26 + 1);
              sub_3C636(v24, a1, v21, v21);
            }
          }
          else if ( *(_DWORD *)(v9 + 32) != 1 )
          {
            sub_3C4DB(v9, 4 * v28, v27, v5, v27);
            v23 = v22;
            if ( v22 )
            {
              sub_3C636(v22, a1, v21, v22);
              *(_DWORD *)(v27 + 4 * v23 + 92) = a1;
            }
          }
        }
        return;
      }
      if ( *(_DWORD *)(a1 + 28) )
        *(_DWORD *)(v25 + 656) = (*(int (__cdecl **)(int, int, int))(a1 + 28))(a1, v28, n127);
    }
LABEL_31:
    v10 = v27 + 4 * v26;
    if ( *(_DWORD *)(v10 + 32) != 1 || a1 == *(_DWORD *)(v10 + 96) )
    {
      v11 = v27 + 4 * v26;
      if ( n176 == 144 )
      {
        ++*(_DWORD *)(v11 + 352);
      }
      else if ( n176 == 128 )
      {
        --*(_DWORD *)(v11 + 352);
      }
      *(_DWORD *)(v27 + 4 * v26 + 224) = a1;
      if ( !*(_DWORD *)(v27 + 416)
        || !(*(int (__cdecl **)(int, int, int, unsigned int, int))(v27 + 416))(v27, a1, v26 | n176, n6, n127) )
      {
        sub_422C0(v27, v26 | n176, n6, n127);
      }
    }
    return;
  }
  if ( n6 <= 0x6F )
  {
    if ( *(_DWORD *)(v9 + 32) != 1 )
    {
      if ( n127 >= 64 )
        *(_DWORD *)(v9 + 32) = 2;
      else
        *(_DWORD *)(v9 + 32) = 0;
    }
    return;
  }
  if ( n6 < 0x75 )
  {
    if ( n6 >= 0x73 )
    {
      if ( n6 > 0x73 )
      {
        v15 = a1;
        for ( n4 = 0; n4 < 4; ++n4 )
        {
          if ( *(_DWORD *)(v15 + 128) == -1 )
            break;
          v15 += 4;
        }
        if ( n4 != 4 )
        {
          *(_DWORD *)(a1 + 4 * n4 + 128) = n127;
          *(_DWORD *)(a1 + 4 * n4 + 112) = *(_DWORD *)(a1 + 20);
        }
        return;
      }
      *(_DWORD *)(v25 + 656) = *(unsigned __int8 *)(n127 + *(_DWORD *)(a1 + 24));
    }
    goto LABEL_31;
  }
  if ( n6 <= 0x75 )
  {
    if ( n127 >= 64 )
    {
      n3 = 3;
      v18 = a1 + 12;
      do
      {
        if ( *(_DWORD *)(v18 + 128) != -1 )
          break;
        --n3;
        v18 -= 4;
      }
      while ( n3 >= 0 );
      if ( n3 != -1 )
      {
        v19 = a1 + 4 * n3;
        v20 = *(_DWORD *)(v19 + 128);
        if ( v20 )
        {
          *(_DWORD *)(v19 + 128) = v20 - 1;
          if ( v20 == 1 )
            *(_DWORD *)(v19 + 128) = -1;
          else
            *(_DWORD *)(a1 + 20) = *(_DWORD *)(v19 + 112);
        }
        else
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(v19 + 112);
        }
      }
    }
  }
  else
  {
    if ( n6 <= 0x76 )
    {
      *(_DWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 104) = 0;
      v13 = *(_DWORD *)(a1 + 100);
      v14 = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 104) = v14 - v13;
      return;
    }
    if ( n6 != 119 )
      goto LABEL_31;
    if ( *(_DWORD *)(a1 + 32) )
      (*(void (__cdecl **)(int, int, int))(a1 + 32))(a1, v28, n127);
  }
}
