/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_002B2028(void *, void *, void *, void *); /* extern */
void *func_003CD828(void *);                        /* extern */
void **func_003CD948(void **, void *, u32, s32, u32); /* extern */
M2C_UNK func_003D13B0(M2C_UNK *, void *, void *, void *); /* extern */
extern M2C_UNK D_00437E18;
extern M2C_UNK D_00488CB0;

void **func_003CDC40(void **arg0, void *arg1, void *arg2, void **arg3, u32 arg4, u32 arg5) {
    s32 temp_2;
    s32 temp_3;
    s32 var_2_2;
    u32 *temp_2_2;
    u32 temp_17;
    u32 temp_8;
    void **var_2;
    void *temp_21;
    void *temp_22;
    void *temp_4;
    void *var_5;
    void *var_6;
    void *var_7;

    var_5 = arg1;
    var_6 = arg2;
    temp_22 = var_6;
    temp_21 = var_5;
    var_7 = *arg3;
    temp_17 = M2C_FIELD(var_7, u32 *, -0x10);
    if (temp_21 == NULL) {
        var_6 = *arg0;
        var_5 = var_6 - 0x10;
        if ((u32) temp_22 >= (u32) M2C_FIELD(var_6, u32 *, -0x10)) {
            var_2_2 = temp_17 < arg4;
            if (arg4 == 0) {
                var_2_2 = temp_17 < arg4;
                if (arg5 >= temp_17) {
                    var_2 = arg0;
                    if (arg3 != arg0) {
                        temp_2 = M2C_FIELD(var_5, s32 *, 8) - 1;
                        M2C_FIELD(var_5, s32 *, 8) = temp_2;
                        if (temp_2 == 0) {
                            temp_3 = M2C_FIELD(var_5, s32 *, 4);
                            if ((u32) (temp_3 + 0x10) >= 0x81U) {
                                func_002B2028(var_5, var_5, var_6, var_7);
                            } else {
                                temp_2_2 = ((((u32) (temp_3 + 0x17) >> 3) - 1) * 4) + &D_00437E18;
                                M2C_FIELD(var_6, u32 *, -0x10) = (u32) *temp_2_2;
                                *temp_2_2 = (u32) var_5;
                            }
                            var_7 = *arg3;
                        }
                        temp_4 = var_7 - 0x10;
                        if (M2C_FIELD(temp_4, s32 *, 0xC) == 0) {
                            M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
                        } else {
                            var_7 = func_003CD828(temp_4);
                        }
                        *arg0 = var_7;
                        return arg0;
                    }
                    /* Duplicate return node #20. Try simplifying control flow for better match */
                    return var_2;
                }
            }
            goto block_17;
        }
    }
    var_2_2 = temp_17 < arg4;
block_17:
    if (var_2_2 != 0) {
        func_003D13B0(&D_00488CB0, var_5, var_6, var_7);
    }
    temp_8 = temp_17 - arg4;
    var_2 = func_003CD948(arg0, temp_21, (u32) temp_22, *arg3 + arg4, (temp_8 >= arg5) ? arg5 : temp_8);
    return var_2;
}
