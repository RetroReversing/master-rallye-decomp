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

s32 func_00137D30(void *arg0) {
    u32 temp_3;

    temp_3 = M2C_FIELD(arg0, u32 *, 0x10);
    switch (temp_3) {
    case 0:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0xA;
    case 1:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0xD;
    case 2:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0x10;
    case 3:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0x13;
    case 4:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0x16;
    case 5:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0x19;
    case 6:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14);
    case 7:
        return M2C_FIELD((arg0 + (M2C_FIELD(arg0, u32 *, 0x10) * 4)), s32 *, 0x14) + 0x24;
    default:
        return 0;
    }
}
