/*
 * func-name: sub_367D1
 * func-address: 0x367d1
 * callers: none
 * callees: 0x3645d, 0x3669a, 0x3706e, 0x37910, 0x3d074, 0x3d2c0, 0x3d36c
 */

int __cdecl sub_367D1(int a1, char a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v7; // ecx
  unsigned int i; // edi
  int v9; // ecx
  unsigned int j; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int k; // edi
  int v16; // edx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  _DWORD v22[100]; // [esp+0h] [ebp-2CCh]
  _BYTE v23[20]; // [esp+190h] [ebp-13Ch] BYREF
  unsigned int v24; // [esp+1A4h] [ebp-128h]
  unsigned int v25; // [esp+1B8h] [ebp-114h]
  char v26; // [esp+1BCh] [ebp-110h]
  int v27; // [esp+1D0h] [ebp-FCh]
  unsigned int v28; // [esp+1D4h] [ebp-F8h]
  int v29; // [esp+1D8h] [ebp-F4h]
  int v30; // [esp+1F8h] [ebp-D4h]
  int v31; // [esp+1FCh] [ebp-D0h]
  int v32; // [esp+210h] [ebp-BCh]
  _DWORD v33[10]; // [esp+23Ch] [ebp-90h]
  int v34; // [esp+264h] [ebp-68h] BYREF
  char v35; // [esp+26Ch] [ebp-60h]
  unsigned int v36; // [esp+274h] [ebp-58h]
  int v37; // [esp+27Ch] [ebp-50h] BYREF
  unsigned __int16 v38; // [esp+280h] [ebp-4Ch]
  int v39; // [esp+284h] [ebp-48h] BYREF
  int v40; // [esp+288h] [ebp-44h] BYREF
  int n8224; // [esp+28Ch] [ebp-40h] BYREF
  int v42; // [esp+290h] [ebp-3Ch] BYREF
  int v43; // [esp+294h] [ebp-38h]
  int v44; // [esp+298h] [ebp-34h]
  int v45; // [esp+29Ch] [ebp-30h]
  int v46; // [esp+2A0h] [ebp-2Ch]
  int v47; // [esp+2A4h] [ebp-28h]
  int v48; // [esp+2A8h] [ebp-24h]
  unsigned __int16 v49; // [esp+2ACh] [ebp-20h] BYREF
  unsigned __int16 v50; // [esp+2B0h] [ebp-1Ch] BYREF
  _BYTE v51[4]; // [esp+2B4h] [ebp-18h] BYREF
  _BYTE v52[4]; // [esp+2B8h] [ebp-14h] BYREF
  _BYTE v53[16]; // [esp+2BCh] [ebp-10h] BYREF

  n8224 = 8224;
  v44 = 0;
  if ( (a2 & 1) != 0 )
  {
    v3 = a1;
  }
  else
  {
    v3 = open(a1, 512, v22[0]);
    if ( v3 == -1 )
      return 0;
  }
  v4 = sub_3669A(a1, a2);
  v5 = v4;
  if ( (a2 & 4) == 0 || (a3 = malloc_0(v4)) != 0 )
  {
    memset(a3, 0, v5);
    v48 = a3;
    sub_3645D(v3, 60, a2, (int)&v42, 4);
    sub_3645D(v3, v42, a2, (int)&n8224, 2);
    if ( !strcmp(&n8224, aLx) )                 // "LX"
    {
      sub_3645D(v3, v42, a2, (int)v23, 172);
      v7 = v27 + v42;
      for ( i = 0; i < v28; ++i )
      {
        v46 = sub_3645D(v3, v7, a2, (int)&v34, 24);
        v9 = v29 + v42;
        for ( j = 0; j < v36; ++j )
        {
          v11 = sub_3645D(v3, v9, a2, (int)&v37, 8);
          if ( !j )
          {
            if ( (v35 & 2) != 0 && (v35 & 1) != 0 && (v48 & 0xF) != 0 && i )
              v48 += 16 - (a3 & 0xF);
            v33[i + 1] = v48;
          }
          v12 = v44;
          v13 = v48;
          v22[v44] = v48;
          v43 = v11;
          v44 = v12 + 1;
          if ( v34 - (v13 - v33[i + 1]) >= (unsigned int)v38 )
            v47 = v38;
          else
            v47 = v34 - (v13 - v33[i + 1]);
          sub_3645D(v3, (v37 << v26) + v32, a2, v48, v47);
          v48 += v47;
          v9 = v43;
        }
        v7 = v46;
      }
      v14 = sub_3645D(v3, v30 + v42, a2, (int)&v40, 4);
      for ( k = 0; ; ++k )
      {
        if ( k >= v24 )
        {
          if ( (a2 & 1) == 0 )
            close(v3);
          return a3;
        }
        v16 = sub_3645D(v3, v14, a2, (int)&v39, 4);
        v14 = v16;
        if ( v40 != v39 )
          break;
LABEL_37:
        v40 = v39;
      }
      v45 = v16;
      v17 = v31 + v40 + v42;
      while ( 1 )
      {
        v18 = sub_3645D(v3, v17, a2, (int)v52, 1);
        v19 = sub_3645D(v3, v18, a2, (int)v53, 1);
        if ( (v52[0] & 7) == 0 || (v53[0] & 4) != 0 && (v53[0] & 0x20) == 0 )
          break;
        if ( (v52[0] & 0x20) != 0 )
          break;
        v20 = sub_3645D(v3, v19, a2, (int)&v49, 2);
        v21 = sub_3645D(v3, v20, a2, (int)v51, 1);
        v17 = sub_3645D(v3, v21, a2, (int)&v50, 2);
        if ( v49 <= v25 )
          *(_DWORD *)(v49 + v22[k]) = v50 + v33[v51[0]];
        if ( v17 >= v31 + v42 + v39 )
        {
          v14 = v45;
          goto LABEL_37;
        }
      }
    }
  }
  if ( (a2 & 1) == 0 )
    close(v3);
  return 0;
}
