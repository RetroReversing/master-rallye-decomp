extern void func_00196358(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, void *);
extern void func_001E3750(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
void func_00196670(void *arg0);
void func_001966C0(void *arg0, s32 arg1, s32 arg2);
void func_00196730(void *arg0)
{
  s32 tmp;
  void ***new_var3;
  void **new_var2;
  u8 *new_var;
  char buf[16];
  if (1)
  {
 do { } while (0);
  }
  new_var = (u8 *) arg0;
  new_var3 = &new_var2;
  func_00196358();
  func_001D2900(((u8 *) arg0) + 0xC, *((s32 *) (new_var + 0x14)));
  tmp = func_001E4280();
  new_var2 = (0, (void **) (((u8 *) arg0) - -0xC));
  func_001D4040(buf, *(*new_var3));
  func_001E3650(tmp, (s32) buf);
}
