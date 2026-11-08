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
M2C_UNK func_003F94D0(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK D_004294D8;

void func_002CD9C8(s32 arg0) {
    s32 temp_17;
    s32 temp_2;

    temp_17 = arg0 * 2;
    M2C_FIELD(&D_004294D8, s32 *, 0) = arg0;
    temp_2 = func_002B1FC0(temp_17);
    M2C_FIELD(&D_004294D8, s32 *, 4) = temp_2;
    func_003F94D0(temp_2, 1, temp_17);
}
