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
s32 func_003CEA50(s32, s32, M2C_UNK, s32);
s32 func_003FA9B8();
s32 func_003CEF08(s32 arg0, s32 arg1)
{
  s32 new_var2;
  volatile long long new_var;
  new_var2 = func_003FA9B8();
  new_var2 = arg1;
  new_var = func_003CEA50(new_var2, arg0, 0, new_var2);
  return new_var == 0;
}
