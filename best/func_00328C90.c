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

f32 func_0015ACC8();                                /* extern */
f32 func_003F3140(f32);                             /* extern */
extern s32 D_0042DBF0;
extern f32 D_004A4760;

void func_00328C90(void) {
    f32 *var_17;
    f32 temp_f12;
    s32 var_16;

    if (D_0042DBF0 == 0) {
        D_0042DBF0 = 1;
        var_17 = &D_004A4760;
        var_16 = 0;
        do {
            temp_f12 = (f32) var_16;
            var_16 += 1;
            *var_17 = func_003F3140(temp_f12 * (func_0015ACC8() * 0.00024414062f));
            var_17 += 4;
        } while (var_16 < 0x1000);
    }
}
