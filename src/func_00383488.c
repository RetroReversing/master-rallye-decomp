/* identical to func_0037C0B8 (matched), with its names changed by decompdecomp */
typedef struct 
{
  u16 d;
  u16 pad;
  s32 type;
} E8;
extern u8 D_004262D0[];
E8 *func_00383488(E8 *first, E8 *last, E8 *result)
{
  int new_var;
  if (first != last)
  {
    do
    {
      if (result != NULL)
      {
        s32 type;
        result->d = first->d;
        type = first->type;
        result->type = type;
        new_var = 4;
        if (type >= 0)
        {
          u8 *tbl = *((u8 **) D_004262D0);
          u8 *objs = *((u8 **) (D_004262D0 + 0x24));
          u8 *obj = objs + ((*((s32 *) (tbl + (type * new_var)))) << 3);
          *((s32 *) (obj + new_var)) += 1;
        }
      }
      first++;
      result++;
    }
    while (first != last);
  }
  return result;
}
