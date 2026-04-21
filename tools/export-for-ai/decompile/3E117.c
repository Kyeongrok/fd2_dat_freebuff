/*
 * func-name: sub_3E117
 * func-address: 0x3e117
 * callers: 0x37b29, 0x3dab1
 * callees: 0x3e337, 0x3e619
 */

int __cdecl sub_3E117(int a1, _BYTE *a2, _DWORD *a3, void (__cdecl *a4)(int *, int))
{
  char *v4; // esi
  char n110; // al
  int v6; // esi
  int v13; // [esp-4h] [ebp-54h]
  int v14; // [esp-4h] [ebp-54h]
  int v15; // [esp-4h] [ebp-54h]
  int v16; // [esp-4h] [ebp-54h]
  int v17; // [esp-4h] [ebp-54h]
  _BYTE v18[40]; // [esp+0h] [ebp-50h] BYREF
  int v19; // [esp+28h] [ebp-28h] BYREF
  int v20; // [esp+2Ch] [ebp-24h]
  int v21; // [esp+30h] [ebp-20h]
  int v22; // [esp+34h] [ebp-1Ch]
  int v23; // [esp+38h] [ebp-18h]
  char v24; // [esp+3Ch] [ebp-14h]
  char n115; // [esp+3Dh] [ebp-13h]
  unsigned __int8 n32; // [esp+3Eh] [ebp-12h]
  char v27; // [esp+3Fh] [ebp-11h] BYREF
  char *v28; // [esp+44h] [ebp-Ch]
  _BYTE *v29; // [esp+48h] [ebp-8h]
  _BYTE v30[4]; // [esp+4Ch] [ebp-4h] BYREF

  v30[0] = 0;
  v24 = 0;
  v19 = a1;
  v23 = 0;
  v29 = a2;
  while ( *v29 )
  {
    if ( *v29 == 37 )
    {
      v4 = (char *)sub_3E337(v29 + 1, a3, &v19);
      n110 = *v4;
      n115 = n110;
      v29 = v4 + 1;
      if ( !n110 )
        return v23;
      if ( n110 == 110 )
      {
        if ( (v24 & 0x20) != 0 )
        {
          if ( v24 < 0 )
            goto LABEL_6;
LABEL_7:
          *a3 += 4;
          **(_DWORD **)(*a3 - 4) = v23;
        }
        else if ( (v24 & 0x10) != 0 )
        {
          if ( v24 >= 0 )
          {
            *a3 += 4;
            **(_WORD **)(*a3 - 4) = v23;
          }
          else
          {
            *a3 += 8;
            *MK_FP(*(_WORD *)(*a3 - 4), *(_DWORD *)(*a3 - 8)) = v23;
          }
        }
        else
        {
          if ( v24 >= 0 )
            goto LABEL_7;
LABEL_6:
          *a3 += 8;
          *MK_FP(*(_WORD *)(*a3 - 4), *(_DWORD *)(*a3 - 8)) = v23;
        }
      }
      else
      {
        v6 = sub_3E619(v18, a3, &v19, v30);
        if ( (v24 & 8) == 0 && n32 == 32 )
        {
          while ( --v20 >= 0 )
            a4(&v19, n32);
        }
        v28 = &v27;
        while ( *v28 )
        {
          v14 = (unsigned __int8)*v28++;
          a4(&v19, v14);
        }
        while ( v22-- )
          a4(&v19, 48);
        if ( (v24 & 8) == 0 && n32 != 32 )
        {
          while ( --v20 >= 0 )
            a4(&v19, n32);
        }
        if ( n115 == 115 || n115 == 83 )
        {
          if ( (v24 & 0x20) != 0 )
          {
            while ( v21-- )
            {
              v15 = (unsigned __int8)*MK_FP(0, v6);
              v6 += 2;
              a4(&v19, v15);
            }
          }
          else
          {
            while ( v21-- )
            {
              v16 = (unsigned __int8)*MK_FP(0, v6++);
              a4(&v19, v16);
            }
          }
        }
        else
        {
          while ( v21-- )
          {
            v17 = (unsigned __int8)*MK_FP(0, v6++);
            a4(&v19, v17);
          }
        }
        if ( (v24 & 8) != 0 && v20 > 0 )
        {
          while ( v20-- )
            a4(&v19, 32);
        }
      }
    }
    else
    {
      v13 = (unsigned __int8)*v29++;
      a4(&v19, v13);
    }
  }
  return v23;
}
