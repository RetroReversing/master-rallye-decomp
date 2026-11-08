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

void func_003E3FA0(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 temp_6;
    s32 var_2;
    s32 var_2_10;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    s32 var_2_5;
    s32 var_2_6;
    s32 var_2_7;
    s32 var_2_8;
    s32 var_2_9;

    if (M2C_FIELD(arg0, s32 *, 0x174) == 3) {
        if (M2C_FIELD(arg0, s32 *, 0x178) == 0) {
            var_2 = arg3 * 3;
            if (arg3 > 0) {
                var_2 += 1;
            }
            M2C_FIELD(arg1, s32 *, 0) = (s32) ((var_2 >> 1) + M2C_FIELD(arg2, s32 *, 0));
            var_2_2 = arg4 * 3;
            if (arg4 > 0) {
                var_2_2 += 1;
            }
            M2C_FIELD(arg1, s32 *, 4) = (s32) (((var_2_2 >> 1) + M2C_FIELD(arg2, s32 *, 4)) - 1);
            if (arg3 > 0) {
                var_2_3 = (s32) (arg3 + 1) >> 1;
            } else {
                var_2_3 = arg3 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 8) = (s32) (var_2_3 + M2C_FIELD(arg2, s32 *, 0));
            if (arg4 > 0) {
                var_2_4 = arg4 + 1;
                goto block_14;
            }
            var_2_5 = arg4 >> 1;
        } else {
            if (arg3 > 0) {
                var_2_6 = (s32) (arg3 + 1) >> 1;
            } else {
                var_2_6 = arg3 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 0) = (s32) (var_2_6 + M2C_FIELD(arg2, s32 *, 0));
            if (arg4 > 0) {
                var_2_7 = (s32) (arg4 + 1) >> 1;
            } else {
                var_2_7 = arg4 >> 1;
            }
            M2C_FIELD(arg1, s32 *, 4) = (s32) ((var_2_7 + M2C_FIELD(arg2, s32 *, 4)) - 1);
            var_2_8 = arg3 * 3;
            if (arg3 > 0) {
                var_2_8 += 1;
            }
            M2C_FIELD(arg1, s32 *, 8) = (s32) ((var_2_8 >> 1) + M2C_FIELD(arg2, s32 *, 0));
            var_2_4 = arg4 * 3;
            if (arg4 > 0) {
                var_2_4 += 1;
            }
block_14:
            var_2_5 = var_2_4 >> 1;
        }
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (var_2_5 + M2C_FIELD(arg2, s32 *, 4) + 1);
        return;
    }
    if (arg3 > 0) {
        var_2_9 = (s32) (arg3 + 1) >> 1;
    } else {
        var_2_9 = arg3 >> 1;
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) (var_2_9 + M2C_FIELD(arg2, s32 *, 0));
    if (arg4 > 0) {
        var_2_10 = (s32) (arg4 + 1) >> 1;
    } else {
        var_2_10 = arg4 >> 1;
    }
    temp_6 = var_2_10 + M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 4) = temp_6;
    if (M2C_FIELD(arg0, s32 *, 0x174) == 1) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_6 - 1);
        return;
    }
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_6 + 1);
}
