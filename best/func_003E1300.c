void func_003D7B00(void *arg0, s32 arg1);
void func_003E0FA0(void *arg0, s64 arg1);
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
} S_3E0FF0_arg1;
extern char D_00489A08[];
s32 func_003E1708(s32, const char *, s32);
s32 func_003E0FF0(s32 arg0, S_3E0FF0_arg1 *arg1, s32 arg2, u32 arg3);
void func_003E11E8(void *arg0, void *arg1);
void func_003E1348(void *arg0, void *arg1);
void func_003E1300(void *arg0)
{
  int new_var2;
  void *p = *((void **) (((u8 *) arg0) + 0x40));
  void *new_var4;
  void **new_var3;
  new_var4 = p;
  new_var2 = 3;
  if ((*((s32 *) (((u8 *) new_var4) + 0x174))) != new_var2)
  {
    func_003E1348(arg0, arg0);
    return;
  }
  new_var3 = &arg0;
  p = *new_var3;
  func_003E11E8(*new_var3, p);
}

