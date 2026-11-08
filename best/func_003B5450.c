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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_00258610(M2C_UNK *, M2C_UNK);          /* extern */
s32 *func_00258688(s32, s32, s32);                  /* extern */
M2C_UNK func_00258F20(s32 *, s32, M2C_UNK *);       /* extern */
M2C_UNK func_00258F50(s32 *, s32, M2C_UNK *);       /* extern */
M2C_UNK func_003B5A70(M2C_UNK *, s32, void *);      /* extern */
M2C_UNK func_003B5B20(M2C_UNK *, s32, void *);      /* extern */

s32 **func_003B5450(s32 **arg0, s32 arg1, void *arg2) {
    s32 *sp0;
    M2C_UNK sp10;
    s32 sp20;
    s32 sp24;
    s32 *temp_2;
    s32 temp_2_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_16;
    s32 var_16_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg2, void **, 8);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, s32 *), 0x94)(arg2 + M2C_FIELD(temp_3, s16 *, 0x90), &sp20);
    temp_3_2 = M2C_FIELD(arg2, void **, 8);
    M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s32 *), 0x94)(arg2 + M2C_FIELD(temp_3_2, s16 *, 0x90), &sp24);
    temp_2 = func_00258688(D_002AD408(0x1C), sp20, sp24);
    sp0 = temp_2;
    if (temp_2 != NULL) {
        *temp_2 += 1;
    }
    var_16 = 0;
    if (sp20 > 0) {
        do {
            func_003B5A70(&sp10, arg1, arg2);
            temp_5 = var_16;
            var_16 += 1;
            func_00258F20(sp0, temp_5, &sp10);
        } while (var_16 < sp20);
    }
    var_16_2 = 0;
    if (sp24 > 0) {
        do {
            func_003B5B20(&sp10, arg1, arg2);
            temp_5_2 = var_16_2;
            var_16_2 += 1;
            func_00258F50(sp0, temp_5_2, &sp10);
            func_00258610(&sp10, 2);
        } while (var_16_2 < sp24);
    }
    *arg0 = sp0;
    if (sp0 != NULL) {
        M2C_FIELD(sp0, s32 *, 0) += 1;
    }
    if (sp0 != NULL) {
        temp_2_2 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_2_3 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_3, s16 *, 8), 3, sp0);
        }
    }
    return arg0;
}
