/*
 * func-name: sub_418B0
 * func-address: 0x418b0
 * callers: 0x3a0a2
 * callees: none
 */

int __usercall sub_418B0@<eax>(int n2@<edx>, _DWORD *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v7; // ebx

  switch ( a4 )
  {
    case 0:
      n2 = 1;
      break;
    case 1:
    case 2:
      n2 = 2;
      break;
    case 3:
      n2 = 4;
      break;
    default:
      break;
  }
  v4 = a3 * (a2[4] * n2 / (a2[16] * a2[15])) / a2[5];
  v5 = a2[5];
  v6 = ((v4 * dword_54324 - (__CFSHL__((v4 * dword_54324) >> 31, 15) + ((v4 * dword_54324) >> 31 << 15))) >> 15) + v4;
  if ( a3 != v5 && 2 * a3 != v5 && 4 * a3 != v5 )
    v6 += 4;
  v7 = v6 + 255;
  LOBYTE(v7) = 0;
  return v7;
}
