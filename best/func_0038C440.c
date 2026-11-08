typedef struct 
{
  char data[72];
} E;
typedef struct 
{
  E *begin;
  E *end;
  E *cap;
} V;
extern void *func_00152D28(unsigned);
extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
extern E *func_0038C010(E *, E *, E *, int);
extern E *func_0038C070(E *, E *);
extern void func_00386948(E *, int);
inline static void *alloc(unsigned z)
{
  void *q = func_002B1FC0(z);
  if (!q)
    q = func_003D2910(z);
  return q;
}

inline static void *za(void)
{
  u32 *q = (u32 *) D_0040E618[-1];
  if (!q)
    return func_00152D28(0);
  D_0040E618[-1] = *q;
  return q;
}

inline static unsigned cap(V *a)
{
  E *p = a->begin;
  return a->cap - p;
}

inline static void destroy(E *f, E *l)
{
  while (f < l)
  {
    func_00386948(f, 2);
    f++;
  }

}

inline static void dealloc(E *p, unsigned n)
{
  if (n)
  {
    unsigned z = n * 72;
    if (z)
      func_002B2028(p);
    else
    {
      *((u32 *) p) = D_0040E618[-1];
      D_0040E618[-1] = (u32) p;
    }
  }
}

inline static E *copy(E *f, E *l, E *d)
{
  int n = l - f;
  while (n > 0)
  {
    func_0038C070(d, f);
    f++;
    n--;
    d++;
  }

  return d;
}

inline E *inline_fn(E *arg0, int arg1)
{
  return arg0 + arg1;
}

V *func_0038C440(V *a, V *b)
{
  V *new_var;
  V *new_var2;
  if (b != a)
  {
    E *last = b->end;
    E *first = b->begin;
    int n = last - first;
    if (cap(a) < ((unsigned) n))
    {
      E *p;
      if (n)
      {
        unsigned z = n * 72;
        if (z)
        {
          p = alloc(z);
        }
        else
        {
          p = za();
        }
      }
      else
      {
        p = 0;
      }
      func_0038C010(first, last, p, 0);
      new_var2 = a;
      destroy(a->begin, a->end);
      dealloc(new_var2->begin, a->cap - a->begin);
      a->begin = p;
      a->cap = inline_fn(p, n);
    }
    else
    {
      unsigned size = a->end - a->begin;
      if (size >= ((unsigned) n))
      {
        E *d = copy(first, last, a->begin);
        destroy(d, a->end);
      }
      else
      {
        copy(first, inline_fn(first, size), a->begin);
        func_0038C010(inline_fn(b->begin, a->end - a->begin), b->end, a->end, 0);
      }
    }
    a->end = inline_fn(a->begin, n);
  }
  new_var = a;
  return new_var;
}

