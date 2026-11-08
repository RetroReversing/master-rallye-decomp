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

s32 func_002B1FC0(s32);                             /* extern */
extern M2C_UNK D_00476660;

void *func_001D4B78(void *arg0, s32 arg1) {
    s32 temp_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00476660;
    temp_2 = func_002B1FC0(arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_2 + arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_2;
    M2C_FIELD(arg0, s32 *, 0xC) = temp_2;
    M2C_FIELD(arg0, s32 *, 8) = temp_2;
    return arg0;
}
