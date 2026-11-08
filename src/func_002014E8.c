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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_00201428(s32);                             /* extern */
s32 func_00201488(s32);                             /* extern */

void *func_002014E8(void *arg0) {
    register int temp_2_2;
    register unsigned temp_2;

    temp_2 = func_00201488(D_002AD408(4));
    M2C_FIELD(arg0, s32 *, 4) = temp_2;
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
    temp_2_2 = func_00201428(D_002AD408(4));
    M2C_FIELD(arg0, s32 *, 0xC) = temp_2_2;
    M2C_FIELD(arg0, s32 *, 8) = temp_2_2;
    return arg0;
}
