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

M2C_UNK func_003768A8(void *, s32 *, s32, M2C_UNK); /* extern */

void func_002F8CD8(void *arg0, s32 *arg1) {
    s32 *temp_5;
    s32 temp_6;
    void *temp_4;

    temp_6 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_5 = M2C_FIELD(arg0, s32 *, 0) + (*arg1 * 4);
    temp_4 = temp_6 + (*temp_5 * 0x12C);
    if (M2C_FIELD(temp_4, s32 *, 0x120) == 0) {
        func_003768A8(temp_4, temp_5, temp_6, 0x12C);
    }
}
