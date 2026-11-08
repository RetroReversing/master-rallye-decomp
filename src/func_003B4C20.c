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
void *func_002440E0(s32);                           /* extern */
s32 func_003B4CB8(s32, s32);                        /* extern */
s32 func_003B5278(s32, s32);                        /* extern */

void *func_003B4C20(s32 arg0, s32 arg1) {
    s32 temp_19;
    s32 temp_20;
    void *temp_16;

    temp_16 = func_002440E0(D_002AD408(0x20));
    temp_20 = func_003B5278(arg0, arg1);
    temp_19 = func_003B4CB8(arg0, arg1);
    M2C_FIELD(temp_16, s32 *, 0) = func_003B4CB8(arg0, arg1);
    M2C_FIELD(temp_16, s32 *, 8) = temp_20;
    M2C_FIELD(temp_16, s32 *, 4) = temp_19;
    return temp_16;
}
