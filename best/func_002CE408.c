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

void *func_002D04D0();                              /* extern */
M2C_UNK func_0030C930(s32, M2C_UNK, f32);           /* extern */
extern M2C_UNK D_00429868;

void func_002CE408(s32 arg0, f32 fparg0, f32 fparg1) {
    M2C_UNK var_5;
    f32 temp_6;
    f32 var_6;
    void *temp_4;

    if ((u32) (arg0 - 2) < 0x2EU) {
        temp_6 = fparg0 * 8191.0f * 0.9f * M2C_FIELD(func_002D04D0(), f32 *, 0x18);
        if (0x3F666666 < 0) {
            var_5 = 0;
        } else {
            var_5 = (0x3F666666 >= 0x2000) ? 0x1FFF : 0x3F666666;
        }
        if (M2C_BITWISE(s32, temp_6) < 0) {
            var_6 = 0.0f;
        } else {
            var_6 = (M2C_BITWISE(s32, temp_6) >= 0x2000) ? 1.1478e-41f : temp_6;
        }
        func_0030C930(arg0, var_5, var_6);
        temp_4 = &D_00429868 + (arg0 * 0x10);
        M2C_FIELD(temp_4, f32 *, 4) = fparg0;
        M2C_FIELD(temp_4, f32 *, 8) = fparg1;
    }
}
