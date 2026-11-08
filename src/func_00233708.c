void *func_00233180(void *arg0);
s32 func_00233708(void *arg0, s32 arg1)
{
  s32 *begin = *((s32 **) arg0);
  s32 n = ((*((s32 *) (((u8 *) arg0) + 4))) - ((s32) begin)) >> 2;
  s32 i = 0;
  int new_var;
  new_var = 0;
  if (n > new_var)
  {
    s32 *p = begin;
    do
    {
      i++;
      if (arg1 == (*p))
      {
        return 1;
      }
      p++;
    }
    while (i < n);
  }
  return 0;
}

s32 func_00233750(void *arg0, s32 arg1);
s32 func_00233790(void *arg0, s32 arg1);
