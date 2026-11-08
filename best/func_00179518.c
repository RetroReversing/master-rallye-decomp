void func_00179038(void *arg0);
void func_00179A70(void *arg0, void *arg1);
void func_0019EAF0(void *arg0, void *arg1);
void func_001D4040(void *arg0, const char *arg1);
s32 func_001E3D10(s32 arg0, void *arg1, s32 arg2);
s32 func_001E3EC0(s32 arg0, void *arg1, s32 arg2);
extern const char D_0044FD28[];
extern const char D_0044FE68[];
void func_00179518(void *arg0)
{
  void *v1;
  void *v5;
  void *a;
  void *b;
  void *v1b;
  void *v0;
  void *a2;
  void *v12;
  void *sp[4];
  s32 temp_16;
  s32 temp_16_2;
  f32 f0;
  f32 f1;
  f32 f2;
  f32 f3;
  f32 f4;
  f32 new_var;
  v1 = *((void **) (((u8 *) arg0) + 0x98));
  *((f32 *) (((u8 *) arg0) + 0xC)) = *((f32 *) (((u8 *) v1) + 0x20));
  *((f32 *) (((u8 *) arg0) + 0x4)) = *((f32 *) (((u8 *) v1) + 0x24));
  *((f32 *) (((u8 *) arg0) + 0x0)) = *((f32 *) (((u8 *) v1) + 0x1C));
  *((f32 *) (((u8 *) arg0) + 0x8)) = *((f32 *) (((u8 *) v1) + 0x28));
  *((s32 *) (((u8 *) arg0) + 0x10)) = *((s32 *) (((u8 *) v1) + 0x2C));
  *((s32 *) (((u8 *) arg0) + 0x14)) = *((s32 *) (((u8 *) v1) + 0x30));
  *((s32 *) (((u8 *) arg0) + 0x24)) = *((s32 *) (((u8 *) v1) + 0x34));
  *((s32 *) (((u8 *) arg0) + 0x1C)) = *((s32 *) (((u8 *) v1) + 0x48));
  *((s32 *) (((u8 *) arg0) + 0x20)) = *((s32 *) (((u8 *) v1) + 0x3C));
  *((s32 *) (((u8 *) arg0) + 0x18)) = *((s32 *) (((u8 *) v1) + 0x38));
  *((s32 *) (((u8 *) arg0) + 0x28)) = *((s32 *) (((u8 *) v1) + 0x44));
  *((s32 *) (((u8 *) arg0) + 0x2C)) = *((s32 *) (((u8 *) v1) + 0x40));
  *((s32 *) (((u8 *) arg0) + 0x30)) = *((s32 *) (((u8 *) v1) + 0x48));
  *((s32 *) (((u8 *) arg0) + 0x80)) = *((s32 *) (((u8 *) v1) + 0x90));
  if (((*((s32 *) (((u8 *) v1) + 0xA8))) != 0) || ((*((s32 *) (((u8 *) v1) + 0x4C))) == 0))
  {
    temp_16 = func_001E4280();
    func_001D4040(sp, D_0044FD28);
    func_001E3D10(temp_16, sp, 1);
    temp_16_2 = func_001E4280();
    func_001D4040(sp, D_0044FE68);
    func_001E3EC0(temp_16_2, sp, *((s32 *) (((u8 *) arg0) + 0x88)));
  }
  func_00179038(arg0);
  func_0019EAF0(*((void **) (((u8 *) arg0) + 0x9C)), arg0);
  a = *((void **) (((u8 *) arg0) + 0x90));
  b = *((void **) (((u8 *) arg0) + 0x98));
  v1b = *((void **) (((u8 *) a) + 0xC));
  v0 = *((void **) (((u8 *) v1b) + 4));
  a2 = (void *) (((u8 *) v0) + 0x11C);
  v12 = (void *) (((u8 *) v0) + 0xF8);
  new_var = *((f32 *) (((u8 *) v12) + 4));
  f1 = *((f32 *) (((u8 *) v0) + 0xF8));
  f0 = *((f32 *) (((u8 *) v0) + 0x11C));
  f0 = f0 * f1;
  f3 = *((f32 *) (((u8 *) a2) + 4));
  f4 = new_var;
  f3 = f3 * f4;
  f2 = *((f32 *) (((u8 *) a2) + 8));
  f1 = *((f32 *) (((u8 *) v12) + 8));
  f2 = f2 * f1;
  f0 = f0 + f3;
  f0 = f0 + f2;
  *((f32 *) (((u8 *) b) + 0xA4)) = f0;
  if ((*((s32 *) (((u8 *) arg0) + 0x30))) != 0)
  {
    func_00179A70(arg0, b);
  }
  func_001E3D10(func_001E4280(), ((u8 *) arg0) + 0xA0, *((s32 *) (((u8 *) arg0) + 0x20)));
  func_001E3D10(func_001E4280(), ((u8 *) arg0) + 0xA4, *((s32 *) (((u8 *) arg0) + 0x18)));
}
