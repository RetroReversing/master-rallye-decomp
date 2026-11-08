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

void *func_003FAFE0(s8 *arg0, s8 *arg1, s8 **arg2) {
    s8 *var_4;
    s8 *var_7;
    s8 *var_7_2;
    s8 temp_8;
    s8 var_3;
    s8 var_3_2;
    s8 var_8;
    void *temp_2;

    var_4 = arg0;
    if (var_4 == NULL) {
        var_4 = *arg2;
        if (var_4 == NULL) {
            return NULL;
        }
    }
loop_3:
    temp_8 = *var_4;
    var_3 = *arg1;
    var_4 += 1;
    var_7 = arg1 + 1;
    if (var_3 != 0) {
loop_4:
        if (temp_8 == var_3) {
            goto loop_3;
        }
        var_3 = *var_7;
        var_7 += 1;
        if (var_3 != 0) {
            goto loop_4;
        }
    }
    temp_2 = var_4 - 1;
    if (temp_8 == 0) {
        *arg2 = NULL;
        return NULL;
    }
    var_8 = *var_4;
loop_11:
    var_7_2 = arg1;
    var_4 += 1;
    var_3_2 = *var_7_2;
loop_12:
    var_7_2 += 1;
    if (var_3_2 != var_8) {
        if (var_3_2 != 0) {
            var_3_2 = *var_7_2;
        } else {
            var_8 = M2C_FIELD(var_4, s8 *, 0);
            goto loop_11;
        }
        goto loop_12;
    }
    if (var_3_2 != 0) {
        M2C_FIELD(var_4, s8 *, -1) = 0;
    } else {
        var_4 = NULL;
    }
    *arg2 = var_4;
    return temp_2;
}
