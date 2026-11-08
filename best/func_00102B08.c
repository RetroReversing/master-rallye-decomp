extern void func_001D4040(void *, const char *);
extern s32 func_001E4280(void);
extern s32 func_001E38C8(s32, void *);
extern s32 func_001E3598(s32, void *);
extern char D_00444E20[];
extern char D_00444E40[];
extern char D_00444E58[];
typedef struct 
{
  u32 h[3];
  u32 k1;
  u32 k2;
  u32 k3;
  s32 or12;
  s32 or3;
  u32 index;
} A;
typedef struct 
{
  u32 h;
  u32 key;
  u32 pad;
  s32 xy;
  s32 multi;
  s32 standard;
} B;
typedef struct 
{
  u32 h;
  B *items[4];
} Group;
inline static u32 *key(u32 *p, const char *s)
{
  func_001D4040(p, s);
  return p;
}

void func_00102B08(A *a, Group *g)
{
  u32 k0[4];
  u32 k1[4];
  u32 k2[4];
  u32 k3[4];
  u32 k4[4];
  B *b;
  s32 result;
  s32 valid;
  s32 x;
  s32 y;
  s32 z;
  if (a->index < 4)
  {
    b = g->items[a->index];
  }
  else
  {
    b = 0;
  }
  if (b)
  {
    result = 0;
    valid = 0;
    if (((b->key == (*key(k0, D_00444E20))) || (b->key == (*key(k1, D_00444E40)))) || (b->key == (*key(k2, D_00444E58))))
    {
      valid = 1;
    }
    if (valid && func_001E38C8(func_001E4280(), &a->k1))
    {
      x = func_001E3598(func_001E4280(), &a->k1);
      if (func_001E38C8(func_001E4280(), &a->k2))
      {
        y = func_001E3598(func_001E4280(), &a->k2);
        if (func_001E38C8(func_001E4280(), &a->k3))
        {
          z = func_001E3598(func_001E4280(), &a->k3);
          if (a->or3)
          {
            if (a->or12)
            {
              result = (x || y) || z;
            }
            else
            {
              result = (x && y) || z;
            }
          }
          else
            if (a->or12)
          {
            result = (x || y) && z;
          }
          else
          {
            result = (x && y) && z;
          }
        }
        else
          if (a->or12)
        {
          result = x || y;
        }
        else
        {
          result = x && y;
        }
      }
      else
      {
 do { result = x; } while (0);
      }
    }
    if (b->key == (*key(k0, D_00444E20)))
    {
      b->standard = result;
    }
    else
      if (b->key == (*key(k3, D_00444E40)))
    {
      b->xy = result;
    }
    else
      if (b->key == (*key(k4, D_00444E58)))
    {
      b->multi = result;
    }
  }
}
