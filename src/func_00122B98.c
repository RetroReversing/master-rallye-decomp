extern void func_0011DFB8(s32);
extern void func_0011E278(s32, s32);
extern s32 func_0011E528(s32);
extern s32 D_0040DCD0;
extern void func_001D4040(void *, const char *);
extern char D_00447D60[];
extern char D_0044D468[];
extern char D_00447E50[];
extern s32 func_00122168(void);
extern void func_001E3EC0(s32, void *, s32);
extern void func_003FA310(char *, const char *, ...);
void func_001223F8(s32 *p);
void *func_00122470(s32 *p);
typedef struct 
{
  s32 a;
  s32 b;
} Pair;
typedef struct 
{
  Pair *begin;
  Pair *end;
  Pair *cap;
} Array;
typedef struct 
{
  s32 pad[4];
  Array v;
} Obj;
void func_00122248(Obj *p);
inline int inline_fn(s32 arg0, s32 arg1)
{
  return (arg0 - arg1) * 111;
}

void func_00122B98(s32 *p)
{
  char buf[64];
  s32 key;
  s32 *new_var2;
  char *new_var;
  s32 i = 0;
  do
  {
    s32 x = inline_fn(i, p[4]) + 375;
    if (buf)
    {
      new_var = D_00447E50;
      func_003FA310(buf, new_var, i);
      i++;
      new_var2 = &key;
    }
    else
    {
      new_var = D_00447E50;
      func_003FA310(buf, new_var, i);
      i++;
      new_var2 = &key;
    }
    {
      s32 m = func_001E4280();
      func_001D4040(&key, buf);
      do
      {
        func_001E3EC0(m, new_var2, x);
      }
      while (0);
    }
  }
  while (i < 5);
}

