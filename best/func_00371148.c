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
void *func_00263350(s32);                           /* extern */

void *func_00371148(void *arg0) {
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    s32 temp_2_2;
    s32 var_4;
    s32 var_5;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_7;

    if (M2C_FIELD(arg0, void **, 0x68) == NULL) {
        temp_2 = func_00263350(D_002AD408(0x2C));
        temp_3 = arg0 + 0x50;
        M2C_FIELD(arg0, void **, 0x68) = temp_2;
        temp_f0 = M2C_FIELD(temp_3, f32 *, 4);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x48);
        sp4 = temp_f0;
        spC = temp_f1;
        sp8 = M2C_FIELD(temp_3, f32 *, 8);
        sp10 = temp_f1 * temp_f1;
        M2C_FIELD(temp_2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(temp_2, f32 *, 4) = temp_f0;
        M2C_FIELD(temp_2, f32 *, 8) = sp8;
        M2C_FIELD(temp_2, f32 *, 0xC) = spC;
        M2C_FIELD(temp_2, f32 *, 0x10) = sp10;
        sp20 = 99999.0f;
        temp_7 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(&sp20, f32 *, 8) = 99999.0f;
        M2C_FIELD(&sp20, f32 *, 4) = 99999.0f;
        sp30 = -99999.0f;
        M2C_FIELD(&sp30, f32 *, 8) = -99999.0f;
        M2C_FIELD(&sp30, f32 *, 4) = -99999.0f;
        temp_2_2 = (s32) ((M2C_FIELD(temp_7, s32 *, 4) - M2C_FIELD(temp_7, s32 *, 0)) * 0xAAAAAAAB) >> 4;
        if (temp_2_2 > 0) {
            var_4 = temp_2_2;
            var_5 = 0;
            do {
                temp_2_3 = M2C_FIELD(temp_7, s32 *, 0) + var_5;
                temp_f1_2 = M2C_FIELD(temp_2_3, f32 *, 0x20);
                if (temp_f1_2 < sp20) {
                    sp20 = temp_f1_2;
                }
                temp_f1_3 = M2C_FIELD(temp_2_3, f32 *, 0x20);
                if (sp30 < temp_f1_3) {
                    sp30 = temp_f1_3;
                }
                temp_f1_4 = M2C_FIELD(temp_2_3, f32 *, 0x24);
                if (temp_f1_4 < sp24) {
                    sp24 = temp_f1_4;
                }
                temp_f1_5 = M2C_FIELD(temp_2_3, f32 *, 0x24);
                if (sp34 < temp_f1_5) {
                    sp34 = temp_f1_5;
                }
                temp_f1_6 = M2C_FIELD(temp_2_3, f32 *, 0x28);
                if (temp_f1_6 < sp28) {
                    sp28 = temp_f1_6;
                }
                temp_f1_7 = M2C_FIELD(temp_2_3, f32 *, 0x28);
                if (sp38 < temp_f1_7) {
                    sp38 = temp_f1_7;
                }
                var_4 -= 1;
                var_5 += 0x30;
            } while (var_4 != 0);
        }
        temp_2_4 = M2C_FIELD(arg0, void **, 0x68);
        temp_3_2 = temp_2_4 + 0x14;
        temp_4 = temp_2_4 + 0x20;
        M2C_FIELD(temp_2_4, f32 *, 0x14) = sp20;
        M2C_FIELD(temp_3_2, f32 *, 4) = sp24;
        M2C_FIELD(temp_3_2, f32 *, 8) = sp28;
        M2C_FIELD(temp_2_4, f32 *, 0x20) = sp30;
        M2C_FIELD(temp_4, f32 *, 4) = sp34;
        M2C_FIELD(temp_4, f32 *, 8) = sp38;
    }
    return M2C_FIELD(arg0, void **, 0x68);
}
