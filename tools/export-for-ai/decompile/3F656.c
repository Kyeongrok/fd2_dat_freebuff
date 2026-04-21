/*
 * func-name: sub_3F656
 * func-address: 0x3f656
 * callers: 0x38463
 * callees: 0x37324, 0x3759c, 0x37910, 0x37b55, 0x3f5b4, 0x400cc, 0x46f4f, 0x46f9c
 */

int __cdecl sub_3F656(void *dst, int a2)
{
  int result; // eax
  int v3; // ebp
  int i; // esi
  unsigned int j; // esi
  _BYTE *v6; // ebx
  _WORD src_[140]; // [esp+0h] [ebp-178h] BYREF
  _BYTE v8[80]; // [esp+118h] [ebp-60h] BYREF
  _BYTE *v9; // [esp+168h] [ebp-10h]

  memset(src_, 0, sizeof(src_));
  memset(&src_[128], -1, 24);
  result = fopen(a2, (int)aRt);                 // "rt"
  v3 = result;
  if ( result )
  {
    while ( sub_46F9C(v8, 80, v3) && (*(_BYTE *)(v3 + 12) & 0x10) == 0 )
    {
      for ( i = strlen(v8) - 1; i >= 0 && (byte_51840[(unsigned __int8)(v8[i] + 1)] & 2) != 0; --i )
        v8[i] = 0;
      for ( j = 0; j < strlen(v8) && (byte_51840[(unsigned __int8)(v8[j] + 1)] & 2) != 0; ++j )
        ;
      v6 = &v8[j];
      while ( j < strlen(v8) && (byte_51840[(unsigned __int8)(v8[j] + 1)] & 2) == 0 )
        ++j;
      v9 = &v8[j];
      while ( j < strlen(v8) && (byte_51840[(unsigned __int8)(v8[j] + 1)] & 2) != 0 )
        ++j;
      if ( j < strlen(v8) )
      {
        *v9 = 0;
        if ( *v6 != 59 )
        {
          if ( !strnicmp(v6, aDriver, 7) )      // "DRIVER"
          {
            strcpy(&src_[64], &v8[j]);
          }
          else if ( !strnicmp(v6, aDevice, 7) ) // "DEVICE"
          {
            strcpy(src_, &v8[j]);
          }
          else if ( !strnicmp(v6, aIoAddr, 8) ) // "IO_ADDR"
          {
            src_[128] = sub_3F5B4((int)&v8[j], 16, 0);
          }
          else if ( !strnicmp(v6, aIrq, 4) )    // "IRQ"
          {
            src_[129] = sub_3F5B4((int)&v8[j], 10, 0);
          }
          else if ( !strnicmp(v6, aDma8Bit, 10) )// "DMA_8_bit"
          {
            src_[130] = sub_3F5B4((int)&v8[j], 10, 0);
          }
          else if ( !strnicmp(v6, aDma16Bit, 11) )// "DMA_16_bit"
          {
            src_[131] = sub_3F5B4((int)&v8[j], 10, 0);
          }
        }
      }
    }
    fclose(v3);
    if ( strlen(&src_[64]) && strlen(src_) )
    {
      qmemcpy(dst, src_, 0x118u);
      return 1;
    }
    else
    {
      strcpy(&Corrupted__INI_file_n, "Corrupted .INI file\n");
      return 0;
    }
  }
  return result;
}
