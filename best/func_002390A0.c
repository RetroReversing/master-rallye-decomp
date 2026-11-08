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

s32 func_00234D08(void *, void *);                  /* extern */
s32 func_00235EB0(void *);                          /* extern */
M2C_UNK func_00238FC8();                            /* extern */
M2C_UNK func_002738E8(void *, void **, void **);    /* extern */

void func_002390A0(void **arg0, void *arg1) {
    void *sp0;
    void *sp10;
    void *sp20;
    void *sp30;
    void *sp40;
    void *sp50;
    void *sp54;
    s32 temp_2_3;
    s32 temp_3_3;
    s32 var_19;
    void **temp_5;
    void **temp_5_2;
    void **temp_5_3;
    void **temp_5_4;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *var_2;
    void *var_5;

    var_19 = 0;
    func_00238FC8();
    temp_3 = *arg0;
    sp0 = temp_3;
    temp_2 = M2C_FIELD(temp_3, void **, 4);
    sp0 = temp_2;
    var_5 = M2C_FIELD(temp_2, void **, 8);
    temp_4 = M2C_FIELD(temp_3, void **, 0);
    sp54 = NULL;
    sp50 = M2C_FIELD(var_5, void **, 0x24);
    sp0 = temp_4;
    sp10 = temp_3;
    if (temp_4 != temp_3) {
        do {
            temp_16 = M2C_FIELD(sp0, void **, 8);
            if (M2C_FIELD(temp_16, s32 *, 0) != func_00234D08(var_5, temp_16)) {
                var_2 = M2C_FIELD(temp_16, void **, 0x1C);
            } else {
                var_2 = M2C_FIELD(temp_16, void **, 0x18);
            }
            sp54 = var_2;
            if ((sp50 != NULL) && (var_2 != NULL)) {
                temp_3_3 = M2C_FIELD(sp50, s32 *, 0x10);
                if (temp_3_3 >= 0) {
                    temp_2_3 = M2C_FIELD(var_2, s32 *, 0x10);
                    if ((temp_2_3 >= 0) && (temp_3_3 != temp_2_3)) {
                        temp_5 = M2C_FIELD(arg1, void ***, 4);
                        var_19 = 1;
                        if (temp_5 != M2C_FIELD(arg1, s32 *, 8)) {
                            if (temp_5 != NULL) {
                                *temp_5 = sp50;
                            }
                            M2C_FIELD(arg1, void ***, 4) = (void **) (M2C_FIELD(arg1, void ***, 4) + 4);
                        } else {
                            func_002738E8(arg1, temp_5, &sp50);
                        }
                        temp_5_2 = M2C_FIELD(arg1, void ***, 4);
                        if (temp_5_2 != M2C_FIELD(arg1, s32 *, 8)) {
                            if (temp_5_2 != NULL) {
                                *temp_5_2 = sp54;
                            }
                            M2C_FIELD(arg1, void ***, 4) = (void **) (M2C_FIELD(arg1, void ***, 4) + 4);
                        } else {
                            func_002738E8(arg1, temp_5_2, &sp54);
                        }
                    }
                }
            }
            var_5 = temp_16;
            sp20 = sp0;
            sp50 = sp54;
            temp_3_2 = *arg0;
            temp_2_2 = M2C_FIELD(sp0, void **, 0);
            sp10 = temp_3_2;
            sp0 = temp_2_2;
        } while (temp_2_2 != temp_3_2);
    }
    if (var_19 == 0) {
        temp_2_4 = *arg0;
        temp_3_4 = M2C_FIELD(temp_2_4, void **, 0);
        sp30 = temp_2_4;
        sp10 = temp_3_4;
        if (temp_3_4 != temp_2_4) {
            do {
                temp_16_2 = M2C_FIELD(sp10, void **, 8);
                if (func_00235EB0(temp_16_2) != 0) {
                    temp_4_3 = M2C_FIELD(temp_16_2, void **, 0x18);
                    temp_5_3 = M2C_FIELD(arg1, void ***, 4);
                    sp50 = temp_4_3;
                    sp54 = M2C_FIELD(temp_16_2, void **, 0x1C);
                    if (temp_5_3 != M2C_FIELD(arg1, s32 *, 8)) {
                        if (temp_5_3 != NULL) {
                            *temp_5_3 = temp_4_3;
                        }
                        M2C_FIELD(arg1, void ***, 4) = (void **) (M2C_FIELD(arg1, void ***, 4) + 4);
                    } else {
                        func_002738E8(arg1, temp_5_3, &sp50);
                    }
                    temp_5_4 = M2C_FIELD(arg1, void ***, 4);
                    if (temp_5_4 != M2C_FIELD(arg1, s32 *, 8)) {
                        if (temp_5_4 != NULL) {
                            *temp_5_4 = sp54;
                        }
                        M2C_FIELD(arg1, void ***, 4) = (void **) (M2C_FIELD(arg1, void ***, 4) + 4);
                    } else {
                        func_002738E8(arg1, temp_5_4, &sp54);
                    }
                }
                temp_4_2 = *arg0;
                sp40 = sp10;
                temp_3_5 = M2C_FIELD(sp10, void **, 0);
                sp30 = temp_4_2;
                sp10 = temp_3_5;
            } while (temp_3_5 != temp_4_2);
        }
    }
}
