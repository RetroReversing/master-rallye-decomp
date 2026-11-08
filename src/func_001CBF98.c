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

s32 func_001CBF98(s32 arg0, s32 arg1, void *arg2) {
    s32 var_4;
    s32 var_5;
    void *temp_10;
    void *temp_8;
    void *temp_9;
    void *var_7;

    var_4 = arg0;
    var_5 = arg1;
    temp_10 = arg2 + 0xC;
    if (var_5 != 0) {
        temp_9 = arg2 + 0x18;
        temp_8 = arg2 + 0x24;
        var_7 = var_4 + 0x24;
        do {
            var_5 -= 1;
            if (var_4 != 0) {
                M2C_FIELD(var_7, f32 *, -0x24) = (f32) M2C_FIELD(arg2, f32 *, 0);
                M2C_FIELD(var_7, f32 *, -0x20) = (f32) M2C_FIELD(arg2, f32 *, 4);
                M2C_FIELD(var_7, f32 *, -0x1C) = (f32) M2C_FIELD(arg2, f32 *, 8);
                M2C_FIELD(var_7, f32 *, -0x18) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
                M2C_FIELD(var_7, f32 *, -0x14) = (f32) M2C_FIELD(temp_10, f32 *, 4);
                M2C_FIELD(var_7, f32 *, -0x10) = (f32) M2C_FIELD(temp_10, f32 *, 8);
                M2C_FIELD(var_7, f32 *, -0xC) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
                M2C_FIELD(var_7, f32 *, -8) = (f32) M2C_FIELD(temp_9, f32 *, 4);
                M2C_FIELD(var_7, f32 *, -4) = (f32) M2C_FIELD(temp_9, f32 *, 8);
                M2C_FIELD(var_7, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0x24);
                M2C_FIELD(var_7, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
                M2C_FIELD(var_7, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
                M2C_FIELD(var_7, s32 *, 0xC) = (s32) M2C_FIELD(arg2, s32 *, 0x30);
                M2C_FIELD(var_7, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 0x34);
            }
            var_7 += 0x38;
            var_4 += 0x38;
        } while (var_5 != 0);
    }
    return var_4;
}
