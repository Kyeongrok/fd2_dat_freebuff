/*
 * func-name: sub_46CA7
 * func-address: 0x46ca7
 * callers: 0x46c8d
 * callees: 0x375c8
 */

int __cdecl sub_46CA7(int a1)
{
  _DWORD *v1; // eax
  int v2; // ebx
  _DWORD *v3; // esi
  unsigned int v4; // eax
  bool v5; // edx

  v1 = (_DWORD *)dword_541AC;
  v2 = 0;
  while ( v1 )
  {
    v3 = (_DWORD *)*v1;
    v4 = v1[1];
    v5 = 1;
    if ( (*(_BYTE *)(v4 + 13) & 0x40) == 0 )
    {
      if ( v4 < (unsigned int)&unk_52840 + 26 * a1 )
        goto LABEL_6;
      v5 = v4 >= (unsigned int)&unk_528C2;
    }
    ++v2;
    _shutdown_stream(v4, v5);
LABEL_6:
    v1 = v3;
  }
  return v2;
}
