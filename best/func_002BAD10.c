/* machine draft (m2c), tried by autopilot */
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

s32 func_002BAD10(void *arg0, s32 arg1, s32 arg2) {
    s64 temp_3;
    u32 temp_9;
    u32 var_7;
    void *temp_3_2;
    void *temp_3_3;
    void *var_8;

    var_8 = M2C_FIELD(arg0, void **, 0xC);
    if (M2C_FIELD(var_8, void **, 0x14) != NULL) {
        var_8 = M2C_FIELD(var_8, void **, 0x14);
loop_2:
        if (M2C_FIELD(var_8, void **, 0x14) != NULL) {
            var_8 = M2C_FIELD(var_8, void **, 0x14);
            goto loop_2;
        }
    }
    var_7 = M2C_FIELD(arg0, u32 *, 8);
    temp_9 = var_7 + (M2C_FIELD(arg0, s32 *, 0) << 5);
    if (var_7 < temp_9) {
        do {
            temp_3 = M2C_FIELD(var_7, s64 *, 0);
            if ((temp_3 >= arg1) && (arg2 >= temp_3) && ((s16) M2C_FIELD(var_7, u16 *, 0xC) == 1) && (M2C_FIELD(var_7, s32 *, 0x10) == 0)) {
                M2C_FIELD(var_7, u16 *, 0xC) = 0U;
                M2C_FIELD(var_7, s64 *, 0) = -1;
                if (var_8 != var_7) {
                    temp_3_2 = M2C_FIELD(var_7, void **, 0x14);
                    if (temp_3_2 != NULL) {
                        M2C_FIELD(temp_3_2, void **, 0x18) = (void *) M2C_FIELD(var_7, void **, 0x18);
                    }
                    temp_3_3 = M2C_FIELD(var_7, void **, 0x18);
                    if (temp_3_3 != NULL) {
                        M2C_FIELD(temp_3_3, void **, 0x14) = (void *) M2C_FIELD(var_7, void **, 0x14);
                    }
                    if (M2C_FIELD(arg0, void **, 0xC) == var_7) {
                        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(var_7, void **, 0x14);
                    }
                    M2C_FIELD(var_7, void **, 0x18) = var_8;
                    M2C_FIELD(var_8, u32 *, 0x14) = var_7;
                    M2C_FIELD(var_7, void **, 0x14) = NULL;
                    var_8 = (void *) var_7;
                }
            }
            var_7 += 0x20;
        } while (var_7 < temp_9);
    }
    return 1;
}
