extern void func_001E2C78(void *, const char *, s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern volatile unsigned short func_001E2460(void *, void *);
extern void func_001E2E38(void *, const char *, void *);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern char D_00444CC8[];
extern char D_00444CE0[];
extern char D_00444CF0[];
extern char D_00444D00[];
extern char D_00444D10[];
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

void *func_00102078(char *a)
{
  u32 key[8];
  u32 reg[4];
  Obj *p = D_002AD408(36);
  func_001D4040(key, D_00444CC8);
  ctor(p, key[0]);
  func_001E2460(reg, p);
  func_001E2E38(reg, D_00444CE0, a + 12);
  func_001E2C78(reg, D_00444CF0, *((int *) (a + 16)));
  func_001E2C78(reg, D_00444D00, *((int *) (a + 24)));
  func_001E2E38(reg, D_00444D10, a + 28);
  return p;
}

