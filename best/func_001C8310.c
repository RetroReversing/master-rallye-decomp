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

s32 func_001C8310(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_7;
    s32 var_8;
    void *var_4;
    void *var_6;

    var_7 = arg0;
    var_8 = arg2;
    if (var_7 != arg1) {
        var_6 = arg2 + 0x20;
        var_4 = arg0 + 0x20;
        do {
            if (var_8 != 0) {
                M2C_FIELD(var_6, s32 *, -0x20) = (s32) M2C_FIELD(var_4, s32 *, -0x20);
                M2C_FIELD(var_6, s32 *, -0x1C) = (s32) M2C_FIELD(var_4, s32 *, -0x1C);
                M2C_FIELD(var_6, f32 *, -0x18) = (f32) M2C_FIELD(var_4, f32 *, -0x18);
                M2C_FIELD(var_6, f32 *, -0x14) = (f32) M2C_FIELD(var_4, f32 *, -0x14);
                M2C_FIELD(var_6, f32 *, -0x10) = (f32) M2C_FIELD(var_4, f32 *, -0x10);
                M2C_FIELD(var_6, f32 *, -0xC) = (f32) M2C_FIELD(var_4, f32 *, -0xC);
                M2C_FIELD(var_6, f32 *, -8) = (f32) M2C_FIELD(var_4, f32 *, -8);
                M2C_FIELD(var_6, f32 *, -4) = (f32) M2C_FIELD(var_4, f32 *, -4);
                M2C_FIELD(var_6, f32 *, 0) = (f32) M2C_FIELD(var_4, f32 *, 0);
                M2C_FIELD(var_6, f32 *, 4) = (f32) M2C_FIELD(var_4, f32 *, 4);
                M2C_FIELD(var_6, f32 *, 8) = (f32) M2C_FIELD(var_4, f32 *, 8);
            }
            var_4 += 0x2C;
            var_7 += 0x2C;
            var_6 += 0x2C;
            var_8 += 0x2C;
        } while (var_7 != arg1);
    }
    return var_8;
}
