extern void func_00229658(void *, int);
extern int func_00229A48(void *, void *);
extern void *func_003F93CC(void *, void *, unsigned int);
extern int func_00229988(void *, void *, int);
typedef struct Vec
{
  void **begin;
  void **end;
} Vec;
void func_002272D8(void *arg0, void *arg1)
{
  Vec *v = (Vec *) arg0;
  void **cur = v->begin;
  for (;;)
  {
    void **end = v->end;
    if (cur == end)
    {
      break;
    }
    {
      void *elem = *cur;
      if (func_00229A48(elem, arg1) != 0)
      {
        void **next = cur + 1;
        ;
        if (next != v->end)
        {
          int size = (int) (((char *) v->end) - ((char *) next));
          func_003F93CC(cur, next, (unsigned int) ((size >> 2) << 2));
        }
        v->end = v->end - 1;
        if (elem != 0)
        {
          func_00229658(elem, 3);
        }
      }
      else
      {
        cur++;
      }
    }
  }

}

int func_002274D0(void *arg0, void *arg1, void *arg2, int *arg3);
