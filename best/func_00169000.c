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

void *func_002015D8(u32, u32, s32, void *);         /* extern */
void *func_0021E9C0(s32, M2C_UNK *);                /* extern */
s32 func_0021F4B0();                                /* extern */
extern M2C_UNK D_0040E750;

f32 func_00169000(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 *var_3_2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f21;
    f32 var_f22;
    s32 temp_2_3;
    s32 temp_6;
    s32 temp_6_2;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_4;
    u32 var_3;
    u32 var_4;
    u32 var_5;
    void **temp_9;
    void *temp_2;
    void *temp_2_2;
    void *temp_7;

    var_f22 = 10000.0f;
    temp_2 = func_0021E9C0(func_0021F4B0(), &D_0040E750);
    var_f0 = 10000.0f;
    if (temp_2 != NULL) {
        temp_7 = arg0 + 0xD0;
        if (M2C_FIELD(temp_2, s32 *, 0x58) != 0) {
            temp_f20 = M2C_FIELD(arg1, f32 *, 4);
            temp_f2 = M2C_FIELD(arg1, f32 *, 8);
            var_f21 = 10000.0f;
            temp_f1 = M2C_FIELD(arg1, f32 *, 0);
            sp28 = temp_f2;
            sp20 = temp_f1;
            sp24 = temp_f20 - 3.0f;
            sp14 = temp_f20 + 3.0f;
            sp10 = temp_f1;
            sp18 = temp_f2;
            temp_4 = M2C_FIELD(temp_7, u32 *, 4);
            temp_3 = M2C_FIELD(arg0, u32 *, 0xD0);
            temp_6 = temp_4 - temp_3;
            if (temp_3 < temp_4) {
                var_3 = temp_3 + 0x38;
                do {
                    var_3 += 0x38;
                } while (var_3 < temp_4);
            }
            M2C_FIELD(temp_7, u32 *, 4) = (u32) (temp_4 - temp_6);
            temp_9 = M2C_FIELD(func_002015D8(temp_4, temp_4, temp_6, temp_7), void ***, 8);
            temp_2_2 = *temp_9;
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, f32 *, f32 *, void *, void *, void **), 0x44)(temp_9 + M2C_FIELD(temp_2_2, s16 *, 0x40), &sp10, &sp20, temp_2, temp_7, temp_9);
            var_4 = M2C_FIELD(arg0, u32 *, 0xD0);
            temp_2_3 = (s32) ((M2C_FIELD(temp_7, u32 *, 4) - var_4) * 0xB6DB6DB7) >> 3;
            if (temp_2_3 == 0) {
                var_f22 = sp24;
                if (sp14 < sp24) {
                    var_f22 = sp14;
                }
            } else {
                var_5 = 0;
                if (temp_2_3 != 0) {
                    var_3_2 = var_4 + 0x1C;
                    do {
                        temp_f1_2 = *var_3_2;
                        temp_f0 = fabsf(temp_f1_2 - temp_f20);
                        var_5 += 1;
                        if (temp_f0 < var_f21) {
                            var_f21 = temp_f0;
                            var_f22 = temp_f1_2;
                        }
                        var_3_2 += 0x38;
                    } while (var_5 < (u32) temp_2_3);
                }
                temp_3_2 = M2C_FIELD(temp_7, u32 *, 4);
                temp_6_2 = temp_3_2 - var_4;
                if (var_4 < temp_3_2) {
                    do {
                        var_4 += 0x38;
                    } while (var_4 < temp_3_2);
                }
                M2C_FIELD(temp_7, u32 *, 4) = (u32) (temp_3_2 - temp_6_2);
            }
            var_f0 = var_f22;
        }
    }
    return var_f0;
}
