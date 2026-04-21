/*
 * func-name: sub_1EC2A
 * func-address: 0x1ec2a
 * callers: 0x1eb05
 * callees: 0x3702f
 */

int __fastcall sub_1EC2A(__int32 a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  unsigned __int8 *v6; // ebx
  int v7; // eax
  int n319; // eax

  sub_3702F(a1, a2, a3, a4, 8);
  v6 = (unsigned __int8 *)(80 * a6 + dword_53A45);
  *a5 = 24 * (*v6 - dword_53AA9) + 4;
  a5[1] = 24 * (v6[1] - dword_53AAD);
  if ( v6[3] < 2u )
  {
    v7 = a5[1] - 18;
    if ( v7 >= 0 )
      a5[1] = v7;
    else
      a5[1] += 5;
    n319 = *a5 + 108;
    if ( n319 > 319 )
    {
      *a5 -= 86;
      return n319;
    }
    goto LABEL_7;
  }
  if ( a5[1] + 37 <= 199 )
    a5[1] += 22;
  else
    a5[1] += 5;
  n319 = *a5 - 86;
  if ( n319 < 0 )
  {
LABEL_7:
    *a5 += 28;
    return n319;
  }
  *a5 -= 88;
  return n319;
}
