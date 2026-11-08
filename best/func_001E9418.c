s32 func_001E9508(void *arg0, s32 arg1);
f32 func_001E94B8(void *arg0, s32 arg1);
f32 func_001E9468(void *arg0, s32 arg1);
f32 func_001E9418(void *arg0, s32 arg1)
{
  f32 *new_var;
  f32 *base = *((f32 **) (((u8 *) arg0) + 0x18));
  if (arg1 < 0)
  {
    new_var = base;
    return *new_var;
  }
  return new_var[arg1];
}

