extern void func_002B2028(void *, void *);
extern s32 D_0040E658;
extern void *D_0042D508;
extern u32 D_0040E618[];
extern s32 func_003F94D0(void *, s32);
s32 func_0030B940(void *arg0, s16 *arg1)
{
  s32 *base = *((s32 **) (((u8 *) arg0) + 0x24));
  s32 *new_var;
  s32 *out = *((s32 **) (((u8 *) arg0) + 0x48));
  new_var = (s32 *) (((u8 *) out) + (((u32) base[*arg1]) * 4));
  return *new_var;
}

void func_0030B968(void *arg0, s16 *arg1);
void func_0030B258(s32 arg0, s32 arg1);
void func_003D1290(void *arg0, char *arg1);
