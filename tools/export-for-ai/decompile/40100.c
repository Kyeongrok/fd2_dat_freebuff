/*
 * func-name: sub_40100
 * func-address: 0x40100
 * callers: 0x40100, 0x40cf0, 0x41a40
 * callees: 0x365da, 0x3666c, 0x4994f
 */

void sub_40100()
{
  bool v0; // eax

  if ( !dword_53690 )
  {
    sub_365DA((unsigned int)sub_40100, (unsigned int)sub_41A40);
    sub_3666C((unsigned int)&byte_5360C, 128);
    sub_3666C((unsigned int)&dword_5368C, 4);
    sub_3666C((unsigned int)&dword_543B0, 4);
    sub_3666C((unsigned int)&unk_543C4, 12);
    sub_3666C((unsigned int)&dword_543C0, 4);
    sub_3666C((unsigned int)&dword_543BC, 4);
    sub_3666C((unsigned int)&dword_543B8, 4);
    sub_3666C((unsigned int)&dword_543D0, 4);
    v0 = sub_3666C((unsigned int)&dword_543B4, 4);
    sub_4994F(v0);
    dword_53690 = 1;
  }
}
