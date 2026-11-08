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
s32 func_002BEC20(s32);
M2C_UNK func_002BECE8();
M2C_UNK func_003F9698(M2C_UNK *, s32);
extern M2C_UNK D_00480DB0;
void func_002BF028(s32 arg0)
{
 do { func_002BECE8(); func_003F9698(&D_00480DB0, func_002BEC20(arg0 + 8)); } while (0);
}
