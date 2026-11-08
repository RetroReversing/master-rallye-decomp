extern void func_001D4040(void *, const char *);
extern void func_001D2900(void *, const char *);
extern void func_001E3FB0(int, void *, void *);
extern void D_002AD390(void *);
extern void func_00196358(void);
inline static void *keyinit(void *p, const char *s)
{
  func_001D4040(p, s);
  return p;
}

void func_001965F0(void *arg0, void *arg1, void *arg2)
{
  char *new_var;
  int s[4];
  int k[4];
  int root;
  (void) arg1;
  new_var = ((char *) arg0) + 0xC;
  func_00196358();
  func_001D2900(new_var, *((char **) (((char *) arg0) + 0x10)));
  root = func_001E4280();
  func_001D4040(s, *((char **) new_var));
  func_001E3FB0(root, s, keyinit(k, *((char **) arg2)));
  D_002AD390(*((void **) arg2));
}

