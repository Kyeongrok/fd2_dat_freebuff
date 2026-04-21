/*
 * func-name: sub_3FCA9
 * func-address: 0x3fca9
 * callers: 0x37d3e
 * callees: 0x37f70, 0x3f4e0
 */

void __fastcall sub_3FCA9(int env, unsigned __int16 a2)
{
  bool v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int n16; // eax

  v2 = sub_3F4E0();
  sub_37F70(v2, 0, 200);
  sub_37F70(v3, 1, 1);
  sub_37F70(v4, 2, 0x8000);
  sub_37F70(v5, 3, 100);
  sub_37F70(v6, 4, 16);
  sub_37F70(v7, 5, 100);
  sub_37F70(v8, 6, 655);
  sub_37F70(v9, 7, 0);
  sub_37F70(v10, 8, 0);
  sub_37F70(v11, 9, 1);
  sub_37F70(v12, 10, 120);
  sub_37F70(v13, 11, 8);
  sub_37F70(v14, 12, 127);
  sub_37F70(v15, 13, 1);
  sub_37F70(v16, 14, 0);
  sub_37F70(v17, 15, 2);
  sub_37F70(v18, 16, 1);
  sub_37F70(v19, 17, 1);
  for ( n16 = 0; n16 < 16; ++n16 )
    dword_541B4[n16] = 0;
  BYTE1(n16) = 0;
  Corrupted__INI_file_n = 0;
  sub_3EC7C(n16, a2);
}
