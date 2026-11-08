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

void func_001DB6B8(void *arg0, s32 *arg1) {
    s32 *var_5;
    s32 temp_3;
    s32 temp_3_2;
    s32 var_6;
    void *var_4;

    var_4 = arg0;
    var_5 = arg1;
    var_6 = 2;
    do {
        temp_3 = *var_5;
        if (temp_3 < M2C_FIELD(var_4, s32 *, 0)) {
            M2C_FIELD(var_4, s32 *, 0) = temp_3;
        }
        temp_3_2 = *var_5;
        if (M2C_FIELD(var_4, s32 *, 0xC) < temp_3_2) {
            M2C_FIELD(var_4, s32 *, 0xC) = temp_3_2;
        }
        var_4 += 4;
        var_6 -= 1;
        var_5 += 4;
    } while (var_6 >= 0);
}
