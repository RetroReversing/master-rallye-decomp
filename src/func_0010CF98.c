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
M2C_UNK func_0010CFD0();
extern M2C_UNK D_0044D900;
M2C_UNK **func_0010CF98(M2C_UNK **arg0)
{
  M2C_UNK **new_var;
  *(new_var = arg0) = &D_0044D900;
  func_0010CFD0();
 do { return arg0; } while (0);
}
