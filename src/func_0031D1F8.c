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

void func_0031D1F8(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_5;
    s32 temp_6;

    temp_5 = *arg1;
    if (M2C_FIELD(arg0, s32 *, 0x150) != temp_5) {
        M2C_FIELD(arg0, s32 *, 0x150) = temp_5;
        M2C_FIELD(arg0, s32 *, 0x164) = 1;
    }
    temp_6 = *arg2;
    if (M2C_FIELD(arg0, s32 *, 0x154) != temp_6) {
        M2C_FIELD(arg0, s32 *, 0x154) = temp_6;
        M2C_FIELD(arg0, s32 *, 0x164) = 1;
    }
}
