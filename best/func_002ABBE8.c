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

void func_002ABBE8(u64 *arg0, void *arg1) {
    s32 temp_4;
    s64 temp_3;
    u64 temp_2;

    temp_2 = *arg0;
    temp_3 = temp_2 & (-1U >> 0xC);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_2 >> 0x3F);
    temp_4 = (temp_2 >> 0x34) & 0x7FF;
    switch (temp_4) {                               /* irregular */
    case 0x0:
        M2C_FIELD(arg1, s32 *, 0) = 2;
        return;
    case 0x7FF:
        if (temp_3 == 0) {
            M2C_FIELD(arg1, s32 *, 0) = 4;
            return;
        }
        if (temp_3 & (0x8000 << 0x24)) {
            M2C_FIELD(arg1, s32 *, 0) = 1;
        } else {
            M2C_FIELD(arg1, s32 *, 0) = 0;
        }
        M2C_FIELD(arg1, s64 *, 0x10) = temp_3;
        return;
    default:
        M2C_FIELD(arg1, s64 *, 0x10) = (s64) ((temp_3 << 8) | (0x8000 << 0x2D));
        M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_4 - 0x3FF);
        M2C_FIELD(arg1, s32 *, 0) = 3;
        return;
    }
}
