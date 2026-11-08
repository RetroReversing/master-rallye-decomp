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

s64 func_00400A38(s32, s16, s32, s32);              /* extern */

s64 func_003FA410(void *arg0, s32 arg1, s32 arg2) {
    s64 temp_3;

    temp_3 = (s64) (func_00400A38(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE), arg1, arg2) << 0x20) >> 0x20;
    if (temp_3 < 0) {
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) & 0xEFFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + temp_3);
    }
    return temp_3;
}
