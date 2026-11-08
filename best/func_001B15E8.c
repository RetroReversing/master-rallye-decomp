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

f32 func_001D5DF0(s32);                             /* extern */
s32 func_001D5F70();                                /* extern */

void func_001B15E8(void *arg0) {
    M2C_UNK32 sp4;
    f32 sp8;
    f32 var_f20;
    f32 var_f21;
    void *temp_2;

    var_f21 = func_001D5DF0(func_001D5F70());
    var_f20 = func_001D5DF0(func_001D5F70());
    if (func_001D5DF0(func_001D5F70()) > 0.5f) {
        var_f21 = -var_f21;
    }
    if (func_001D5DF0(func_001D5F70()) > 0.5f) {
        var_f20 = -var_f20;
    }
    sp4 = 0;
    temp_2 = arg0 + 0x48;
    M2C_FIELD(arg0, f32 *, 0x48) = var_f21;
    sp8 = var_f20;
    M2C_FIELD(temp_2, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(temp_2, f32 *, 8) = sp8;
}
