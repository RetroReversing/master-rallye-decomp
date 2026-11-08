extern void D_002AD390(void *);
void func_0011DF88(void *p, int flags);
extern s32 func_00297500(void);
extern s32 func_00296710(void);
extern s32 func_00296530(s32, s32);
extern void func_00297398(s32, s32);
extern void func_00296550(s32, s32, float *, float *);
extern void func_002965B8(s32, s32, float, float);
void func_0011E248(void *a, s32 b);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern const char D_00447578[];
inline static s32 *keyinit(s32 *p, const char *s)
{
  func_001D4040(p, s);
  return p;
}

void func_0011E560(void *a, s32 b);
void func_0011D8E8(char *a, s32 b)
{
  if (func_00296530(func_00296710(), b))
  {
    char *member = a + ((unsigned short) 32);
    if (*((s32 *) member))
    {
      float x;
      float y;
      s32 n;
      a = member;
 do { n = func_001E3650(func_001E4280(), (s32) a); x = 0.0f; y = 0.0f; } while (0);
      func_00296550(func_00296710(), b, &x, &y);
      func_002965B8(func_00296710(), b, (float) n, y);
    }
  }
}
