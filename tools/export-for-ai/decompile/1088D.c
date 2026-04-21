/*
 * func-name: sub_1088D
 * func-address: 0x1088d
 * callers: 0x205da, 0x25757, 0x31c49
 * callees: 0x10652, 0x10b4e, 0x11019, 0x111ba, 0x1b750, 0x3702f, 0x3706e, 0x370f0, 0x37324, 0x3759c, 0x3771c, 0x3776e, 0x37910, 0x4df4c
 */

int __cdecl sub_1088D(int n13)
{
  int v1; // eax
  int v2; // ebx
  _BYTE *v3; // ebx
  _BYTE *v4; // esi
  int v5; // edi
  int n6; // ebp
  char v7; // al
  int v9; // [esp+0h] [ebp-18h]
  int v10; // [esp+4h] [ebp-14h]

  v1 = sub_3702F(40);
  v10 = 0;
  sub_10652(v1);
  dword_53A79 = sub_111BA((int)aFdtxtDat, dword_53A79, n13 + 1);// "FDTXT.DAT"
  dword_53A59 = sub_111BA((int)aFdfieldDat, dword_53A59, 3 * n13 + 2);// "FDFIELD.DAT"
  dword_53A55 = sub_111BA((int)aFdfieldDat, dword_53A55, 3 * n13 + 1);// "FDFIELD.DAT"
  dword_53A51 = sub_111BA((int)aFdfieldDat, dword_53A51, 3 * n13);// "FDFIELD.DAT"
  dword_53AC1 = *(__int16 *)dword_53A51;
  dword_53AC5 = *(__int16 *)(dword_53A51 + 2);
  v2 = 2 * *(unsigned __int8 *)dword_53A55;
  dword_53A5D = sub_111BA((int)aFdshapDat, dword_53A5D, v2);// "FDSHAP.DAT"
  dword_53A69 = sub_111BA((int)aFdshapDat, dword_53A69, v2 + 1);// "FDSHAP.DAT"
  sub_4DF4C(dword_53A51);
  ::n6 = *(unsigned __int8 *)(dword_53A55 + 1);
  dword_53BE3 = *(unsigned __int8 *)(dword_53A55 + 2);
  n6_0 = ::n6;
  if ( dword_53A61 )
    free(dword_53A61);
  if ( dword_53A45 )
    free(dword_53A45);
  dword_53A45 = malloc(7680);
  if ( !dword_53A45 || (v3 = (_BYTE *)dword_53A45, dword_53BDF = 0, (v9 = fopen(aFdiconB24_1, aRb_2)) == 0) )// "rb"
  {
    n3 = 3;
    int386(16, &n3, &n3);
    JUMPOUT(0x10056);
  }
  v4 = (_BYTE *)(dword_53A59 + 6 * dword_53BE3 + 2);
  v5 = dword_53BF7;
  for ( n6 = 0; n6 < ::n6; ++n6 )
  {
    if ( (n13 >= 13 || n6 != 6 || *(_BYTE *)(v5 + 8) == 2) && v10 < dword_53BFB )
    {
      memmove(v3, v5, 80);
      v7 = v4[2];
      *v3 = *v4;
      v3[1] = v7;
      v4 += 6;
      v3[2] = sub_11019((unsigned __int8)v3[7], v9);
      v3[3] = 0;
      v3[4] = 0;
      v3[6] = 2;
      v3[49] = -1;
      memset(v3 + 34, 0, 6);
      sub_1B750(n6);
      v5 += 80;
      ++v10;
    }
    else
    {
      memset(v3, 0, 80);
      v3[5] = 1;
    }
    v3 += 80;
  }
  fclose(v9);
  free(dword_53A59);
  dword_53A59 = 0;
  return sub_10B4E(0);
}
