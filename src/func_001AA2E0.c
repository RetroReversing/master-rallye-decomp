void func_0016D178(void *arg0, f32 *arg1);
void *func_001AA2E0(void *arg0, void *arg1, void *arg2)
{
  f32 z = *((f32 *) (((u8 *) arg2) + 8));
  f32 x = *((f32 *) arg2);
  f32 y = *((f32 *) (((u8 *) arg2) + 4));
  u8 *new_var;
  new_var = (u8 *) arg0;
  *((f32 *) (new_var + 4)) = y;
  *((f32 *) arg0) = z;
  *((f32 *) (((u8 *) arg0) + 8)) = -x;
  return arg0;
}

void func_001AA308(void *arg0, void *arg1);
void func_001AA3B8(void *arg0);
