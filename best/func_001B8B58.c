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

f32 func_001B8B58(void *arg0, s32 arg1) {
    f32 var_f20;
    s32 *var_6;
    s32 temp_2_3;
    s32 temp_2_6;
    s32 temp_2_7;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_4_2;
    u32 var_3;
    u32 var_5;
    u32 var_7;
    void **temp_20;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_4;
    void *temp_5;
    void *var_17;

    if ((arg1 == 0) || (temp_2 = arg0 + 0x38, temp_4 = M2C_FIELD(arg0, void **, 0x38), (temp_4 == M2C_FIELD(temp_2, s32 *, 4))) || (temp_20 = M2C_FIELD(func_002015D8(temp_4), void ***, 8), temp_2_2 = func_0021E9C0(func_0021F4B0(), arg0 + 4), (temp_2_2 == NULL)) || (temp_2_3 = M2C_FIELD(temp_2_2, s32 *, 0x50), (temp_2_3 == 0))) {
        return 0.5f;
    }
    var_17 = M2C_FIELD(arg0, void **, 0x38);
    var_f20 = 0.5f;
    if (var_17 != M2C_FIELD(temp_2, s32 *, 4)) {
loop_8:
        temp_2_4 = func_0021E9C0(func_0021F4B0(), var_17);
        temp_5 = arg0 + 0x44;
        if (temp_2_4 != NULL) {
            temp_4_2 = M2C_FIELD(temp_5, u32 *, 4);
            temp_3 = M2C_FIELD(arg0, u32 *, 0x44);
            if (temp_3 < temp_4_2) {
                var_3 = temp_3 + 0x38;
                do {
                    var_3 += 0x38;
                } while (var_3 < temp_4_2);
            }
            M2C_FIELD(temp_5, u32 *, 4) = (u32) (temp_4_2 - (temp_4_2 - temp_3));
            temp_2_5 = *temp_20;
            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, s32, s32, void *, void *), 0x44)(temp_20 + M2C_FIELD(temp_2_5, s16 *, 0x40), arg1 + 0xA4, temp_2_3 + 0x50, temp_2_4, temp_5);
            temp_3_2 = M2C_FIELD(arg0, u32 *, 0x44);
            var_7 = 0;
            temp_2_6 = (s32) ((M2C_FIELD(temp_5, u32 *, 4) - temp_3_2) * 0xB6DB6DB7) >> 3;
            var_5 = 0;
            if (temp_2_6 != 0) {
                var_6 = temp_3_2 + 0x30;
                do {
                    temp_2_7 = *var_6;
                    var_7 += 1;
                    var_6 += 0x38;
                    var_5 = (~temp_2_7 != 0) ? (var_5 + 1) : var_5;
                } while (var_7 < (u32) temp_2_6);
            }
            if ((((s32) (var_5 + (var_5 >> 0x1F)) >> 1) * 2) != (var_5 - 1)) {
                goto block_16;
            }
            return 0.0f;
        }
block_16:
        var_17 += 4;
        if (var_17 == M2C_FIELD(temp_2, s32 *, 4)) {
            goto block_17;
        }
        goto loop_8;
    }
block_17:
    if (0.5f < 0.0f) {
        var_f20 = 0.0f;
    }
    return var_f20;
}
