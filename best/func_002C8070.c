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

extern M2C_UNK D_00428FA0;

s64 func_002C8070(void *arg0, s32 arg1) {
    s64 var_4;
    u16 temp_3;

    var_4 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        temp_3 = M2C_FIELD(arg0, u16 *, 0x18);
        if ((arg1 < (s32) temp_3) && (temp_3 < 0x11U)) {
            var_4 = (s64) (((*((arg1 * 2) + &D_00428FA0) & M2C_FIELD(arg0, s64 *, 0x90)) != 0) << 0x20) >> 0x20;
        }
    }
    return var_4;
}
