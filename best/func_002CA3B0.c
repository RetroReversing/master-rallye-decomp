/* machine draft (m2c), tried by autopilot */
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

void func_002CA3B0(s32 arg0, s32 arg1) {
    s8 *temp_2;
    s8 temp_3;

    temp_2 = arg0 + 4 + (arg1 & 0x7F);
    temp_3 = *temp_2;
    *temp_2 = -1;
    M2C_FIELD((arg0 + temp_3), s8 *, 0x84) = 0;
}
