extern char D_0044A6D8[];
extern char D_0044CFE8[];
extern void func_001D4040(void *, const char *);
inline static void z(s32 *p)
{
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
}

void *func_00134C18(s32 *arg0)
{
  s32 k[8];
  s32 *zp = arg0 + 9;
  int new_var;
  func_001D4040(k, D_0044A6D8);
  arg0[0] = -1;
  arg0[1] = k[0];
  arg0[2] = (s32) D_0044CFE8;
  zp[0] = 0;
  new_var = 2;
  zp[new_var] = 0;
  zp[1] = 0;
  arg0[3] = 0;
  return arg0;
}

