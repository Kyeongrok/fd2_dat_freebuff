/*
 * func-name: sub_36F69
 * func-address: 0x36f69
 * callers: 0x36ff4
 * callees: none
 */

__int16 __usercall sub_36F69@<ax>(_WORD *a1@<esi>)
{
  _WORD *v1; // esi
  int n655360; // ebx
  int v3; // ecx
  int v4; // eax
  int n655360_1; // edi
  _BYTE *v6; // esi

  LOWORD(v4) = *a1;
  v1 = a1 + 1;
  n655360 = ::n655360;
  v3 = (unsigned __int16)v4;
  v4 = (unsigned __int16)v4;
  n655360_1 = ::n655360;
  do
  {
    LOWORD(v4) = *v1;
    v6 = v1 + 1;
    *(_BYTE *)(v4 + n655360_1) = *v6;
    v1 = v6 + 1;
    n655360_1 = n655360;
    --v3;
  }
  while ( v3 );
  return v4;
}
