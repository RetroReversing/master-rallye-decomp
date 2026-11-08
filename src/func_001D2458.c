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
M2C_UNK func_001D2CD8();
s32 *func_001D2458(s32 *arg0)
{
  int new_var2;
 do { } while (0);
  new_var2 = 0;
  *arg0 = new_var2;
  func_001D2CD8();
  arg0 = arg0;
  return arg0;
}
