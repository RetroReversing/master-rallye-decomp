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

extern u16 D_00480138;
extern M2C_UNK D_00496840;
extern s8 D_00496841;

M2C_UNK *func_002BB8E0(s8 *arg1) {
    s32 var_4;
    s8 *temp_7;
    s8 *var_5;
    s8 *var_5_2;
    s8 *var_6;
    s8 temp_3;
    s8 temp_4;

    var_5 = arg1;
    if (*var_5 != 0x5C) {
        var_4 = 0;
loop_2:
        if (var_4 < 0x1F) {
            temp_3 = *(var_5 + var_4);
            if (temp_3 != 0) {
                if (temp_3 == 0x3A) {
                    var_5 += var_4 + 1;
                } else {
                    var_4 += 1;
                    if (temp_3 != 0x5C) {
                        goto loop_2;
                    }
                }
            }
        }
    }
    var_6 = &D_00496841;
    M2C_FIELD(&D_00496840, u16 *, 0) = (u16) D_00480138;
    temp_7 = &D_00496841 + 0xFD;
    var_5_2 = ((*var_5 ^ 0x5C) == 0) ? (var_5 + 1) : var_5;
    if ((u32) &D_00496841 < (u32) temp_7) {
        do {
            temp_4 = *var_5_2;
            *var_6 = ((temp_4 ^ 0x2F) != 0) ? temp_4 : 0x5C;
            var_6 += 1;
            var_5_2 += 1;
        } while ((u32) var_6 < (u32) temp_7);
    }
    M2C_FIELD(&D_00496840, s8 *, 0xFF) = 0;
    return &D_00496840;
}
