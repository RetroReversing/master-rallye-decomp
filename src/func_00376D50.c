typedef struct 
{
  s32 ptr;
  s32 val;
} Entry;
Entry *func_00372B00(Entry *p, Entry *end, Entry *q);
s32 func_00376900(s8 *s1, s8 *e1, s8 *s2, s8 *e2);
s32 func_00376968(s8 *s1, s8 *e1, s8 *s2, s8 *e2);
typedef struct Node
{
  s32 *obj;
  struct Node *next;
  s32 pad;
  s32 tag;
} Node;
void *func_00376D50(void *p, s32 size, s32 unused, s32 tag, s32 flag)
{
  s32 *new_var;
  s32 n = 0;
  s32 v;
  Node *it;
  s32 *obj;
  s32 *r;
  while ((1 << n) < size)
  {
    n++;
  }

  it = *((Node **) (((s8 *) p) + 0x1f4));
  flag ^= 1;
  obj = it->obj;
 do { r = 0; } while (0);
  if (obj)
  {
    v = obj[1];
    again:
    if ((v >= n) && ((flag == 0) || (it->tag != tag)))
    {
      r = obj;
    }

    it = (*it).next;
    obj = it->obj;
    new_var = obj;
    if (new_var)
    {
      if (!r)
      {
        v = new_var[1];
        goto again;
      }
    }
  }
  return r;
}
