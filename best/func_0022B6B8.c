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

M2C_UNK func_001C5A70(void *, void *, void *, void *); /* extern */

void func_0022B6B8(void *arg0, void *arg1, void *arg2) {
    s32 temp_16;
    s32 temp_19;
    s32 temp_3_2;
    s32 var_20;
    s32 var_21;
    void *temp_2;
    void *temp_3;
    void *temp_3_3;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_6_4;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *var_16;
    void *var_5;

    if (arg1 != NULL) {
        temp_3 = M2C_FIELD(arg1, void **, 0x10);
        temp_2 = M2C_FIELD(temp_3, void *(**)(void *), 0x1C)(arg1 + M2C_FIELD(temp_3, s16 *, 0x18));
        if (temp_2 != NULL) {
            temp_3_2 = M2C_FIELD(temp_2, s32 *, 0x20);
            var_21 = M2C_FIELD(temp_2, s32 *, 0x1C);
            if (temp_3_2 > 0) {
                var_20 = temp_3_2;
                do {
                    temp_6 = M2C_FIELD(arg0, void **, 8);
                    temp_7 = M2C_FIELD(arg2, void **, 4);
                    temp_3_3 = *M2C_FIELD(temp_6, s32 **, 0x34) + (var_21 * 0x34);
                    temp_19 = M2C_FIELD(temp_3_3, s32 *, 0x24);
                    temp_16 = M2C_FIELD(temp_3_3, s32 *, 0x20);
                    temp_6_2 = *M2C_FIELD(temp_6, s32 **, 0x38) + (M2C_FIELD(temp_3_3, s32 *, 0x1C) * 0xC);
                    if (temp_7 != M2C_FIELD(arg2, s32 *, 8)) {
                        if (temp_7 != NULL) {
                            M2C_FIELD(temp_7, f32 *, 0) = (f32) M2C_FIELD(temp_6_2, f32 *, 0);
                            M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6_2, f32 *, 4);
                            M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6_2, f32 *, 8);
                        }
                        M2C_FIELD(arg2, void **, 4) = (void *) (M2C_FIELD(arg2, void **, 4) + 0xC);
                    } else {
                        func_001C5A70(arg2, temp_7, temp_6_2, temp_7);
                    }
                    temp_7_2 = M2C_FIELD(arg2, void **, 4);
                    temp_6_3 = *M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 **, 0x38) + (temp_16 * 0xC);
                    if (temp_7_2 != M2C_FIELD(arg2, s32 *, 8)) {
                        if (temp_7_2 != NULL) {
                            M2C_FIELD(temp_7_2, f32 *, 0) = (f32) M2C_FIELD(temp_6_3, f32 *, 0);
                            M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(temp_6_3, f32 *, 4);
                            M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(temp_6_3, f32 *, 8);
                        }
                        M2C_FIELD(arg2, void **, 4) = (void *) (M2C_FIELD(arg2, void **, 4) + 0xC);
                    } else {
                        func_001C5A70(arg2, temp_7_2, temp_6_3, temp_7_2);
                    }
                    temp_7_3 = M2C_FIELD(arg2, void **, 4);
                    temp_6_4 = *M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 **, 0x38) + (temp_19 * 0xC);
                    if (temp_7_3 != M2C_FIELD(arg2, s32 *, 8)) {
                        if (temp_7_3 != NULL) {
                            M2C_FIELD(temp_7_3, f32 *, 0) = (f32) M2C_FIELD(temp_6_4, f32 *, 0);
                            M2C_FIELD(temp_7_3, f32 *, 4) = (f32) M2C_FIELD(temp_6_4, f32 *, 4);
                            M2C_FIELD(temp_7_3, f32 *, 8) = (f32) M2C_FIELD(temp_6_4, f32 *, 8);
                        }
                        M2C_FIELD(arg2, void **, 4) = (void *) (M2C_FIELD(arg2, void **, 4) + 0xC);
                    } else {
                        func_001C5A70(arg2, temp_7_3, temp_6_4, temp_7_3);
                    }
                    var_20 -= 1;
                    var_21 += 1;
                } while (var_20 != 0);
            }
        }
        var_16 = M2C_FIELD(arg1, void **, 0);
        if (var_16 != NULL) {
            var_5 = var_16;
            do {
                func_0022B6B8(arg0, var_5, arg2);
                var_16 = M2C_FIELD(var_16, void **, 4);
                var_5 = var_16;
            } while (var_16 != NULL);
        }
    }
}
