/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

s8 *func_002B1FC0(s32);                             /* extern */
M2C_UNK func_002B2028(s8 *);                        /* extern */
s32 func_002BA330(s8 *, s32, s32, s64 *);           /* extern */
extern M2C_UNK D_004262B0;
extern M2C_UNK D_00475EF0;
extern M2C_UNK D_00476070;
extern M2C_UNK D_00476078;
extern s8 D_00491200;

void func_001D67C8(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, f32 fparg0, f32 fparg2, f32 fparg4, f32 fparg6) {
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    s64 spE8;
    s64 spF0;
    s64 spF8;
    s64 sp100;
    s64 sp108;
    s64 sp110;
    s64 sp118;
    M2C_UNK *var_5;
    s32 temp_16;
    s32 temp_23;
    s32 var_16;
    s32 var_19;
    s8 *temp_21;
    s8 *var_17;
    s8 *var_17_2;
    s8 *var_20;
    void **temp_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_6;

    spE8 = arg1;
    temp_23 = M2C_FIELD(&D_004262B0, s32 *, 0xC);
    temp_18 = M2C_FIELD(&D_004262B0, void ***, 4);
    spF0 = arg2;
    spF8 = arg3;
    sp100 = arg4;
    sp108 = arg5;
    sp110 = arg6;
    sp118 = arg7;
    spD8 = fparg0;
    spDC = fparg2;
    spE0 = fparg4;
    spE4 = fparg6;
    if (temp_18 != NULL) {
        var_17 = &D_00491200;
        var_19 = 0x1000;
loop_3:
        var_20 = &D_00491200;
        temp_16 = func_002BA330(var_17, var_19 - 1, arg0, &spE8);
        if (var_17 != &D_00491200) {
            func_002B2028(var_17);
        }
        if (temp_16 >= 0) {
            if (D_00491200 != 0) {
                var_17_2 = &D_00491200;
                do {
                    temp_21 = var_17_2 + 1;
                    if (M2C_FIELD(&D_004262B0, s32 *, 8) != 0) {
                        if (temp_23 > 0) {
                            var_16 = temp_23;
loop_11:
                            var_16 -= 1;
                            M2C_FIELD(*temp_18, M2C_UNK (**)(void *, M2C_UNK *), 0x14)(temp_18 + M2C_FIELD(*temp_18, s16 *, 0x10), &D_00476070);
                            if (var_16 != 0) {
                                goto loop_11;
                            }
                        }
                        M2C_FIELD(&D_004262B0, s32 *, 8) = 0;
                    }
                    if (M2C_FIELD(var_17_2, s8 *, 0) == 0xA) {
                        M2C_FIELD(var_17_2, s8 *, 0) = 0;
                        temp_2 = *temp_18;
                        M2C_FIELD(temp_2, M2C_UNK (**)(void *, s8 *), 0x14)(temp_18 + M2C_FIELD(temp_2, s16 *, 0x10), var_20);
                        temp_4 = *temp_18;
                        temp_6 = temp_4 + 0x10;
                        if (M2C_FIELD(&D_004262B0, s32 *, 0) != 0) {
                            var_5 = &D_00476078;
                        } else {
                            var_5 = &D_00475EF0;
                        }
                        var_20 = temp_21;
                        M2C_FIELD(temp_6, M2C_UNK (**)(void *, M2C_UNK *, void *), 4)(temp_18 + M2C_FIELD(temp_4, s16 *, 0x10), var_5, temp_6);
                        M2C_FIELD(&D_004262B0, s32 *, 8) = 1;
                    }
                    var_17_2 = temp_21;
                } while (M2C_FIELD(var_17_2, s8 *, 1) != 0);
                if (*var_20 != 0) {
                    temp_2_2 = *temp_18;
                    M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, s8 *), 0x14)(temp_18 + M2C_FIELD(temp_2_2, s16 *, 0x10), var_20);
                }
            }
        } else {
            var_19 *= 2;
            var_17 = func_002B1FC0(var_19);
            if (var_17 != NULL) {
                goto loop_3;
            }
        }
    }
}
