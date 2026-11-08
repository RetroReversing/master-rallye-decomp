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
s32 func_003F9288(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK D_0044095C;
extern M2C_UNK *D_004411C4;
extern M2C_UNK D_004A16E8;
s32 func_0040A048(void)
{
  M2C_UNK *new_var;
  M2C_UNK *new_var2;
  s32 var_18;
  var_18 = 0;
  new_var2 = &D_0044095C;
  if ((func_003F9288(&D_004A16E8, new_var2, 4) != 0) && (func_003F9288(&D_004A16E8, D_004411C4, 4) != 0))
  {
    new_var = &D_0044095C;
    var_18 = func_003F9288(new_var, D_004411C4, 4) != 0;
  }
  return var_18;
  {
  }
}

