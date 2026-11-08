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

s32 func_0024C4B8(s32, void *, void *);             /* extern */
s32 func_0024C7B0(void *);                          /* extern */

s32 func_00258310(void *arg1, void **arg2) {
    void *sp0;
    void **sp4;
    s32 *temp_2_4;
    s32 temp_18;
    s32 var_16_2;
    s32 var_17;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_16;
    void *var_21;
    void *var_22;
    void *var_23;

    sp4 = arg2;
    sp0 = arg1;
    temp_2 = *arg2;
    var_21 = M2C_FIELD(temp_2, void **, 0);
    var_16 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), void **, 8);
    if (var_21 != temp_2) {
loop_1:
        temp_19 = M2C_FIELD(var_21, void **, 8);
        if ((func_0024C7B0(var_16) != 0) && (func_0024C7B0(temp_19) != 0)) {
            temp_2_2 = M2C_FIELD(var_16, void **, 0);
            var_23 = temp_2_2;
            if (M2C_FIELD(temp_2_2, s32 *, 4) != 0) {
                var_23 = M2C_FIELD(var_16, void **, 4);
            }
            temp_2_3 = M2C_FIELD(temp_19, void **, 0);
            var_22 = temp_2_3;
            if (M2C_FIELD(temp_2_3, s32 *, 4) != 0) {
                var_22 = M2C_FIELD(temp_19, void **, 4);
            }
            var_17 = 0;
            temp_18 = (s32) (M2C_FIELD((sp0 + 0xC), s32 *, 4) - M2C_FIELD(sp0, s32 *, 0xC)) >> 2;
            var_16_2 = 0;
            if (temp_18 > 0) {
                do {
                    temp_2_4 = M2C_FIELD(sp0, s32 *, 0xC) + (var_17 * 4);
                    var_17 += 1;
                    var_16_2 = (func_0024C4B8(*temp_2_4, var_23, var_22) != 0) ? 1 : var_16_2;
                } while (var_17 < temp_18);
            }
            if (var_16_2 == 0) {
                return 0;
            }
            goto block_12;
        }
block_12:
        var_21 = M2C_FIELD(var_21, void **, 0);
        var_16 = temp_19;
        if (var_21 == *sp4) {
            goto block_13;
        }
        goto loop_1;
    }
block_13:
    return 1;
}
