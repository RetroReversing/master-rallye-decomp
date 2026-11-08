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

s32 func_002BB070();                                /* extern */
M2C_UNK func_003F94D0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_002BB150(s32 arg0, s32 arg1) {
    s32 temp_16;

    if (func_002BB070(arg0, arg1) != 0) {
        temp_16 = arg1 * 0xC;
        func_003F94D0(arg0 + temp_16, 0, 0xC);
        M2C_FIELD((arg0 + temp_16), s32 *, 4) = 0xFFFFFFFF;
    }
}
