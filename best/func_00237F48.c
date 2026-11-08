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

M2C_UNK func_00152720(void *, s32 *, s32 *, s32);   /* extern */
void *func_00234D08(s32, s32);                      /* extern */
M2C_UNK func_00273728(void *, void **, void **);    /* extern */
M2C_UNK func_003F93CC(s32, s32, M2C_UNK);           /* extern */
extern f32 D_004264A0;

s32 func_00237F48(void *arg0, void *arg1) {
    s32 sp10;
    void *sp14;
    void *sp18;
    f32 temp_f1;
    s32 *temp_5;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17_2;
    s32 temp_18;
    s32 temp_18_2;
    s32 var_22;
    s32 var_23;
    s32 var_2;
    s32 var_4;
    s32 var_7;
    void **temp_5_2;
    void *temp_17;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_4_2;
    void *var_16;

    var_23 = 0;
    var_22 = 0;
    temp_19 = arg0 + 0x10;
    temp_17 = arg0 + 4;
    temp_16 = M2C_FIELD(temp_17, s32 *, 4);
    temp_18 = M2C_FIELD(arg0, s32 *, 4);
    func_003F93CC(temp_18, temp_16, 0);
    M2C_FIELD(temp_17, s32 *, 4) = (s32) (M2C_FIELD(temp_17, s32 *, 4) - (temp_16 - temp_18));
    temp_18_2 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_16_2 = M2C_FIELD(temp_19, s32 *, 4);
    func_003F93CC(temp_18_2, temp_16_2, 0);
    M2C_FIELD(temp_19, s32 *, 4) = (s32) (M2C_FIELD(temp_19, s32 *, 4) - (temp_16_2 - temp_18_2));
    temp_2 = M2C_FIELD(arg0, void **, 0);
    var_4 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), s32 *, 8);
    var_16 = M2C_FIELD(temp_2, void **, 0);
loop_21:
    sp18 = M2C_FIELD(arg0, void **, 0);
    if (var_16 != M2C_FIELD(arg0, void **, 0)) {
        temp_17_2 = M2C_FIELD(var_16, s32 *, 8);
        temp_2_2 = func_00234D08(var_4, temp_17_2);
        sp14 = temp_2_2;
        temp_f1 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
        var_7 = 0;
        if (D_004264A0 <= temp_f1) {
            var_7 = 1;
        } else if (temp_f1 <= -D_004264A0) {
            var_7 = -1;
        }
        sp10 = var_7;
        temp_4 = arg0 + 4;
        temp_5 = M2C_FIELD(temp_4, s32 **, 4);
        if (temp_5 != M2C_FIELD(temp_4, s32 *, 8)) {
            if (temp_5 != NULL) {
                *temp_5 = var_7;
            }
            M2C_FIELD(temp_4, s32 **, 4) = (s32 *) (M2C_FIELD(temp_4, s32 **, 4) + 4);
        } else {
            func_00152720(temp_4, temp_5, &sp10, var_7);
        }
        if (sp10 == -1) {
            var_23 += 1;
        } else {
            temp_4_2 = arg0 + 0x10;
            if (sp10 == 1) {
                var_22 += 1;
            } else {
                temp_5_2 = M2C_FIELD(temp_4_2, void ***, 4);
                if (temp_5_2 != M2C_FIELD(temp_4_2, s32 *, 8)) {
                    if (temp_5_2 != NULL) {
                        *temp_5_2 = sp14;
                    }
                    M2C_FIELD(temp_4_2, void ***, 4) = (void **) (M2C_FIELD(temp_4_2, void ***, 4) + 4);
                } else {
                    func_00273728(temp_4_2, temp_5_2, &sp14);
                }
            }
        }
        var_4 = temp_17_2;
        var_16 = M2C_FIELD(var_16, void **, 0);
        goto loop_21;
    }
    var_2 = 0;
    if (var_22 != 0) {
        var_2 = 1;
        if (var_23 == 0) {
            var_2 = 0;
        }
    }
    return var_2;
}
