extern int func_003CE868(void *, char *, unsigned, unsigned);
extern int func_003CE0D0(char **, unsigned, int);
int func_003CFB70(void *a, char **b, unsigned c);
inline static char *strend(char **a)
{
  char *p = *a;
  char *h = p - 16;
  unsigned n;
  if ((*((unsigned *) (p - 8))) >= 2)
  {
    func_003CE0D0(a, *((unsigned *) (p - 16)), 1);
    p = *a;
    h = p - 16;
  }
  *((unsigned *) (h + 12)) = 1;
  n = *((unsigned *) (p - 16));
  if ((*((unsigned *) (h + 8))) >= 2)
  {
    func_003CE0D0(a, n, 1);
    p = *a;
  }
  *((unsigned *) (p - 4)) = 1;
  return p + n;
}

char *func_003CF990(char **a);
char **func_003CF8C0(char **out, char **a)
{
  char **new_var2;
  char **new_var;
  if (new_var)
  {
    new_var = out;
    *new_var = strend(a);
  }
  else
  {
    new_var = out;
    *new_var = strend(a);
  }
  if (1)
  {
    new_var2 = new_var;
    return new_var2;
  }
}

unsigned func_003CFDB0(char *p, signed char c, unsigned i, unsigned end);
