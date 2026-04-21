/*
 * func-name: sub_46C48
 * func-address: 0x46c48
 * callers: none
 * callees: 0x3707e
 */

void sub_46C48()
{
  _DWORD *v0; // ebx
  _DWORD *v1; // eax

  byte_52881 &= 0xF8u;
  v0 = &unk_52840;
  byte_52881 |= 4u;
  while ( v0[3] )
  {
    v1 = (_DWORD *)nmalloc(8);
    v1[1] = v0;
    *v1 = dword_541AC;
    v0 = (_DWORD *)((char *)v0 + 26);
    dword_541AC = (int)v1;
  }
  dword_541A0 = 0;
}
