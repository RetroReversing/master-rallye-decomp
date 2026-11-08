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

M2C_UNK func_001CF448(f32 *, M2C_UNK *, void *, M2C_UNK *); /* extern */

void func_0022A708(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    void **sp70;
    M2C_UNK **sp74;
    s32 sp78;
    M2C_UNK **temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3_3;
    M2C_UNK *temp_5;
    M2C_UNK *var_3;
    M2C_UNK *var_4_2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_16;
    void *temp_18;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_6;
    void *var_4;

    var_4 = *M2C_FIELD(arg0, void ***, 0);
loop_2:
    sp70 = M2C_FIELD(arg0, void ***, 0);
    if (var_4 != M2C_FIELD(arg0, void ***, 0)) {
        temp_3 = M2C_FIELD(var_4, void **, 8);
        M2C_FIELD(temp_3, f32 *, 0) = (f32) (M2C_FIELD(temp_3, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
        M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
        M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
        var_4 = M2C_FIELD(var_4, void **, 0);
        goto loop_2;
    }
    temp_18 = arg0 + 8;
    var_4_2 = *M2C_FIELD(arg0, M2C_UNK ***, 4);
loop_5:
    sp74 = M2C_FIELD(arg0, M2C_UNK ***, 4);
    if (var_4_2 != M2C_FIELD(arg0, M2C_UNK ***, 4)) {
        temp_3_2 = M2C_FIELD(var_4_2, void **, 8);
        M2C_FIELD(temp_3_2, f32 *, 0) = (f32) (M2C_FIELD(temp_3_2, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
        M2C_FIELD(temp_3_2, f32 *, 4) = (f32) (M2C_FIELD(temp_3_2, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
        M2C_FIELD(temp_3_2, f32 *, 8) = (f32) (M2C_FIELD(temp_3_2, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
        var_4_2 = M2C_FIELD(var_4_2, M2C_UNK **, 0);
        goto loop_5;
    }
    temp_2 = M2C_FIELD(arg0, M2C_UNK ***, 4);
    sp78 = 0;
    var_3 = *temp_2;
    if (var_3 != temp_2) {
        do {
            var_3 = *var_3;
            sp78 += 1;
        } while (var_3 != temp_2);
    }
    if (sp78 != 3) {
loop_10:
        goto loop_10;
    }
    temp_2_2 = *M2C_FIELD(arg0, M2C_UNK ***, 4);
    temp_3_3 = M2C_FIELD(temp_2_2, M2C_UNK **, 0);
    temp_6 = M2C_FIELD(temp_2_2, void **, 8);
    temp_5 = M2C_FIELD(temp_3_3, M2C_UNK **, 0);
    temp_16 = M2C_FIELD(temp_3_3, void **, 8);
    temp_2_3 = M2C_FIELD(temp_5, void **, 8);
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    temp_f4 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_16, f32 *, 0);
    temp_f2 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_16, f32 *, 4);
    sp40 = temp_f4;
    temp_f3 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_16, f32 *, 8);
    sp44 = temp_f2;
    sp48 = temp_f3;
    temp_f5 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_2_3, f32 *, 8);
    temp_f0 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_2_3, f32 *, 0);
    sp58 = temp_f5;
    temp_f1 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_2_3, f32 *, 4);
    sp50 = temp_f0;
    sp54 = temp_f1;
    sp64 = (temp_f3 * temp_f0) - (temp_f4 * temp_f5);
    sp68 = (temp_f4 * temp_f1) - (temp_f2 * temp_f0);
    sp60 = (temp_f2 * temp_f5) - (temp_f3 * temp_f1);
    func_001CF448(&sp60, temp_5, temp_6, temp_2_2);
    sp10 = sp60;
    sp14 = sp64;
    sp18 = sp68;
    sp30 = sp60;
    sp34 = sp64;
    sp38 = sp68;
    sp1C = -((sp60 * M2C_FIELD(temp_16, f32 *, 0)) + (sp64 * M2C_FIELD(temp_16, f32 *, 4)) + (sp68 * M2C_FIELD(temp_16, f32 *, 8)));
    M2C_FIELD(&sp10, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
    M2C_FIELD(temp_18, f32 *, 8) = sp18;
    M2C_FIELD(temp_18, f32 *, 4) = sp64;
    M2C_FIELD(arg0, f32 *, 0x14) = sp1C;
}
