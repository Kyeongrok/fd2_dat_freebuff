/*
 * func-name: sub_129EC
 * func-address: 0x129ec
 * callers: 0x127a9, 0x1366a, 0x1db65, 0x32999
 * callees: 0x12ac6, 0x1f183, 0x34894, 0x3702f
 */

void __fastcall sub_129EC(__int32 a1, int a2, int a3, int a4)
{
  int n6; // edi
  int v5; // esi
  unsigned __int8 *v6; // eax
  int v7; // esi
  int v8; // ebx
  int n2; // ebp
  int v10; // ebx
  int v11; // [esp+0h] [ebp-18h]

  sub_3702F(a1, a2, a3, a4, 40);
  for ( n6 = 0; ; ++n6 )
  {
    if ( n6 >= n6_0 )
      JUMPOUT(0x10B46);
    if ( !sub_1F183(n6) && !sub_34894(n6) )
    {
      v6 = (unsigned __int8 *)(dword_53A45 + 80 * n6);
      v7 = *v6;
      v8 = v6[1];
      n2 = v6[3];
      v11 = v6[4];
      sub_12AC6(dword_53A49, v7, v8);
      sub_12AC6(dword_53A49, v7, v8 - 1);
      if ( v11 )
      {
        if ( n2 )
        {
          if ( n2 == 1 )
          {
            v5 = v7 - 1;
            sub_12AC6(dword_53A49, v5, v8);
LABEL_4:
            sub_12AC6(dword_53A49, v5, v8 - 1);
            continue;
          }
          if ( n2 != 2 )
          {
            v5 = v7 + 1;
            sub_12AC6(dword_53A49, v5, v8);
            goto LABEL_4;
          }
          v10 = v8 - 2;
        }
        else
        {
          v10 = v8 + 1;
        }
        sub_12AC6(dword_53A49, v7, v10);
      }
    }
  }
}
