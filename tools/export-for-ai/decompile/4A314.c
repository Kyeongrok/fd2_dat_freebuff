/*
 * func-name: sub_4A314
 * func-address: 0x4a314
 * callers: 0x4bab1, 0x4be8c, 0x4bf8b
 * callees: 0x3d5be
 */

void __usercall sub_4A314(unsigned __int8 a1@<al>, int a2@<ecx>, _BYTE *src@<ebp>)
{
  _BYTE dst_[108]; // [esp-80h] [ebp-80h] BYREF
  int __DS__; // [esp-14h] [ebp-14h]
  int __ES__; // [esp-10h] [ebp-10h]
  int v6; // [esp-Ch] [ebp-Ch]

  src[4] |= a1;
  if ( (a1 & *src) == 0 )
  {
    v6 = a2;
    __ES__ = (unsigned __int16)__ES__;
    __DS__ = (unsigned __int16)__DS__;
    qmemcpy(dst_, src, sizeof(dst_));
    nullsub();
    qmemcpy(src, dst_, 0x6Cu);
  }
}
