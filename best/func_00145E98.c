extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2B98(void *, const char *, s32);
extern void func_001E2C78(void *, const char *, s32);
extern s32 func_001E38C8(s32, void *);
extern void func_001E3D10(s32, void *, void *);
extern void func_001E33C8(s32, void *, s32);
extern char D_0044BC38[];
extern char D_0044BEF0[];
extern char D_0044BF00[];
extern char D_0044BF18[];
extern char D_0044CB40[];
extern char D_0044DD18[];
extern char D_0040E7A8[];
void func_0016D178(void *arg0, f32 *arg1);
void *func_00145F08(void *arg0);
void *func_00145E98(void *arg0)
{
  u32 tmp[4];
  s32 *p = arg0;
  func_001D4040(tmp, D_0044BEF0);
  p[3] = 0;
  p[4] = (p[5] = 0);
  p[1] = (s32) tmp[0];
  p[0] = -1;
  p[2] = (s32) D_0044CB40;
  func_001D4040(p + 5, D_0044BF00);
  return p;
}

void func_001946A8(void *arg0, void *arg1);
