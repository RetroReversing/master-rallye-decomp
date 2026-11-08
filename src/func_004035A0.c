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
s32 *func_003F73E0();
s32 func_004035A0(void)
{
  s32 *new_var;
  s32 *new_var3;
  s32 *new_var2;
 new_var3 = func_003F73E0(); do { } while (0); new_var2 = new_var3;
  new_var = new_var2;
  *new_var = 5;
  return -1;
}
