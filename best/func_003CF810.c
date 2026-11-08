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

M2C_UNK func_003CE0D0(void **, s32, M2C_UNK);       /* extern */

void **func_003CF810(void **arg0, void **arg1) {
    void *temp_4;
    void *var_3;

    temp_4 = *arg1;
    var_3 = temp_4 - 0x10;
    if ((u32) M2C_FIELD(temp_4, u32 *, -8) >= 2U) {
        func_003CE0D0(arg1, M2C_FIELD(temp_4, s32 *, -0x10), 1);
        var_3 = *arg1 - 0x10;
    }
    M2C_FIELD(var_3, s32 *, 0xC) = 1;
    if ((u32) M2C_FIELD(var_3, u32 *, 8) >= 2U) {
        func_003CE0D0(arg1, M2C_FIELD(*arg1, s32 *, -0x10), 1);
    }
    M2C_FIELD(*arg1, s32 *, -4) = 1;
    *arg0 = *arg1;
    return arg0;
}
