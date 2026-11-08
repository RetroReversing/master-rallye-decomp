/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK D_002AD390(s32);                            /* extern */
extern M2C_UNK D_0047D9A8;

void func_002AEDE8(M2C_UNK **arg0, s32 arg1) {
    s32 temp_5;

    temp_5 = arg1 & 1;
    *arg0 = &D_0047D9A8;
    if (temp_5 != 0) {
        D_002AD390(temp_5);
    }
}
