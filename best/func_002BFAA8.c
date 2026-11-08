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

s32 func_002BFBD8();                                /* extern */

s32 func_002BFAA8(void *arg0) {
    s32 temp_2;
    s32 var_17;
    void *temp_3;

    var_17 = 0;
    temp_2 = func_002BFBD8();
    if (temp_2 != 0) {
        temp_3 = M2C_FIELD(arg0, void **, 0x24);
        var_17 = M2C_FIELD(temp_3, s32 (**)(void *, s32), 0x14)(arg0 + M2C_FIELD(temp_3, s16 *, 0x10), temp_2);
    }
    return var_17;
}
