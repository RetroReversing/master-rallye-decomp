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

s32 func_00214FF8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_7;
    s32 var_8;
    void *var_4;
    void *var_6;

    var_7 = arg0;
    var_8 = arg2;
    if (var_7 != arg1) {
        var_6 = arg2 + 0x40;
        var_4 = arg0 + 0x40;
        do {
            if (var_8 != 0) {
                M2C_FIELD(var_6, s32 *, -0x40) = (s32) M2C_FIELD(var_4, s32 *, -0x40);
                M2C_FIELD(var_6, s32 *, -0x3C) = (s32) M2C_FIELD(var_4, s32 *, -0x3C);
                M2C_FIELD(var_6, f32 *, -0x30) = (f32) M2C_FIELD(var_4, f32 *, -0x30);
                M2C_FIELD(var_6, f32 *, -0x2C) = (f32) M2C_FIELD(var_4, f32 *, -0x2C);
                M2C_FIELD(var_6, f32 *, -0x28) = (f32) M2C_FIELD(var_4, f32 *, -0x28);
                M2C_FIELD(var_6, f32 *, -0x24) = (f32) M2C_FIELD(var_4, f32 *, -0x24);
                M2C_FIELD(var_6, f32 *, -0x20) = (f32) M2C_FIELD(var_4, f32 *, -0x20);
                M2C_FIELD(var_6, f32 *, -0x1C) = (f32) M2C_FIELD(var_4, f32 *, -0x1C);
                M2C_FIELD(var_6, f32 *, -0x18) = (f32) M2C_FIELD(var_4, f32 *, -0x18);
                M2C_FIELD(var_6, f32 *, -0x14) = (f32) M2C_FIELD(var_4, f32 *, -0x14);
                M2C_FIELD(var_6, f32 *, -0x10) = (f32) M2C_FIELD(var_4, f32 *, -0x10);
                M2C_FIELD(var_6, f32 *, -0xC) = (f32) M2C_FIELD(var_4, f32 *, -0xC);
                M2C_FIELD(var_6, f32 *, -8) = (f32) M2C_FIELD(var_4, f32 *, -8);
                M2C_FIELD(var_6, f32 *, -4) = (f32) M2C_FIELD(var_4, f32 *, -4);
                M2C_FIELD(var_6, f32 *, 0) = (f32) M2C_FIELD(var_4, f32 *, 0);
                M2C_FIELD(var_6, f32 *, 4) = (f32) M2C_FIELD(var_4, f32 *, 4);
                M2C_FIELD(var_6, f32 *, 8) = (f32) M2C_FIELD(var_4, f32 *, 8);
                M2C_FIELD(var_6, f32 *, 0xC) = (f32) M2C_FIELD(var_4, f32 *, 0xC);
            }
            var_4 += 0x50;
            var_7 += 0x50;
            var_6 += 0x50;
            var_8 += 0x50;
        } while (var_7 != arg1);
    }
    return var_8;
}
