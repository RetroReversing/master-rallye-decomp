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

s32 func_0021F4B0();                                /* extern */
M2C_UNK func_002218F0(void *);                      /* extern */
M2C_UNK func_00221A40(void *, void *, s32, void *); /* extern */
M2C_UNK func_0026DCA8(void ***);                    /* extern */
M2C_UNK func_002B2028(void *);                      /* extern */

void func_00345A10(void *arg0) {
    void *sp20;
    s32 temp_21;
    s32 temp_23;
    s32 var_2;
    s32 var_3;
    void ***temp_17;
    void **temp_2;
    void **temp_2_3;
    void **temp_3_2;
    void *temp_16;
    void *temp_20;
    void *temp_2_2;
    void *temp_3;
    void *temp_5;
    void *var_18;

    temp_23 = func_0021F4B0();
    var_3 = 6;
    var_2 = 6 * 0xC;
    do {
        temp_20 = temp_23 + (var_2 + 0x24);
        var_18 = M2C_FIELD(temp_20, void **, 4);
        if (var_18 != temp_20) {
            do {
                temp_17 = M2C_FIELD(M2C_FIELD(var_18, void **, 0), void ****, 0x54);
                if (temp_17 != NULL) {
                    temp_2 = *temp_17;
                    temp_21 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC);
                    if (*temp_2 != temp_2) {
loop_5:
                        temp_2_2 = **temp_17;
                        temp_5 = temp_2_2 + 8;
                        func_00221A40(M2C_FIELD(arg0, void **, 4), temp_5, M2C_FIELD(temp_5, s32 *, 0x40), temp_2_2);
                        temp_3 = **temp_17;
                        sp20 = temp_3;
                        temp_2_3 = M2C_FIELD(temp_3, void ***, 4);
                        temp_16 = M2C_FIELD(temp_3, void **, 0);
                        *temp_2_3 = temp_16;
                        M2C_FIELD(temp_16, void ***, 4) = temp_2_3;
                        func_002B2028(sp20);
                        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) == temp_21) {
                            func_0026DCA8(temp_17);
                        }
                        temp_3_2 = *temp_17;
                        if (*temp_3_2 != temp_3_2) {
                            goto loop_5;
                        }
                    }
                }
                var_18 = M2C_FIELD(var_18, void **, 4);
            } while (var_18 != temp_20);
        }
        var_3 -= 1;
        var_2 = var_3 * 0xC;
    } while (var_3 >= 0);
    func_002218F0(M2C_FIELD(arg0, void **, 4));
}
