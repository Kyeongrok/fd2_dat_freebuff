/*
 * func-name: sub_1EB05
 * func-address: 0x1eb05
 * callers: 0x1548e
 * callees: 0x15e71, 0x15f0e, 0x1ec2a, 0x1f0dc, 0x3702f, 0x3776e, 0x3790a
 */

int *__usercall sub_1EB05@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int a7,
        int a8)
{
  int v8; // eax
  int n9; // ebx
  __int32 v10; // eax
  int v11; // eax

  sub_3702F(a1, a2, a4, a3, 44);
  sub_1EC2A(&dword_53A30, a8);
  v8 = sub_1F0DC(a7, a8);
  if ( v8 == 1 )
    v8 = sub_1EC2A(&dword_53A38, a7);
  else
    dword_53A38 = -1;
  for ( n9 = 0; n9 < 10; ++n9 )
  {
    sub_15F0E(v8, a2, n9, a3, dword_53AD1, 655360, 320, dword_53A30, dword_53A34, n9 + 39);
    a6 = v10;
    if ( dword_53A38 != -1 )
    {
      sub_15F0E(v10, a2, n9, a3, dword_53AD1, 655360, 320, dword_53A38, dword_53A3C, n9 + 39);
      a5 = v11;
    }
    v8 = j___delay(25);
    if ( n9 < 9 )
    {
      v8 = sub_15E71(v8, a2, n9, a3, a6, 655360, 320);
      if ( dword_53A38 != -1 )
        v8 = sub_15E71(v8, a2, n9, a3, a5, 655360, 320);
    }
  }
  free(a6);
  if ( dword_53A38 != -1 )
    free(a5);
  return &dword_53A30;
}
