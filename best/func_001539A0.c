/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
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

void **func_00151A28(void **, void *, u32);         /* extern */
M2C_UNK func_002B2028(void *, void *, u32);         /* extern */
extern M2C_UNK D_0040E618;

void **func_001539A0(void **arg0, s32 arg1, u32 arg2, void **arg3, s32 arg4, u32 arg5) {
    s32 temp_2;
    u32 temp_8;
    u32 temp_8_2;
    void **var_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_7;
    void *var_7;

    temp_8 = M2C_FIELD(*arg3, u32 *, -0x10);
    if (arg1 == 0) {
        temp_7 = *arg0;
        temp_4 = temp_7 - 0x10;
        if ((arg2 >= (u32) M2C_FIELD(temp_7, u32 *, -0x10)) && (arg4 == 0) && (arg5 >= temp_8)) {
            var_2 = arg0;
            if (arg3 != arg0) {
                temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
                M2C_FIELD(temp_4, s32 *, 8) = temp_2;
                if (temp_2 == 0) {
                    if ((M2C_FIELD(temp_4, s32 *, 4) + 0x10) != 0) {
                        func_002B2028(temp_4, temp_7, temp_8);
                    } else {
                        M2C_FIELD(temp_7, u32 *, -0x10) = (u32) M2C_FIELD(&D_0040E618, u32 *, -4);
                        M2C_FIELD(&D_0040E618, u32 *, -4) = (u32) temp_4;
                    }
                }
                var_7 = *arg3;
                temp_4_2 = var_7 - 0x10;
                if (M2C_FIELD(temp_4_2, s32 *, 0xC) == 0) {
                    M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
                } else {
                    var_7 = func_00151930(temp_4_2);
                }
                *arg0 = var_7;
                return arg0;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            return var_2;
        }
    }
    temp_8_2 = temp_8 - arg4;
    var_2 = func_00151A28(arg0, *arg3 + arg4, (temp_8_2 >= arg5) ? arg5 : temp_8_2);
    return var_2;
}
