/*
 * func-name: sub_2B67F
 * func-address: 0x2b67f
 * callers: 0x2af28
 * callees: 0x10620, 0x2b4fb, 0x3702f, 0x370f0, 0x3771c
 */

int __usercall sub_2B67F@<eax>(
        __int64 a1@<edx:eax>,
        int a2@<ecx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5@<edi>,
        int a6@<esi>,
        int a7,
        int n15,
        _BYTE *a9,
        int n9)
{
  int v11; // [esp-10h] [ebp-10h]
  int v12; // [esp-Ch] [ebp-Ch]
  int v13; // [esp-8h] [ebp-8h]
  int v14; // [esp-4h] [ebp-4h]

  sub_3702F(a1, SHIDWORD(a1), a3, a2, 36);
  v14 = a3;
  v13 = a6;
  v12 = a5;
  v11 = a4;
  while ( !sub_10620() )
  {
    if ( MEMORY[0x46C] != dword_53F46 )
    {
      dword_53F46 = MEMORY[0x46C];
      sub_2B4FB(MEMORY[0x46C], SHIDWORD(a1), n9, a2, a7, n15, (int)a9, n9, v11, v12, v13, v14);
      a1 = memmove(655360, n30, 64000);
    }
  }
  HIBYTE(n3) = 16;
  int386(22, &n3, &n3);
  if ( HIBYTE(n3) == 224 || HIBYTE(n3) == 82 || (unsigned __int8)n3 == 32 )
    HIBYTE(n3) = 28;
  if ( HIBYTE(n3) == 83 )
    HIBYTE(n3) = 1;
  return HIBYTE(n3);
}
