typedef struct 
{
  int free;
  int size;
  int refs;
  int locked;
} H;
typedef struct 
{
  char *str;
  int refs;
} E;
typedef struct 
{
  int *begin;
  int *end;
  int *cap;
} IV;
typedef struct 
{
  IV map;
  IV reverse;
  IV free;
  E *entries;
  E *end;
  E *cap;
  int count;
} Pool;
typedef struct 
{
  int id;
  int flags;
  float f[6];
  int i[6];
  int j[4];
} Obj;
extern Pool D_004262D0;
extern H D_0040E658;
extern u32 D_0040E618[];
void func_002B2028(void *);
void func_00152720(IV *, int *, int *);
inline static void drop(char *p)
{
  H *h = (H *) (p - 16);
  if ((--h->refs) == 0)
  {
    if (h->size + 16)
      func_002B2028(h);
    else
    {
      h->free = D_0040E618[-1];
      D_0040E618[-1] = (u32) h;
    }
  }
}

inline static char *retain(H *h)
{
  if (h->locked)
    return (char *) func_00151930(h);
  h->refs++;
  return (char *) (h + 1);
}

inline static void assign(E *a, E *b)
{
  if (b != a)
  {
    drop(a->str);
    a->str = retain((H *) (b->str - 16));
  }
  a->refs = b->refs;
}

inline static E *entry(Pool *p, int id)
{
  int *map = p->map.begin;
  return p->entries + map[id];
}

inline static E *init(E *p)
{
  p->str = retain(&D_0040E658);
  p->refs = 0;
  return p;
}

inline static void push(IV *v, int *x)
{
  if (v->end != v->cap)
  {
    if (v->end)
      *v->end = *x;
    v->end++;
  }
  else
    func_00152720(v, v->end, x);
}

Obj *func_0038C070(Obj *a, Obj *b)
{
  int id = a->id;
  if (id != b->id)
  {
    if (id >= 0)
    {
      Pool *p = &D_004262D0;
      E *e = entry(p, id);
      if ((--e->refs) == 0)
      {
        int old = a->id;
        int last = p->count - 1;
        int index = p->map.begin[old];
        p->count = last;
        if (index != last)
        {
          E *src = &p->entries[last];
          E *dst = &p->entries[index];
          int moved = p->reverse.begin[last];
          assign(dst, src);
          p->map.begin[moved] = index;
          p->reverse.begin[index] = moved;
        }
        {
          E *dst = &p->entries[p->count];
          E empty;
          init(&empty);
          assign(dst, &empty);
          drop(empty.str);
        }
        push(&p->free, &old);
      }
    }
    id = b->id;
    a->id = id;
    if (id >= 0)
    {
      entry(&D_004262D0, id)->refs++;
    }
  }
  a->flags = b->flags;
  {
    float *d = a->f;
    float *s = b->f;
    int n = 2;
    do
    {
      n--;
      d[0] = s[0];
      d[1] = s[1];
      s += 2;
      d += 2;
    }
    while (n != (-1));
  }
  {
    int *d = a->i;
    int *s = b->i;
    int n = 2;
    do
    {
      n--;
      d[0] = s[0];
      d[1] = s[1];
      s += 2;
      d += 2;
    }
    while (n != (-1));
  }
  id = -1;
  {
    int *d = a->j;
    int *s = b->j;
    int n = 1;
    do
    {
      n--;
      d[0] = s[0];
      id = 2;
      d[1] = s[1];
      s += id;
      d += 2;
    }
    while (n != id);
  }
  return a;
}

