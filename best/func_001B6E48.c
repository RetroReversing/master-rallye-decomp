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

void *func_002015D8(void *);                        /* extern */
void *func_0021E9C0(s32, void *);                   /* extern */
s32 func_0021F4B0();                                /* extern */

void func_001B6E48(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    s32 sp44;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 var_5;
    void **temp_20;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *var_17;

    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    temp_2 = arg0 + 8;
    if (M2C_FIELD(arg0, s32 *, 0xC4) != 0) {
        temp_4 = M2C_FIELD(arg0, void **, 8);
        if (temp_4 != M2C_FIELD(temp_2, s32 *, 4)) {
            temp_20 = M2C_FIELD(func_002015D8(temp_4), void ***, 8);
            temp_2_2 = func_0021E9C0(func_0021F4B0(), arg0 + 4);
            if (temp_2_2 != NULL) {
                temp_2_3 = M2C_FIELD(temp_2_2, void **, 0x50);
                temp_3 = arg0 + 0x7C;
                if (temp_2_3 != NULL) {
                    temp_4_2 = arg0 + 0x64;
                    temp_2_4 = temp_2_3 + 0x50;
                    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x50);
                    var_5 = 1;
                    temp_f1 = M2C_FIELD(temp_2_4, f32 *, 4);
                    M2C_FIELD(temp_4_2, f32 *, 4) = temp_f1;
                    temp_f3 = M2C_FIELD(temp_2_4, f32 *, 8);
                    M2C_FIELD(temp_4_2, f32 *, 8) = temp_f3;
                    temp_f1_2 = temp_f1 - M2C_FIELD(temp_3, f32 *, 4);
                    temp_f2 = M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x7C);
                    temp_f3_2 = temp_f3 - M2C_FIELD(temp_3, f32 *, 8);
                    if (!(M2C_FIELD(arg0, f32 *, 0xB4) < ((temp_f2 * temp_f2) + (temp_f1_2 * temp_f1_2) + (temp_f3_2 * temp_f3_2)))) {
                        var_5 = 0;
                    }
                    if (var_5 == 0) {
                        var_17 = M2C_FIELD(arg0, void **, 8);
                        if (var_17 != M2C_FIELD(temp_2, s32 *, 4)) {
loop_12:
                            temp_2_5 = func_0021E9C0(func_0021F4B0(), var_17);
                            if (temp_2_5 != NULL) {
                                sp44 = 0;
                                sp10 = M2C_FIELD(arg0, f32 *, 0x7C);
                                sp14 = M2C_FIELD(temp_3, f32 *, 4);
                                sp1C = M2C_FIELD(arg0, f32 *, 0x64);
                                sp18 = M2C_FIELD(temp_3, f32 *, 8);
                                sp20 = M2C_FIELD(temp_4_2, f32 *, 4);
                                sp24 = M2C_FIELD(temp_4_2, f32 *, 8);
                                temp_2_6 = *temp_20;
                                M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, f32 *, void *), 0x4C)(temp_20 + M2C_FIELD(temp_2_6, s16 *, 0x48), &sp10, temp_2_5);
                                if (sp44 != 0) {
                                    M2C_FIELD(arg0, M2C_UNK32 *, 0xAC) = 0;
                                    return;
                                }
                                goto block_16;
                            }
block_16:
                            var_17 += 4;
                            if (var_17 == M2C_FIELD(temp_2, s32 *, 4)) {
                                goto block_17;
                            }
                            goto loop_12;
                        }
                        goto block_17;
                    }
                    M2C_FIELD(arg0, M2C_UNK32 *, 0xAC) = 0;
                    return;
                }
            }
        }
    }
block_17:
    M2C_FIELD(arg0, M2C_UNK32 *, 0xAC) = 0x3F000000;
}
