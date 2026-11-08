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

void ***func_001D6BB0();                            /* extern */

s32 func_00200550(void *arg0, void *arg1, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f3;
    s32 var_2;
    s32 var_3;
    void **temp_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *var_4;

    var_2 = 0;
    if (!(fparg0 <= 0.0f)) {
        temp_2 = arg0 + 0xC0;
        temp_f2 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0xC0);
        sp8 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
        sp0 = temp_f2;
        sp4 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
        temp_5 = *func_001D6BB0();
        temp_3 = *temp_5;
        temp_2_2 = M2C_FIELD(temp_3, void *(**)(void *, void **), 0x6C)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x68), temp_5);
        if (temp_2_2 != NULL) {
            temp_2_3 = arg0 + 0xB0;
            temp_f3 = M2C_FIELD(temp_2_2, f32 *, 0x28) + fparg0;
            if (((temp_f3 * temp_f3) < ((temp_f2 * temp_f2) + (sp4 * sp4) + (sp8 * sp8))) || (-((M2C_FIELD(arg0, f32 *, 0xB0) * temp_f2) + (M2C_FIELD(temp_2_3, f32 *, 4) * sp4) + (M2C_FIELD(temp_2_3, f32 *, 8) * sp8)) < -fparg0)) {
                goto block_4;
            }
            goto block_6;
        }
block_6:
        var_4 = arg0 + 8;
        var_3 = 0;
loop_7:
        var_3 += 1;
        if (!(fparg0 <= ((sp0 * M2C_FIELD(var_4, f32 *, 0)) + (sp4 * M2C_FIELD(var_4, f32 *, 4)) + (sp8 * M2C_FIELD(var_4, f32 *, 8))))) {
            var_4 += 0xC;
            if (var_3 >= 4) {
                var_2 = 1;
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return var_2;
            }
            goto loop_7;
        }
block_4:
        return 0;
    }
    return var_2;
}
