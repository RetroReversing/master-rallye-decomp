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

M2C_UNK func_003FA634(s8 *, M2C_UNK *);             /* extern */
M2C_UNK func_003FAD88(s8 *, s8 *, M2C_UNK, s8 *);   /* extern */
extern M2C_UNK D_0047F2D0;
extern M2C_UNK D_0047F2E0;
extern M2C_UNK D_0048BD29;
extern M2C_UNK D_00495DD8;
extern s8 D_00495DE0;

M2C_UNK *func_002B7018(s8 *arg1) {
    s32 var_4;
    s8 *var_17;
    s8 *var_7;
    s8 temp_3;
    s8 temp_4;

    var_7 = arg1;
    if (*var_7 != 0x5C) {
        var_4 = 0;
loop_2:
        if (var_4 < 0x1F) {
            temp_3 = *(var_7 + var_4);
            if (temp_3 != 0) {
                if (temp_3 == 0x3A) {
                    var_7 += var_4 + 1;
                } else if (temp_3 != 0x5C) {
                    var_4 += 1;
                    goto loop_2;
                }
            }
        }
    }
    M2C_FIELD(&D_00495DD8, s64 *, 0) = (s64) M2C_FIELD(&D_0047F2D0, s64 *, 0);
    M2C_FIELD(&D_00495DD8, u8 *, 8) = (u8) M2C_FIELD(&D_0047F2D0, u8 *, 8);
    var_17 = &D_00495DE0;
    func_003FAD88(&D_00495DE0, ((*var_7 ^ 0x5C) != 0) ? var_7 : (var_7 + 1), 0xF6, var_7);
    func_003FA634(&D_00495DE0, &D_0047F2E0);
    M2C_FIELD(&D_00495DD8, s8 *, 0xFF) = 0;
    if (D_00495DE0 != 0) {
        do {
            temp_4 = *var_17;
            *var_17 = !(*(temp_4 + &D_0048BD29) & 2) ? temp_4 : (temp_4 - 0x20);
            var_17 += 1;
        } while (*var_17 != 0);
    }
    return &D_00495DD8;
}
