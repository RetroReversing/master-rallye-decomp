typedef struct 
{
  u8 pad0[0x10];
  s32 field10;
  s32 field14;
  s32 field18;
} S003D7848;
void func_003D7848(S003D7848 *arg0, s32 arg1, s32 arg2)
{
  arg0->field10 = (arg0->field14 = arg1);
  arg0->field18 = arg2;
}

