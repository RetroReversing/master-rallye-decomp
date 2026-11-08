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
void **func_00234260(s32);                          /* extern */
void **func_00236008(s32);                          /* extern */
void **func_00237350(s32);                          /* extern */
void **func_00237840(s32);                          /* extern */

void func_002373F8(void *arg0, void *arg1) {
    void **temp_6;
    void **temp_6_2;
    void **var_2;
    void **var_2_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    temp_2 = M2C_FIELD(arg1, void **, 0);
    if (temp_2 != NULL) {
        temp_3 = arg0 + 4;
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 0);
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
        M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
        M2C_FIELD(temp_3, s32 *, 0x10) = (s32) M2C_FIELD(temp_2, s32 *, 0x10);
    }
    temp_3_2 = M2C_FIELD(arg1, void **, 8);
    if (temp_3_2 != NULL) {
        if (M2C_FIELD(temp_3_2, s32 *, 4) == 0) {
            if (M2C_FIELD(temp_3_2, s32 *, 0) != 0) {
                var_2 = func_00237350(D_002AD408(0x20));
            } else {
                var_2 = func_00236008(D_002AD408(4));
            }
        } else {
            var_2 = func_00234260(D_002AD408(8));
        }
        M2C_FIELD(arg0, void ***, 0x18) = var_2;
        temp_6 = M2C_FIELD(arg0, void ***, 0x18);
        temp_2_2 = *temp_6;
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, void *, void **), 0xAC)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 0xA8), M2C_FIELD(arg1, void **, 8), temp_6);
    }
    temp_3_3 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_3_3 != NULL) {
        if (M2C_FIELD(temp_3_3, s32 *, 4) == 0) {
            if (M2C_FIELD(temp_3_3, s32 *, 0) != 0) {
                var_2_2 = func_00237350(D_002AD408(0x20));
            } else {
                var_2_2 = func_00237840(D_002AD408(4));
            }
        } else {
            var_2_2 = func_00234260(D_002AD408(8));
        }
        M2C_FIELD(arg0, void ***, 0x1C) = var_2_2;
        temp_6_2 = M2C_FIELD(arg0, void ***, 0x1C);
        temp_2_3 = *temp_6_2;
        M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, void *, void **), 0xAC)(temp_6_2 + M2C_FIELD(temp_2_3, s16 *, 0xA8), M2C_FIELD(arg1, void **, 0xC), temp_6_2);
    }
}
