void func_0016D178(void *arg0, float *arg1);
extern void func_00192FD8(void);
extern void func_001D2900(void *a0, s32 a1);
extern void *func_001D4040(void *a0, s32 a1);
extern void func_001E4070(s32 a0, void *a1, void *a2);
extern void func_001E3D10(s32 a0, void *a1, void *a2);
typedef struct 
{
  u8 pad0[0xC];
  s32 unkC;
  u8 pad10[0xA0];
  s32 unkB0;
  s32 unkB4;
  s32 unkB8;
} S93898;
inline u8 *inline_fn(S93898 *arg0)
{
  return ((u8 *) arg0) + 0xC;
}

void func_00193898(S93898 *arg0, s32 arg1, void *arg2)
{
  S93898 *new_var;
  void *new_var3;
  u8 tmp[16];
  s32 v;
  s32 new_var2;
  new_var = arg0;
  new_var3 = (void *) inline_fn(new_var);
  func_00192FD8();
  func_001D2900(new_var3, new_var->unkB0);
  v = func_001E4280();
  new_var2 = new_var->unkC;
  func_001D4040(tmp, new_var2);
  func_001E4070(v, tmp, arg2);
}

void func_00193908(S93898 *arg0, s32 arg1, void *arg2);
void func_00193978(S93898 *arg0, s32 arg1, void *arg2);
