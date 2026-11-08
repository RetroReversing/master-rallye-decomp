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

s32 func_001FE3A8(s32 **);                          /* extern */

void *func_001FE688(void *arg0, s32 **arg1, s32 arg2, s32 arg3) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    void *temp_2;
    void *temp_2_2;

    sp0 = 0;
    sp4 = 0;
    sp8 = 0;
    if (arg3 < func_001FE3A8(arg1)) {
        func_0015ACE0((f32) arg2, 0.0f, 3.0f);
        temp_2 = **arg1 + (((arg3 * 4) + M2C_ERROR(/* Read from unset register $f1 */)) * 0x50);
        temp_2_2 = temp_2 + 0x40;
        sp0 = M2C_FIELD(temp_2, M2C_UNK32 *, 0x40);
        sp4 = M2C_FIELD(temp_2_2, M2C_UNK32 *, 4);
        sp8 = M2C_FIELD(temp_2_2, M2C_UNK32 *, 8);
    }
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(arg0, M2C_UNK32 *, 8) = sp8;
    return arg0;
}
