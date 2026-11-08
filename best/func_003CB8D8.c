void func_003CB668(f32);
void func_003CB710(void *, void *, f32);
void func_003CB7B8(void *, void *, f32);
typedef struct 
{
  f32 unk0;
  f32 unk4;
  f32 unk8;
} S_func_003CB860_arg2;
void func_003CB860(void *arg0, S_func_003CB860_arg2 *arg2);
void func_003CB508(void *, f32);
void func_003CB360(void *, void *);
void func_003CB3A0(void *, void *);
typedef struct 
{
  f32 v[4];
} Vec4;
void func_003CB988(void *arg0, void *arg1, void *arg2, void *arg3);
void func_003CB318(void *, void *, void *);
void func_003CB520(void *, void *, void *);
void func_003CB5C8(void *);
void func_003CB8D8(void *arg0, void *arg1, void *arg2, void *arg3)
{
  f32 sp[16];
  f32 sp40[4];
  f32 sp10[4];
  f32 sp20[4];
  func_003CB5C8(sp);
  func_003CB318(sp40, arg3, arg2);
  func_003CB360(sp, sp40);
  func_003CB360(sp20, arg2);
  func_003CB318(sp10, sp20, sp);
  func_003CB520(sp, sp, arg1);
  func_003CB3E8(arg0, sp);
}

void func_003CB3E8(void *, void *);
void func_003D7B00(void *arg0, s32 arg1);
