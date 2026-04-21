/*
 * func-name: sub_22046
 * func-address: 0x22046
 * callers: 0x21eb1, 0x22253, 0x22547, 0x22656, 0x24618
 * callees: 0x127a9, 0x219ad, 0x3702f, 0x37af4, 0x4deec
 */

int __usercall sub_22046@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        char *a7,
        int n192_2,
        int a9,
        int n192,
        int n192_1,
        int a12)
{
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  int n192_3; // esi
  char *v16; // edi
  char *v17; // eax
  int v18; // ebp
  char *v19; // ebp
  int result; // eax
  int v21; // edi
  int v22; // [esp+Ch] [ebp+Ch]

  v12 = sub_3702F(a1, a2, a4, a3, 48);
  sub_219AD(v12, a2, a4, a3, a7, n192_2, a9, 16, n192, n192_1, a12);
  v14 = sub_127A9(v13, a2, a4, a3);
  sub_219AD(v14, a2, a4, a3, a7, n192_2, a9, 16, n192_2, n192_1, a12);
  n192_3 = n192;
  v22 = (int)_CHP(a5, a6, (double)a9 * dbl_50208);
  v16 = &a7[-v22];
  if ( (int)&a7[-v22] >= 0 )
  {
    v17 = (char *)v22;
  }
  else
  {
    v16 = 0;
    v17 = a7;
  }
  if ( (int)&a7[v22] < 312 )
    v18 = v22;
  else
    v18 = 312 - (_DWORD)a7;
  v19 = &v17[v18];
  result = 456 * n192;
  v21 = (int)&v16[456 * n192 + 32904 + n655360_0];
  while ( n192_3 < n192_2 )
  {
    result = sub_4DEEC(a12, v19, v21);
    v21 += 456;
    ++n192_3;
  }
  return result;
}
