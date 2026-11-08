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

M2C_UNK func_001DAD18(s32, void *);                 /* extern */
M2C_UNK func_001FBD18(s32);                         /* extern */
M2C_UNK func_0021E3C8(void *, M2C_UNK);             /* extern */
M2C_UNK func_002200D0(s32, void *);                 /* extern */
M2C_UNK func_00220200(s32, s32);                    /* extern */

void func_0021F088(void *arg0) {
    s32 temp_2_2;
    s32 temp_4;
    s32 var_18;
    s32 var_4;
    s32 var_5;
    u32 temp_3_3;
    void **temp_6;
    void **temp_6_2;
    void **temp_6_3;
    void **var_17_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_3;
    void *temp_3_2;
    void *temp_6_4;
    void *var_17;
    void *var_19;

    temp_2 = arg0 + 4;
    temp_3 = M2C_FIELD(temp_2, void **, 4);
    if (temp_3 != temp_2) {
        var_17 = temp_3;
        do {
            temp_16 = M2C_FIELD(var_17, void **, 0);
            temp_2_2 = M2C_FIELD(temp_16, s32 *, 0x70);
            var_17 = M2C_FIELD(var_17, void **, 4);
            if (temp_2_2 != 0) {
                M2C_FIELD(temp_16, s32 *, 0x70) = (s32) (temp_2_2 - 1);
            } else if (temp_16 != NULL) {
                func_0021E3C8(temp_16, 3);
            }
        } while (var_17 != temp_2);
    }
    temp_3_2 = arg0 + 0x10;
    if (M2C_FIELD(temp_3_2, void ***, 4) != temp_3_2) {
        do {
            temp_16_2 = *M2C_FIELD(temp_3_2, void ***, 4);
            func_001DAD18(M2C_FIELD(((M2C_FIELD(temp_16_2, s8 *, 0x6C) * 0xC) + arg0), s32 *, 0x2C), temp_16_2 + 0x60);
            func_002200D0(M2C_FIELD(arg0, s32 *, 0x20), temp_16_2);
        } while (M2C_FIELD(temp_3_2, void ***, 4) != temp_3_2);
    }
    var_4 = 6;
    M2C_FIELD(arg0, s32 *, 0x78) = 1;
    var_5 = 6 * 0xC;
    do {
        var_19 = M2C_FIELD((var_5 + arg0), void **, 0x28);
        if (var_19 != (arg0 + ((var_4 * 0xC) + 0x24))) {
            do {
                temp_16_3 = M2C_FIELD(var_19, void **, 0);
                temp_3_3 = M2C_FIELD(temp_16_3, u32 *, 0);
                if (!((temp_3_3 >> 1) & 1) && (((M2C_FIELD(arg0, s32 *, 0) == 0) | !(temp_3_3 & 1)) != 0)) {
                    temp_6 = M2C_FIELD(temp_16_3, void ***, 0x14);
                    if (temp_6 != NULL) {
                        temp_2_3 = *temp_6;
                        M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, void *, void **), 0x14)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 0x10), temp_16_3, temp_6);
                    }
                    temp_2_4 = M2C_FIELD(temp_16_3, void **, 0x50);
                    if (temp_2_4 != NULL) {
                        temp_6_2 = M2C_FIELD(temp_2_4, void ***, 0x78);
                        if (temp_6_2 != NULL) {
                            temp_2_5 = *temp_6_2;
                            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, void *, void **), 0x14)(temp_6_2 + M2C_FIELD(temp_2_5, s16 *, 0x10), temp_16_3, temp_6_2);
                        }
                    }
                    temp_2_6 = M2C_FIELD(temp_16_3, void **, 0x4C);
                    if (temp_2_6 != NULL) {
                        temp_6_3 = M2C_FIELD(temp_2_6, void ***, 0x80);
                        if (temp_6_3 != NULL) {
                            temp_2_7 = *temp_6_3;
                            M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, void *, void **), 0x14)(temp_6_3 + M2C_FIELD(temp_2_7, s16 *, 0x10), temp_16_3, temp_6_3);
                        }
                    }
                    temp_4 = M2C_FIELD(M2C_FIELD(temp_16_3, void **, 0x50), s32 *, 0);
                    var_17_2 = temp_16_3 + 4;
                    if (temp_4 != 0) {
                        func_001FBD18(temp_4);
                    }
                    var_18 = 3;
                    do {
                        temp_6_4 = *var_17_2;
                        if (temp_6_4 != NULL) {
                            temp_2_8 = M2C_FIELD(temp_6_4, void **, 8);
                            M2C_FIELD(temp_2_8, M2C_UNK (**)(void *, void *, void *), 0x2C)(temp_6_4 + M2C_FIELD(temp_2_8, s16 *, 0x28), temp_16_3, temp_6_4);
                        }
                        var_18 -= 1;
                        var_17_2 += 4;
                    } while (var_18 >= 0);
                }
                var_19 = M2C_FIELD(var_19, void **, 4);
            } while (var_19 != (arg0 + ((var_4 * 0xC) + 0x24)));
        }
        var_4 -= 1;
        var_5 = var_4 * 0xC;
    } while (var_4 >= 0);
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    func_00220200(M2C_FIELD(arg0, s32 *, 0x20), var_5);
}
