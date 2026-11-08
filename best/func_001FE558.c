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

s32 func_001FE3A8();                                /* extern */

void func_001FE558(s32 **arg0, void *arg1, void *arg2, void *arg3, void *arg4, s32 arg5) {
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;

    if (arg5 < func_001FE3A8()) {
        temp_4 = arg5 * 4;
        temp_2 = **arg0 + (temp_4 * 0x50);
        temp_2_2 = temp_2 + 0x40;
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_2, f32 *, 0x40);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
        temp_2_3 = **arg0 + ((temp_4 + 1) * 0x50);
        temp_2_4 = temp_2_3 + 0x40;
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x40);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_2_4, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_2_4, f32 *, 8);
        temp_2_5 = **arg0 + ((temp_4 + 2) * 0x50);
        temp_2_6 = temp_2_5 + 0x40;
        M2C_FIELD(arg3, f32 *, 0) = (f32) M2C_FIELD(temp_2_5, f32 *, 0x40);
        M2C_FIELD(arg3, f32 *, 4) = (f32) M2C_FIELD(temp_2_6, f32 *, 4);
        M2C_FIELD(arg3, f32 *, 8) = (f32) M2C_FIELD(temp_2_6, f32 *, 8);
        temp_2_7 = **arg0 + ((temp_4 + 3) * 0x50);
        temp_2_8 = temp_2_7 + 0x40;
        M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(temp_2_7, f32 *, 0x40);
        M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(temp_2_8, f32 *, 4);
        M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(temp_2_8, f32 *, 8);
    }
}
