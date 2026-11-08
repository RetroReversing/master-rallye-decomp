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

s32 func_002EE080(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_5;
    s32 temp_6;

    temp_5 = (arg2 * M2C_FIELD(arg0, s32 *, 0x4C)) + arg1 + (arg3 * M2C_FIELD(arg0, s32 *, 0x58));
    if ((temp_5 < 0) || (temp_6 = M2C_FIELD(arg0, s32 *, 0), (((u32) temp_5 < (u32) ((s32) ((M2C_FIELD(arg0, s32 *, 4) - temp_6) * 0xAAAAAAAB) >> 2)) == 0))) {
        return 0;
    }
    return (temp_5 * 0xC) + temp_6;
}
