extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern long func_001E2460(void *, void *);
extern void func_001E2C78(void *, const char *, s32);
extern char D_00444D00[];
extern char D_00445D28[];
extern char D_00445D48[];
extern char D_00445D50[];
extern char D_00445D60[];
extern char D_00445D70[];
extern char D_0044DD18[];
typedef struct 
{
  u32 a;
  u32 b;
  struct 
  {
    u32 begin;
    u32 end;
  } list;
  void *vt;
  u32 v[3];
  u32 key;
} Obj;
inline static void vec(u32 *p)
{
  p[0] = 0;
  p[1] = 0;
  p[2] = 0;
}

inline static Obj *base(Obj *p)
{
  p->list.begin = 0;
  p->list.end = 0;
  p->b = 0;
  p->a = 0;
  return p;
}

inline static Obj *ctor(Obj *p, u32 k)
{
  base(p);
  p->vt = D_0044DD18;
  vec(p->v);
  p->key = k;
  return p;
}

void *func_0010C998(char *a)
{
  u32 key[4];
  u32 pad[4];
  u32 reg[4];
  Obj *p = D_002AD408(36);
  func_001D4040(key, D_00445D28);
  {
    u32 k = key[0];
    ctor(p, k);
    func_001E2460(reg, p);
  }
  func_001E2C78(reg, D_00444D00, *((s32 *) (a + 0x0C)));
  func_001E2C78(reg, D_00445D48, 0);
  func_001E2C78(reg, D_00445D50, 0);
  func_001E2C78(reg, D_00445D60, 0);
  func_001E2C78(reg, D_00445D70, 0);
  return p;
}

