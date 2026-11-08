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
M2C_UNK func_0030C930(M2C_UNK, s32, s32);           /* extern */
extern s32 D_004297F4;
extern s32 D_004297F8;

void func_002CED00(f32 fparg0) {
    f32 temp_f1;
    f32 var_16;
    f32 var_17;
    f32 var_6;

    if (D_004297F4 != 0) {
        var_17 = 0.0f;
        var_16 = 0.0f;
    } else {
        temp_f1 = M2C_FIELD(func_002D04D0(), f32 *, 0x14);
        if (M2C_BITWISE(s32, temp_f1) >= 0) {
            var_6 = (M2C_BITWISE(s32, temp_f1) < 0x3000) ? temp_f1 : 1.7218e-41f;
        } else {
            var_6 = 0.0f;
        }
        var_17 = var_6;
        var_16 = var_17;
    }
    if (D_004297F8 != M2C_BITWISE(s32, var_16)) {
        func_0030C930(0, M2C_BITWISE(s32, var_16), M2C_BITWISE(s32, var_17));
        func_0030C930(1, M2C_BITWISE(s32, var_16), M2C_BITWISE(s32, var_17));
        D_004297F8 = M2C_BITWISE(s32, var_16);
    }
}
