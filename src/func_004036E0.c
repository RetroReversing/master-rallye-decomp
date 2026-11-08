/* identical to func_003D7038 (matched), with its names changed by decompdecomp */
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
s32 func_004036E0(void)
{
  s32 *new_var;
  char new_var2;
  new_var = func_003F73E0();
 do { new_var2 = -1; } while (0);
  *new_var = 5;
  return new_var2;
}
