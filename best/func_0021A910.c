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

void func_0021A910(s32 arg0, s32 arg1, void *arg2) {
    s32 var_3;
    void *temp_7;
    void *var_4;

    var_3 = arg0;
    var_4 = arg0 + 0x24;
    if (var_3 != arg1) {
        temp_7 = arg2 + 0x24;
        __repair_rows: {
            var_3 += 0x38;
            M2C_FIELD(var_4, f32 *, -0x24) = (f32) M2C_FIELD(arg2, f32 *, 0);
            M2C_FIELD(var_4, f32 *, -0x20) = (f32) M2C_FIELD(arg2, f32 *, 4);
            M2C_FIELD(var_4, f32 *, -0x1C) = (f32) M2C_FIELD(arg2, f32 *, 8);
            M2C_FIELD(var_4, f32 *, -0x18) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
            M2C_FIELD(var_4, f32 *, -0x14) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
            M2C_FIELD(var_4, f32 *, -0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x14);
            M2C_FIELD(var_4, f32 *, -0xC) = (f32) M2C_FIELD(arg2, f32 *, 0x18);
            M2C_FIELD(var_4, f32 *, -8) = (f32) M2C_FIELD(arg2, f32 *, 0x1C);
            M2C_FIELD(var_4, f32 *, -4) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
            M2C_FIELD(var_4, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0x24);
            M2C_FIELD(var_4, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
            M2C_FIELD(var_4, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
            M2C_FIELD(var_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
            M2C_FIELD(var_4, s32 *, 0x10) = (s32) M2C_FIELD(arg2, s32 *, 0x34);
            var_4 += 0x38;
        }
if (var_3 != arg1) goto __repair_rows;
    }
}
