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

s32 func_003FA580(s32, s32);                        /* extern */
extern s32 D_00429C00;
extern s32 D_00429C04;

s32 *func_002D0D00(s32 arg0) {
    s32 *var_16;
    s32 *var_17;
    s32 *var_2;
    s32 temp_4;

    var_17 = NULL;
    var_16 = &D_00429C00;
loop_1:
    temp_4 = *var_16;
    if (temp_4 != 0) {
        if (func_003FA580(temp_4, arg0) != 0) {
            var_16 += 0x94;
            goto loop_1;
        }
        var_17 = var_16 + 4;
    }
    var_2 = var_17;
    if (var_17 == NULL) {
        var_2 = &D_00429C04;
    }
    return var_2;
}
