void func_0016D178(void *arg0, f32 *arg1);
extern char D_0044BD40[];
extern char D_0044BD58[];
extern void D_0044CCC0;
extern void func_001D4040(void *, const char *);
void *func_00142EC8(void *arg0)
{
  u32 n[4];
  int new_var;
  long long new_var2;
  int new_var4;
  int new_var3;
  func_001D4040(n, D_0044BD40);
  new_var4 = -1;
  new_var2 = 3;
  {
    s32 *p = (s32 *) arg0;
    p[4] = (p[9] = 0);
    new_var3 = new_var4;
    new_var = 0;
    p[new_var2] = new_var;
    p[1] = (s32) n[new_var];
    p[new_var] = new_var3;
    p[2] = (s32) ((u32) (&D_0044CCC0));
    func_001D4040(p + 4, D_0044BD58);
    p[5] = 0x3C;
  }
  return arg0;
}

void *func_00198980(void *arg0);
void func_00198A18(void *arg0, void *arg1);
