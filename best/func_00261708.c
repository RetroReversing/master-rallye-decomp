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

f32 func_0027DF58();                                /* extern */

void *func_00261708(void *arg0, void *arg1, f32 fparg0) {
    f32 temp_f0;
    s32 temp_4;
    void *temp_2;

    temp_f0 = func_0027DF58();
    temp_4 = M2C_FIELD(arg1, s32 *, 0x14);
    if (M2C_BITWISE(u32, temp_f0) < (u32) ((s32) (M2C_FIELD(arg1, s32 *, 0x18) - temp_4) >> 3)) {
        temp_2 = temp_4 + (M2C_BITWISE(s32, temp_f0) * 8);
        M2C_FIELD(arg0, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(temp_2, M2C_UNK32 *, 0);
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    } else {
        M2C_FIELD(arg0, M2C_UNK32 *, 0) = 0;
        M2C_FIELD(arg0, f32 *, 8) = 1.0f;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
