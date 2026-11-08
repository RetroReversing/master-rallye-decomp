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

s32 func_001F2530(void *arg0, s32 arg1) {
    s32 temp_6;

    if ((arg1 < 0) || (temp_6 = M2C_FIELD(arg0, s32 *, 0), (((u32) arg1 < (u32) ((s32) ((M2C_FIELD(arg0, s32 *, 4) - temp_6) * 0xBA2E8BA3) >> 3)) == 0))) {
        return 0;
    }
    return M2C_FIELD(((arg1 * 0x58) + temp_6), s32 *, 0x48);
}
