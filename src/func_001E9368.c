extern s32 func_001E99E8(void *, void *, void *);
inline s32 inline_fn(void *arg0, void *arg1, void *arg2, s32 arg3)
{
  return func_001E99E8(arg0, arg1, ((u8 *) arg2) + (arg3 << 2));
}

s32 func_001E9368(void *arg0, void *arg1)
{
  void *new_var2;
  u8 *new_var;
  s32 i = 0;
  if ((*((s32 *) (((u8 *) arg0) + 8))) > 0)
  {
 do { do { void *base = *((void **) (new_var = ((u8 *) arg0) + 0xC)); new_var2 = arg1; if (inline_fn(arg0, new_var2, base, i) != 0) { return i; } i++; } while (i < (*((s32 *) (8 + ((u8 *) arg0))))); } while (0);
  }
  return -1;
}
