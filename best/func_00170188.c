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

extern M2C_UNK D_00426508;

void func_00170188(void *arg0, void *arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_3;
    void *temp_3_2;
    void *var_2;
    void *var_6;

    if (fparg1 < M2C_FIELD(arg0, f32 *, 0xF4)) {
        if (arg2 == 0) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x80);
            if (temp_3 == 0) {
                var_2 = arg0 + 0xE8;
                var_6 = var_2;
                temp_f0 = M2C_FIELD(arg1, f32 *, 8) * fparg0;
                temp_f1 = M2C_FIELD(arg1, f32 *, 0) * fparg0;
                temp_f2 = M2C_FIELD(arg1, f32 *, 4) * fparg0;
                sp18 = temp_f0;
                temp_f3 = -temp_f1;
                sp10 = temp_f1;
                temp_f4 = -temp_f2;
                sp14 = temp_f2;
                sp8 = -temp_f0;
                M2C_FIELD(arg0, f32 *, 0xE8) = temp_f3;
                sp0 = temp_f3;
                sp4 = temp_f4;
                M2C_FIELD(var_2, f32 *, 4) = temp_f4;
                goto block_6;
            }
            var_2 = arg0 + 0xE8;
            if (temp_3 != 1) {
                var_6 = var_2;
                temp_f0_2 = M2C_FIELD(arg1, f32 *, 0) * fparg0;
                temp_f1_2 = M2C_FIELD(arg1, f32 *, 4) * fparg0;
                sp8 = M2C_FIELD(arg1, f32 *, 8) * fparg0;
                M2C_FIELD(arg0, f32 *, 0xE8) = temp_f0_2;
                sp0 = temp_f0_2;
                sp4 = temp_f1_2;
                M2C_FIELD(var_2, f32 *, 4) = temp_f1_2;
block_6:
                M2C_FIELD(var_2, f32 *, 8) = sp8;
            } else {
                goto block_7;
            }
        } else {
            goto block_8;
        }
    } else {
block_7:
block_8:
        temp_3_2 = arg0 + 0xE8;
        var_6 = temp_3_2;
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
        M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
        M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    }
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) * 0.0f);
    M2C_FIELD(var_6, f32 *, 4) = (f32) (M2C_FIELD(var_6, f32 *, 4) * 0.0f);
    M2C_FIELD(var_6, f32 *, 8) = (f32) (M2C_FIELD(var_6, f32 *, 8) * 0.0f);
}
