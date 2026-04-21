/*
 * func-name: sub_4CF4D
 * func-address: 0x4cf4d
 * callers: none
 * callees: 0x3707e, 0x3777e, 0x37910
 */

void sub_4CF4D()
{
  int v0; // esi
  int i; // eax
  int v2; // eax
  _BYTE *v3; // edi
  _BYTE *v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  char v9; // dl
  int v10; // [esp+0h] [ebp-4h]

  if ( !dword_537FC )
  {
    __FS__ = *(_WORD *)&byte_52834[4];
    v10 = *(_DWORD *)byte_52834;
    v0 = 0;
    for ( i = *(_DWORD *)byte_52834; *MK_FP(__FS__, i); ++i )
    {
      while ( *MK_FP(__FS__, i) )
        ++i;
      ++v0;
    }
    v2 = i - *(_DWORD *)byte_52834;
    if ( !v2 )
      v2 = 1;
    v3 = (_BYTE *)nmalloc(v2);
    v4 = v3;
    if ( v3 )
    {
      v5 = nmalloc(4 * v0 + 4 + v0);
      if ( v5 )
      {
        dword_537FC = v5;
        v6 = 0;
        v7 = 0;
        v8 = v10;
        while ( *MK_FP(__FS__, v8) )
        {
          *(_DWORD *)(v7 + dword_537FC) = v4;
          do
          {
            v9 = *MK_FP(__FS__, v8++);
            *v4++ = v9;
          }
          while ( v9 );
          v7 += 4;
          ++v6;
        }
        *(_DWORD *)(v7 + dword_537FC) = 0;
        dword_53800 = v7 + 4 + dword_537FC;
        memset(dword_53800, 0, v6);
      }
      else
      {
        nfree(v3);
      }
    }
  }
}
