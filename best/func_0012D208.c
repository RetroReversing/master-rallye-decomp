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

void func_0012D208(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_5;
    s32 temp_7;
    s32 var_2;

    temp_7 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_2 = (M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7;
    temp_4 = temp_2 >> 2;
    temp_2_2 = (s32) (temp_4 + ((u32) temp_2 >> 0x1F)) >> 1;
    if (arg1 < (temp_7 - temp_2_2)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1 + temp_4);
    } else if ((temp_7 + temp_2_2) < arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1 - temp_4);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    }
    temp_5 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_5 < 0) {
        var_2 = temp_5 + ((s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2);
        goto block_8;
    }
    temp_2_3 = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2;
    var_2 = temp_5 - temp_2_3;
    if ((u32) temp_5 >= (u32) temp_2_3) {
block_8:
        M2C_FIELD(arg0, s32 *, 0x1C) = var_2;
    }
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C) + (M2C_FIELD(arg0, f32 *, 0x20) - (f32) temp_5));
}
