extern void func_001D4040(void *, const char *);
extern char D_0046FA70[];
extern char D_00473860[];
extern char D_0046FB48[];
extern char D_00473DD0[];
extern char D_00473CD0[];
extern char D_0044DCD8[];
extern void D_002AD390(void *);
extern void D_002AD530(void *);
void *func_00181300(s32 *p)
{
  s32 new_var;
  u32 k;
  func_001D4040(&k, D_0046FA70);
  new_var = (s32) D_00473860;
  p[0] = -1;
  p[1] = k;
  p[2] = new_var;
  *((float *) (p + 3)) = 90;
  *((float *) (p + 5)) = 100;
  p[4] = 3;
  return p;
}

float func_001816E0(float a, float b);
inline static void z3(s32 *p)
{
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
}

void *func_00181708(s32 *p);
void func_00180D60(void **p, s32 flag);
