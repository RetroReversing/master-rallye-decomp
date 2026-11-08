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

M2C_UNK func_00152720(void *, s32 *, s32 *);        /* extern */
void *func_001D6BB0();                              /* extern */

void *func_001D74B8(void *arg0, s32 *arg1) {
    s32 sp20;
    s32 sp24;
    s32 *temp_5;
    s32 *temp_5_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_18;
    void **temp_6;
    void **temp_7;
    void *temp_17;
    void *temp_3;
    void *temp_3_2;

    var_18 = 0;
    temp_17 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_17, s32 **, 4) = NULL;
    M2C_FIELD(temp_17, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) *arg1;
    temp_6 = M2C_FIELD(func_001D6BB0(), void ***, 4);
    temp_3 = *temp_6;
    temp_2 = M2C_FIELD(temp_3, s32 (**)(void *, s32 *, void **), 0x14)(temp_6 + M2C_FIELD(temp_3, s16 *, 0x10), arg1, temp_6);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_2;
    if (temp_2 > 0) {
        do {
            temp_7 = M2C_FIELD(func_001D6BB0(), void ***, 4);
            temp_3_2 = *temp_7;
            temp_2_2 = M2C_FIELD(temp_3_2, s32 (**)(void *, s32 *, s32, void **), 0x1C)(temp_7 + M2C_FIELD(temp_3_2, s16 *, 0x18), arg1, var_18, temp_7);
            temp_5 = M2C_FIELD(temp_17, s32 **, 4);
            sp20 = temp_2_2;
            if (temp_5 != M2C_FIELD(temp_17, s32 *, 8)) {
                if (temp_5 != NULL) {
                    *temp_5 = temp_2_2;
                }
                M2C_FIELD(temp_17, s32 **, 4) = (s32 *) (M2C_FIELD(temp_17, s32 **, 4) + 4);
            } else {
                func_00152720(temp_17, temp_5, &sp20);
            }
            temp_5_2 = M2C_FIELD(arg0, s32 **, 4);
            sp24 = 1;
            if (temp_5_2 != M2C_FIELD(arg0, s32 *, 8)) {
                if (temp_5_2 != NULL) {
                    *temp_5_2 = 1;
                }
                M2C_FIELD(arg0, s32 **, 4) = (s32 *) (M2C_FIELD(arg0, s32 **, 4) + 4);
            } else {
                func_00152720(arg0, temp_5_2, &sp24);
            }
            var_18 += 1;
        } while (var_18 < M2C_FIELD(arg0, s32 *, 0x18));
    }
    return arg0;
}
