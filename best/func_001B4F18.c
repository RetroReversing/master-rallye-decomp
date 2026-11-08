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

void *func_002015D8();                              /* extern */
f32 func_003F3E80(u32, s32, f32);                   /* extern */
extern M2C_UNK D_00425E78;

void *func_001B4F18(void *arg0, void *arg1, void *arg2, void *arg3, s32 arg4) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f5;
    f32 var_f6;
    f32 var_f6_2;
    s32 var_5;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_4;
    u32 temp_6;
    u32 var_3;
    u32 var_4;
    u32 var_7;
    void **temp_9;
    void *temp_2;
    void *temp_5;
    void *var_3_2;

    temp_5 = arg1 + 0xF8;
    temp_9 = M2C_FIELD(func_002015D8(), void ***, 8);
    temp_4 = M2C_FIELD(temp_5, u32 *, 4);
    temp_3 = M2C_FIELD(arg1, u32 *, 0xF8);
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x38;
        do {
            var_3 += 0x38;
        } while (var_3 < temp_4);
    }
    M2C_FIELD(temp_5, u32 *, 4) = (u32) (temp_4 - (temp_4 - temp_3));
    temp_2 = *temp_9;
    M2C_FIELD(temp_2, M2C_UNK (**)(void *, void *, void *, s32, void *, void **), 0x44)(temp_9 + M2C_FIELD(temp_2, s16 *, 0x40), arg2, arg3, arg4, temp_5, temp_9);
    var_4 = M2C_FIELD(arg1, u32 *, 0xF8);
    temp_3_2 = M2C_FIELD(temp_5, u32 *, 4);
    if (var_4 != temp_3_2) {
        temp_f3 = M2C_FIELD(arg2, f32 *, 8) + M2C_FIELD(arg3, f32 *, 8);
        temp_f2 = M2C_FIELD(arg2, f32 *, 0) + M2C_FIELD(arg3, f32 *, 0);
        var_7 = 0;
        temp_f1 = M2C_FIELD(arg2, f32 *, 4) + M2C_FIELD(arg3, f32 *, 4);
        sp18 = temp_f3;
        temp_f3_2 = temp_f3 * 0.5f;
        temp_f4 = temp_f2 * 0.5f;
        sp10 = temp_f2;
        temp_f0 = temp_f1 * 0.5f;
        sp14 = temp_f1;
        sp8 = temp_f3_2;
        var_5 = 0;
        sp0 = temp_f4;
        var_f5 = 100000.0f;
        sp4 = temp_f0;
        if (((s32) ((temp_3_2 - var_4) * 0xB6DB6DB7) >> 3) != 0) {
            temp_6 = var_4;
            var_4 = 0xB6DB6DB7;
            var_3_2 = temp_6 + 0x24;
            do {
                if (~M2C_FIELD(var_3_2, s32 *, 0xC) != 0) {
                    var_5 += 1;
                    temp_f0_2 = M2C_FIELD(var_3_2, f32 *, -0xC) - temp_f4;
                    temp_f1_2 = M2C_FIELD(var_3_2, f32 *, -8) - temp_f0;
                    temp_f2_2 = M2C_FIELD(var_3_2, f32 *, -4) - temp_f3_2;
                    sp30 = temp_f0_2;
                    sp34 = temp_f1_2;
                    temp_f3_3 = (temp_f0_2 * temp_f0_2) + (temp_f1_2 * temp_f1_2) + (temp_f2_2 * temp_f2_2);
                    sp38 = temp_f2_2;
                    if (temp_f3_3 < var_f5) {
                        var_f5 = temp_f3_3;
                        sp10 = M2C_FIELD(var_3_2, f32 *, -0xC);
                        sp14 = M2C_FIELD(var_3_2, f32 *, -8);
                        sp18 = M2C_FIELD(var_3_2, f32 *, -4);
                        sp20 = M2C_FIELD(var_3_2, f32 *, 0);
                        sp24 = M2C_FIELD(var_3_2, f32 *, 4);
                        sp28 = M2C_FIELD(var_3_2, f32 *, 8);
                    }
                }
                var_7 += 1;
                var_3_2 += 0x38;
            } while (var_7 < (u32) ((s32) ((M2C_FIELD(temp_5, u32 *, 4) - temp_6) * 0xB6DB6DB7) >> 3));
        }
        if (var_5 != 0) {
            temp_f6 = 1.0f / M2C_FIELD(arg1, f32 *, 0x114);
            temp_f2_3 = sp10 - sp0;
            temp_f1_3 = sp14 - sp4;
            temp_f8 = temp_f2_3 * temp_f6;
            temp_f9 = temp_f1_3 * temp_f6;
            sp40 = temp_f2_3;
            temp_f4_2 = sp18 - sp8;
            sp44 = temp_f1_3;
            sp30 = temp_f8;
            temp_f2_4 = temp_f4_2 * temp_f6;
            sp48 = temp_f4_2;
            sp34 = temp_f9;
            sp38 = temp_f2_4;
            if (((temp_f8 * sp20) + (temp_f9 * sp24) + (temp_f2_4 * sp28)) < 0.0f) {
                temp_f0_3 = (temp_f8 * temp_f8) + (temp_f9 * temp_f9);
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (temp_f0_3 == temp_f0_3) {
                    var_f6 = 1.0f - temp_f0_3;
                } else {
                    var_f6 = 1.0f - func_003F3E80(var_4, var_5, temp_f0_3 + (temp_f2_4 * temp_f2_4));
                }
            } else {
                var_f0 = (temp_f8 * temp_f8) + (temp_f9 * temp_f9);
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0 != var_f0) {
                    var_f0 = func_003F3E80(var_4, var_5, var_f0 + (temp_f2_4 * temp_f2_4));
                }
                var_f6 = var_f0 + 1.0f;
            }
            temp_f0_4 = M2C_FIELD(arg1, f32 *, 0x148);
            if (var_f6 < temp_f0_4) {
                var_f6_2 = 0.0f;
            } else {
                var_f6_2 = var_f6 - temp_f0_4;
                M2C_FIELD(arg1, s32 *, 0xD4) = 1;
            }
            temp_f0_5 = var_f6_2 * M2C_FIELD(arg1, f32 *, 0x118);
            temp_f3_4 = sp20 * temp_f0_5;
            temp_f2_5 = sp28 * temp_f0_5;
            temp_f1_4 = sp24 * temp_f0_5;
            M2C_FIELD(arg0, f32 *, 0) = temp_f3_4;
            M2C_FIELD(arg0, f32 *, 8) = temp_f2_5;
            M2C_FIELD(arg0, f32 *, 4) = temp_f1_4;
            sp40 = temp_f3_4;
            sp44 = temp_f1_4;
            sp48 = temp_f2_5;
        } else {
            goto block_13;
        }
    } else {
block_13:
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(&D_00425E78, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&D_00425E78, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00425E78, f32 *, 8);
    }
    return arg0;
}
