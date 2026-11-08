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

M2C_UNK func_002B2028(void *);                      /* extern */

void func_0024F510(void *arg0, void **arg1) {
    void *sp0;
    void **sp10;
    void *sp20;
    void *sp30;
    void *sp40;
    s32 temp_2_9;
    void **temp_2;
    void **temp_2_8;
    void **temp_3_2;
    void **temp_3_3;
    void **temp_6;
    void *temp_16;
    void *temp_2_10;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_3;
    void *temp_6_2;

    temp_2 = M2C_FIELD(arg0, void ***, 8);
    temp_3 = *temp_2;
    sp10 = temp_2;
    sp0 = temp_3;
    if (temp_3 != temp_2) {
loop_2:
        temp_3_2 = M2C_FIELD(sp0, void ***, 8);
        sp10 = temp_3_2;
        if (temp_3_2 != NULL) {
            *temp_3_2 += 1;
        }
        if (sp10 == *arg1) {
            sp30 = sp0;
            temp_16 = M2C_FIELD(sp0, void **, 0);
            temp_3_3 = M2C_FIELD(sp0, void ***, 4);
            *temp_3_3 = temp_16;
            M2C_FIELD(temp_16, void ***, 4) = temp_3_3;
            temp_6 = M2C_FIELD(sp0, void ***, 8);
            if (temp_6 != NULL) {
                temp_2_2 = M2C_FIELD(temp_6, void **, 0) - 1;
                M2C_FIELD(temp_6, void **, 0) = temp_2_2;
                if (temp_2_2 == NULL) {
                    temp_2_3 = M2C_FIELD(temp_6, void **, 4);
                    M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
                }
            }
            func_002B2028(sp30);
            sp0 = temp_16;
            sp20 = temp_16;
            if (sp10 != NULL) {
                temp_2_4 = M2C_FIELD(sp10, void **, 0) - 1;
                M2C_FIELD(sp10, void **, 0) = temp_2_4;
                if (temp_2_4 == NULL) {
                    temp_2_5 = M2C_FIELD(sp10, void **, 4);
                    M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(sp10 + M2C_FIELD(temp_2_5, s16 *, 8), 3, sp10);
                }
            }
        } else {
            sp40 = sp0;
            sp20 = sp0;
            sp0 = M2C_FIELD(sp0, void **, 0);
            if (sp10 != NULL) {
                temp_2_6 = M2C_FIELD(sp10, void **, 0) - 1;
                M2C_FIELD(sp10, void **, 0) = temp_2_6;
                if (temp_2_6 == NULL) {
                    temp_2_7 = M2C_FIELD(sp10, void **, 4);
                    M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, M2C_UNK, void **), 0xC)(sp10 + M2C_FIELD(temp_2_7, s16 *, 8), 3, sp10);
                }
            }
            temp_2_8 = M2C_FIELD(arg0, void ***, 8);
            sp10 = temp_2_8;
            if (sp0 != temp_2_8) {
                goto loop_2;
            }
        }
    }
    temp_6_2 = *arg1;
    if (temp_6_2 != NULL) {
        temp_2_9 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
        M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_9;
        if (temp_2_9 == 0) {
            temp_2_10 = M2C_FIELD(temp_6_2, void **, 4);
            M2C_FIELD(temp_2_10, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_10, s16 *, 8), 3, temp_6_2);
        }
    }
}
