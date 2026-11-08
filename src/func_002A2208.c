extern void func_002B2028(void *p);
extern void func_002A1D10(void *a0, void *a1);
extern void func_001D4040(void *a0, char *s);
extern void *D_002AD408(int size);
extern int func_001D3310(void *p);
extern void func_002A1A00(void *a0, void *a1);
extern void func_002A23C8(void *a0, void *a1, void *a2);
extern int D_0042686C;
extern char D_0047C3B8[];
extern int D_00494B70;
extern char D_0047C6B8[];
void func_002A2398(void *arg0);
void func_002A2328(int *arg0, int arg1);
inline int *inline_fn(char *arg0)
{
  return (int *) (arg0 + 8);
}

void func_002A2208(void *arg0, void *arg1, int arg2)
{
  int *new_var2;
  void *new_var;
  void *p;
  int sp0 = 0;
  int *new_var3;
  *inline_fn((char *) arg0) = arg2;
  new_var2 = &sp0;
  func_002A23C8(arg0, arg1, new_var2);
  new_var = D_002AD408(0x24);
  p = new_var;
  func_001D3310(p);
  new_var3 = &sp0;
  *((void **) (((char *) p) + 0x14)) = D_0047C6B8;
  func_002A1A00(p, new_var3);
}

void func_002A6D88(void **arg0);
