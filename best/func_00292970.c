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

s32 func_001DF4C8(s32);                             /* extern */
M2C_UNK func_00292928();                            /* extern */

void *func_00292970(void *arg0, void *arg1) {
    s32 temp_4;

    func_00292928();
    temp_4 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_4 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = func_001DF4C8(temp_4);
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    return arg0;
}
