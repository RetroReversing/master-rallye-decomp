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

void func_002929C8(s32 *arg0, s32 arg1) {
    s32 temp_5;

    temp_5 = arg1 & 1;
    *arg0 = (((((((((((((*arg0 & ~1) | temp_5) & ~2) | (temp_5 * 2)) & ~4) | (temp_5 * 4)) & ~8) | (temp_5 * 8)) & ~0x10) | (temp_5 * 0x10)) & ~0x20) | (temp_5 << 5)) & ~0x40) | (temp_5 << 6);
}
