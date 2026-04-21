/*
 * func-name: sub_448A0
 * func-address: 0x448a0
 * callers: none
 * callees: 0x3c4db, 0x42f50
 */

void __usercall sub_448A0(int a1@<edx>, int a2@<ebx>, int *a3)
{
  int *v3; // edi
  int n16_2; // eax
  int n16; // esi
  int v6; // eax
  int n16_1; // esi
  int v8; // [esp+0h] [ebp-10h]

  if ( a3 && a3[1] == 8 )
  {
    v3 = a3;
    n16_2 = *a3;
    n16 = 0;
    v8 = *a3;
    do
    {
      if ( v3[100] >= 64 )
      {
        sub_3C4DB(n16_2, a1, a2, v8, v8);
        n16_2 = v6 - 1;
        if ( n16_2 == -1 )
          n16_2 = n16;
        v3[36] = n16_2;
      }
      ++n16;
      ++v3;
    }
    while ( n16 < 16 );
    for ( n16_1 = 0; n16_1 < 16; ++n16_1 )
      sub_42F50((int)a3, n16_1);
    a3[1] = 4;
  }
}
