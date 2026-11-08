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

void func_001D1810(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_3;
    s32 temp_4;
    void *temp_5;

    temp_3 = *arg1 + 1;
    *arg1 = temp_3;
    temp_5 = arg0 + (*arg2 * 4);
    temp_4 = M2C_FIELD(temp_5, s32 *, 0x44);
    if (temp_3 >= (temp_4 + M2C_FIELD(temp_5, s32 *, 0x4C))) {
        *arg1 = temp_4;
    }
}
