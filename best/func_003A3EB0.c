/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK *func_00152D28(s32);                        /* extern */
s32 func_003A32A8(s32);                             /* extern */
s32 func_003A3E70(s32);                             /* extern */
M2C_UNK *func_003D2F68(s32);                        /* extern */
extern M2C_UNK D_0040E618;

M2C_UNK *func_003A3EB0(s32 arg0) {
    M2C_UNK **sp0;
    M2C_UNK *sp4;
    M2C_UNK *sp8;
    M2C_UNK **temp_2;

    if (arg0 != 0) {
        return func_003D2F68(arg0);
    }
    temp_2 = &D_0040E618 + (func_003A32A8(arg0) * 4);
    sp0 = temp_2;
    sp4 = *temp_2;
    if (sp4 == NULL) {
        sp8 = func_00152D28(func_003A3E70(arg0));
        return sp8;
    }
    *sp0 = *sp4;
    return sp4;
}
