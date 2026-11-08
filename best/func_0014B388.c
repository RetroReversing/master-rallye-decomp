#define W(p,o) (*(s32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
extern s32 func_00193B60(void);
extern s32 func_00193138(s32, s32);
extern s32 func_00193BE0(s32);
extern s32 func_00194C40(void);
extern void func_0021E4F0(void *);
extern float func_0015AD18(void);
extern float func_0015ACB0(void);
extern void func_001936D8(s32, s32, void *);
extern void func_00193898(s32, s32, void *);
extern void func_00193908(s32, s32, void *);
extern void func_00193978(s32, s32, s32);
extern void func_00193748(s32, s32, float);
extern void func_001937B8(s32, s32, float);
extern void func_00193828(s32, s32, float);
typedef struct 
{
  float x;
  float y;
} V2;
inline static void add(V2 *d, V2 *a, V2 *b)
{
  float x = a->x + b->x;
  float y = a->y + b->y;
  d->x = x;
  d->y = y;
}

void func_0014B388(char *p, char *q)
{
  V2 a;
  V2 b;
  V2 c;
  float x;
  float s;
  float t;
  float r;
  char *d;
  if (!func_00193138(func_00193B60(), W(p, 12)))
  {
    func_0021E4F0(q);
  }
  d = *((char **) (q + 76));
  if (d)
  {
    x = F(d, 80);
    F(p, 16) = x;
    F(p, 20) = F(*((char **) (q + 76)), 84);
    add(&a, (V2 *) (p + 16), (V2 *) (p + 28));
    add(&b, (V2 *) (p + 16), (V2 *) (p + 48));
    add(&c, (V2 *) (p + 16), (V2 *) (p + 56));
    s = F(p, 36) * func_0015AD18();
    t = F(p, 40) * func_0015AD18();
    if (W(p, 24))
    {
      if (t > 0)
      {
        r = -func_0015ACB0();
      }
      else
      {
        r = func_0015ACB0();
      }
      t += r + r;
    }
    func_001936D8(func_00193B60(), W(p, 12), &a);
    func_00193748(func_00193B60(), W(p, 12), s);
    func_001937B8(func_00193B60(), W(p, 12), t);
    func_00193828(func_00193B60(), W(p, 12), F(p, 44));
    func_00193898(func_00193B60(), W(p, 12), &b);
    func_00193908(func_00193B60(), W(p, 12), &c);
    if (!func_00193BE0(func_00194C40()))
    {
 do { func_00193978(func_00193B60(), W(p, 12), W(p, 64)); } while (0);
    }
  }
}
