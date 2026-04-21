/*
 * func-name: sub_146D1
 * func-address: 0x146d1
 * callers: 0x14237, 0x14b78, 0x18890
 * callees: 0x3702f
 */

void __fastcall sub_146D1(__int32 a1, int a2, int a3, int a4, int n6_1, int a6)
{
  unsigned __int8 *v6; // eax
  int n6; // ebx

  sub_3702F(a1, a2, a3, a4, 16);
  v6 = (unsigned __int8 *)dword_53A45;
  for ( n6 = 0; ; ++n6 )
  {
    if ( n6 >= n6_0 )
      JUMPOUT(0x145C9);
    if ( n6 != n6_1 && (v6[5] & 1) == 0 )
    {
      if ( !a6 )
      {
        if ( v6[6] )
          goto LABEL_2;
LABEL_8:
        *(_BYTE *)(dword_53A51 + 4 * (dword_53AC1 * v6[1] + *v6) + 7) = -1;
        goto LABEL_2;
      }
      if ( v6[6] )
        goto LABEL_8;
    }
LABEL_2:
    v6 += 80;
  }
}
