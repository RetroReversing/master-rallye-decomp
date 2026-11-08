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

f32 func_0023DEC0(void *, s32);                     /* extern */

void func_0023DE38(void *arg0) {
    f32 *temp_16;
    s32 *temp_2;
    s32 temp_19;
    s32 temp_3;
    s32 var_17;

    temp_19 = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) - M2C_FIELD(arg0, s32 *, 0xB0)) >> 2;
    var_17 = 0;
    if (temp_19 > 0) {
        do {
            temp_3 = var_17 * 4;
            temp_2 = M2C_FIELD(arg0, s32 *, 0xB0) + temp_3;
            var_17 += 1;
            temp_16 = M2C_FIELD(arg0, s32 *, 0x24) + temp_3;
            *temp_16 = func_0023DEC0(arg0, *temp_2);
        } while (var_17 < temp_19);
    }
}
