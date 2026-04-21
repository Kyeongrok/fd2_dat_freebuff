/*
 * func-name: sub_36F82
 * func-address: 0x36f82
 * callers: 0x36ff4
 * callees: none
 */

int __usercall sub_36F82@<eax>(_WORD *a1@<esi>)
{
  _WORD *v1; // esi
  int n655360; // ebx
  unsigned int v3; // ecx
  int value_1; // edx
  int value; // eax
  int n655360_1; // edi
  char *v7; // esi
  _WORD *buf; // edi
  char v9; // al
  unsigned int i; // ecx
  unsigned int count; // ecx

  LOWORD(value) = *a1;
  v1 = a1 + 1;
  n655360 = ::n655360;
  v3 = 0;
  value_1 = (unsigned __int16)value;
  value = (unsigned __int16)value;
  n655360_1 = ::n655360;
  do
  {
    LOWORD(value) = *v1;
    v7 = (char *)(v1 + 1);
    buf = (_WORD *)(value + n655360_1);
    v9 = *v7++;
    LOBYTE(v3) = v9;
    LOBYTE(value) = *v7;
    v1 = v7 + 1;
    BYTE1(value) = value;
    for ( i = v3 >> 1; i; --i )
      *buf++ = value;
    __asm { rcl     ecx, 1 }
    memset(buf, value, count);
    v3 = 0;
    n655360_1 = n655360;
    --value_1;
  }
  while ( value_1 );
  return value;
}
