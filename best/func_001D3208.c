int func_001D3920(void *arg0);
int func_001D3208(char *p)
{
  char *q = *((char **) p);
  s16 *new_var;
  if (q)
  {
    char *v;
    new_var = &(*((s16 *) (v + 0x20)));
    return ((int (*)(void *)) (*((void **) ((*((char **) q)) + 0x24))))(q + (*new_var));
  }
}

typedef struct 
{
  u32 pad;
  u32 *begin;
  u32 *end;
  u32 *cap;
} V3178;
extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];
void func_001D3178(V3178 *p, int f);
