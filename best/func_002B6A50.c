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

s32 func_002B6AD0(void *, s32);                     /* extern */
s32 func_00406EA8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00407130(s32);                         /* extern */

s32 func_002B6A50(void *arg0) {
    s32 temp_18;
    s32 temp_2;
    s32 var_2;
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, void **, 8);
    temp_2 = func_00406EA8(M2C_FIELD(temp_3, s32 (**)(void *), 0x7C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x78)), 1);
    var_2 = 0;
    if (temp_2 >= 0) {
        temp_18 = func_002B6AD0(arg0, temp_2);
        func_00407130(temp_2);
        var_2 = temp_18;
    }
    return var_2;
}
