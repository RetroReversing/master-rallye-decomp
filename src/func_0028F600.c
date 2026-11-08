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

s32 func_00205CE0();
s32 func_002060F8();
s32 func_002062A8();

s32 func_0028F600(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_16;

    if (arg1 != NULL) {
        temp_16 = M2C_FIELD(arg1, s32 *, 0x4C);
        if (temp_16 != 0) {
            func_002062A8(temp_16, arg2);
            func_002060F8(temp_16);
            func_00205CE0(temp_16, 0);
            return 1;
        }
    }
    return 0;
}
