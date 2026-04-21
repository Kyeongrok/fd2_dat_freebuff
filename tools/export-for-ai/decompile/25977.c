/*
 * func-name: sub_25977
 * func-address: 0x25977
 * callers: 0x10010, 0x19df7, 0x1a30b, 0x22e5c, 0x25bf4, 0x25ebb, 0x26152, 0x2670e, 0x2a43e, 0x2aa00, 0x31529, 0x31c49, 0x3231b
 * callees: 0x111ba, 0x3666c, 0x3702f, 0x3adf5, 0x3aeee, 0x3af5b, 0x3b124, 0x3b1a6
 */

int __fastcall sub_25977(__int32 a1, int a2, int a3, int a4, int n16, int arg4)
{
  int n16_1; // eax
  int n2000; // [esp-8h] [ebp-8h]

  sub_3702F(a1, a2, a3, a4, 20);
  n16_1 = (unsigned __int8)::n16;
  if ( (unsigned __int8)::n16 != n16 )
  {
    ::n16 = n16;
    if ( n16 == -1 )
    {
      return sub_3B124(dword_53ED0, 0, 4000);
    }
    else
    {
      n16_1 = (unsigned __int8)n16_0;
      if ( n16_0 )
      {
        if ( FDMUS_DAT )
          n16_1 = sub_3AF5B(dword_53ED0);
        FDMUS_DAT = (int)sub_111BA(n16_1, a2, a3, a4, (int)aFdmusDat, FDMUS_DAT, n16);// "FDMUS.DAT"
        sub_3666C(FDMUS_DAT, dword_53BFF);
        sub_3ADF5(dword_53ED0, FDMUS_DAT, 0);
        sub_3AEEE(dword_53ED0);
        if ( n127 )
        {
          if ( n16 == 16 || n16 == 17 )
          {
            n2000 = 0;
          }
          else
          {
            sub_3B124(dword_53ED0, 0, 0);
            n2000 = 2000;
          }
          sub_3B124(dword_53ED0, 127, n2000);
        }
        else
        {
          sub_3B124(dword_53ED0, 0, 0);
        }
        return sub_3B1A6(dword_53ED0, arg4);
      }
    }
  }
  return n16_1;
}
