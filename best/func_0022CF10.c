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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 *func_0024F1A0(s32);                            /* extern */
M2C_UNK func_0024F440(s32 *, s32 **);               /* extern */
s32 *func_00258688(s32, s32, M2C_UNK);              /* extern */

void func_0022CF10(void *arg0, s32 arg1) {
    s32 *sp0;
    s32 *sp10;
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_6;
    s32 temp_2_3;
    s32 temp_2_5;
    void *temp_2_4;
    void *temp_2_6;

    temp_2 = func_00258688(D_002AD408(0x1C), arg1, 0);
    sp0 = temp_2;
    if (temp_2 != NULL) {
        *temp_2 += 1;
    }
    temp_2_2 = func_0024F1A0(D_002AD408(0xC));
    temp_6 = M2C_FIELD(arg0, s32 **, 0x24);
    if (temp_6 != temp_2_2) {
        if (temp_6 != NULL) {
            temp_2_3 = M2C_FIELD(temp_6, s32 *, 0) - 1;
            M2C_FIELD(temp_6, s32 *, 0) = temp_2_3;
            if (temp_2_3 == 0) {
                temp_2_4 = M2C_FIELD(temp_6, void **, 4);
                M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6 + M2C_FIELD(temp_2_4, s16 *, 8), 3, temp_6);
            }
        }
        M2C_FIELD(arg0, s32 **, 0x24) = temp_2_2;
        if (temp_2_2 != NULL) {
            *temp_2_2 += 1;
        }
    }
    sp10 = sp0;
    if (sp0 != NULL) {
        M2C_FIELD(sp0, s32 *, 0) += 1;
    }
    func_0024F440(M2C_FIELD(arg0, s32 **, 0x24), &sp10);
    if (sp0 != NULL) {
        temp_2_5 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_5;
        if (temp_2_5 == 0) {
            temp_2_6 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_6, s16 *, 8), 3, sp0);
        }
    }
}
