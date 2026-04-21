/*
 * func-name: sub_3FC33
 * func-address: 0x3fc33
 * callers: 0x38e46
 * callees: 0x382e9, 0x3f48b, 0x47006
 */

void *__cdecl sub_3FC33(int a1)
{
  void *env; // eax
  int v2; // eax
  int v3; // eax

  env = (void *)(16 * HIWORD(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 18))
               + (unsigned __int16)*(_DWORD *)(*(_DWORD *)(a1 + 12) + 18));
  if ( env )
  {
    env = (void *)getenv(env);
    if ( env )
    {
      v2 = strncpy(*(_DWORD *)(a1 + 12) + 58, env, 128);
      sub_382E9(v2, a1, 771, 0, 0);
      if ( v3 == -1 )
      {
        return 0;
      }
      else
      {
        qmemcpy(&dst, (const void *)(*(_DWORD *)(a1 + 12) + 22), 0x18u);
        return &dst;
      }
    }
  }
  return env;
}
