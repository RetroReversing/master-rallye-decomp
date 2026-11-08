/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_003E0EA0(void *arg0, s32 *arg1) {
    s32 (*temp_3)(s32, M2C_UNK);
    s32 temp_2;
    s32 temp_6;
    s32 var_7;

    var_7 = 0;
    if (arg0 != NULL) {
        temp_6 = M2C_FIELD(arg0, s32 *, 0x40);
        if (temp_6 != 0) {
            temp_2 = *arg1 * 8;
            temp_3 = M2C_FIELD((temp_6 + temp_2), s32 (**)(s32, M2C_UNK), 0xC);
            if (temp_3 != NULL) {
                var_7 = temp_3(M2C_FIELD((temp_6 + temp_2), s32 *, 0x10), 0);
            }
        }
    }
    return var_7;
}
