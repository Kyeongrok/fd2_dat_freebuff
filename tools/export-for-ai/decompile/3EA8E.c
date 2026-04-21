/*
 * func-name: sub_3EA8E
 * func-address: 0x3ea8e
 * callers: 0x3ec7c
 * callees: none
 */

int __usercall sub_3EA8E@<eax>(
        __int32 a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<ebp>,
        __int32 a6@<edi>,
        __int32 a7@<esi>)
{
  int v7; // edx
  unsigned int n16; // edi
  unsigned int v9; // eax
  unsigned int n15; // edi
  __int32 v11; // eax
  __int32 v12; // ecx
  __int32 v13; // eax
  _DWORD v15[10]; // [esp-30h] [ebp-30h] BYREF
  __int32 v16; // [esp-8h] [ebp-8h] BYREF
  __int32 v17; // [esp-4h] [ebp-4h] BYREF
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h] BYREF

  if ( dword_52BE6 )
  {
    v17 = a1;
    __outbyte(0x20u, 0x20u);
    __asm { iret }
  }
  v17 = a7;
  v16 = a6;
  v15[9] = a5;
  v15[8] = retaddr;
  v15[7] = a4;
  v15[6] = a3;
  v15[5] = a2;
  v15[4] = a1;
  v15[3] = (unsigned __int16)__DS__;
  v15[2] = (unsigned __int16)__ES__;
  v15[1] = (unsigned __int16)__FS__;
  v15[0] = (unsigned __int16)__GS__;
  __DS__ = _DS___0;
  dword_52BE6 = 1;
  _SS___1 = __SS__;
  dword_53600 = (int)v15;
  v7 = dword_52BE2;
  for ( n16 = 0; n16 < 16; ++n16 )
  {
    if ( dword_52A94[n16] == 2 )
    {
      v9 = v7 + dword_52AD4[n16];
      if ( v9 >= dword_52B14[n16] )
      {
        v9 -= dword_52B14[n16];
        ++dword_52B54[n16];
      }
      dword_52AD4[n16] = v9;
    }
  }
  __outbyte(0x20u, 0x20u);
  _enable();
  if ( dword_52BEA <= 0 )
  {
    for ( n15 = 0; n15 < 15; ++n15 )
    {
      while ( dword_52B54[n15] )
      {
        --dword_52B54[n15];
        ((void (__stdcall *)(int))dword_52A54[n15])(dword_52B94[n15]);
      }
    }
  }
  if ( !dword_52B90 )
  {
    --dword_52BE6;
    __asm { iret }
  }
  --dword_52B90;
  --dword_52BE6;
  v11 = (unsigned __int16)word_52BD8;
  v12 = _InterlockedExchange(&v16, dword_52BD4);
  v13 = _InterlockedExchange(&v17, v11);
  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)(v13, v17, v16, v12);
}
