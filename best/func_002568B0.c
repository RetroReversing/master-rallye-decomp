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

M2C_UNK func_0024C548(s32, void *);                 /* extern */
s32 func_0024C788(void *);                          /* extern */
s32 func_0024C7B0(void *);                          /* extern */

void func_002568B0(M2C_UNK ***arg1) {
    M2C_UNK **temp_2;
    M2C_UNK *temp_20;
    M2C_UNK *var_19;
    s32 temp_16;
    s32 temp_17;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *var_18;
    void *var_2;

    temp_2 = *arg1;
    var_19 = *temp_2;
    if (var_19 != temp_2) {
        var_18 = M2C_FIELD(var_19, void **, 8);
loop_2:
        temp_20 = *var_19;
        var_19 = temp_20;
        if (func_0024C7B0(var_18) == 0) {
            temp_16 = M2C_FIELD(var_18, s32 *, 0x20);
            temp_17 = M2C_FIELD(var_18, s32 *, 0x24);
            func_0024C548(temp_16, M2C_FIELD(M2C_FIELD(var_18, void **, 0x18), void **, 0x30));
            func_0024C548(temp_16, M2C_FIELD(M2C_FIELD(var_18, void **, 0x1C), void **, 0x30));
            func_0024C548(temp_17, M2C_FIELD(M2C_FIELD(var_18, void **, 0x18), void **, 0x34));
            func_0024C548(temp_17, M2C_FIELD(M2C_FIELD(var_18, void **, 0x1C), void **, 0x34));
        } else {
            temp_2_2 = M2C_FIELD(var_18, void **, 0x18);
            if (func_0024C788(var_18) == -1) {
                temp_2_3 = M2C_FIELD(temp_2_2, void **, 0x30);
                if (temp_2_3 != NULL) {
                    M2C_FIELD(var_18, void **, 0x18) = temp_2_3;
                }
                var_2 = M2C_FIELD(M2C_FIELD(var_18, void **, 0x1C), void **, 0x30);
            } else {
                temp_2_4 = M2C_FIELD(temp_2_2, void **, 0x34);
                if (temp_2_4 != NULL) {
                    M2C_FIELD(var_18, void **, 0x18) = temp_2_4;
                }
                var_2 = M2C_FIELD(M2C_FIELD(var_18, void **, 0x1C), void **, 0x34);
            }
            if (var_2 != NULL) {
                M2C_FIELD(var_18, void **, 0x1C) = var_2;
            }
        }
        if (temp_20 != *arg1) {
            var_18 = M2C_FIELD(var_19, void **, 8);
            goto loop_2;
        }
    }
}
