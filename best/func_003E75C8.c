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

M2C_UNK func_003E7498(void *, s32, u32, void *);    /* extern */

void func_003E75C8(void *arg0, s32 arg1) {
    s32 temp_5;
    s64 temp_2;
    u32 temp_6;

    temp_5 = arg1 * 8;
    temp_2 = temp_5 + M2C_FIELD(arg0, s64 *, 0x18);
    M2C_FIELD(arg0, s64 *, 0) = 0;
    temp_6 = M2C_FIELD(arg0, s32 *, 8) + ((s64) (temp_2 << 0x1D) >> 0x20);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s64 *, 0x18) = temp_2;
    M2C_FIELD(arg0, u32 *, 0xC) = temp_6;
    if (temp_6 >= (u32) M2C_FIELD(arg0, u32 *, 0x24)) {
        M2C_FIELD(arg0, u32 *, 0xC) = (u32) (temp_6 - M2C_FIELD(arg0, s32 *, 0x28));
    }
    func_003E7498(arg0, temp_5, temp_6, arg0);
}
