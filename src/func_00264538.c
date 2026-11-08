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
M2C_UNK func_00264580(s32);
M2C_UNK func_00264660();
M2C_UNK func_002649A0(s32, s32);
void func_00264538(s32 arg0, s32 arg1)
{
 do { func_00264660(); func_002649A0(arg0, arg1); func_00264580(arg0); } while (0);
}
