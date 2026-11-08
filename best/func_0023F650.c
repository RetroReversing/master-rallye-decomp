#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
M2C_UNK func_001CA600();
M2C_UNK func_001CA7C8(s32, s32);
M2C_UNK func_001CA990(s32, s32);
s32 func_0023F650(s32 arg0, s32 arg1)
{
  s32 new_var3;
  s32 *new_var;
  int new_var2;
 do { func_001CA600(); func_001CA7C8(arg0 + 0xC, arg1 + 0xC); new_var3 = arg1; } while (0);
  new_var2 = new_var3 + 0x18;
  func_001CA990((*(new_var = &arg0)) + 0x18, new_var2);
  return arg0;
}
