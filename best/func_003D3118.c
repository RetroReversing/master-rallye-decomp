/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003D4D70(s32, s32);                    /* extern */
s8 func_003DA6B8(void *);                           /* extern */

void *func_003D3118(void *arg0, s8 *arg1) {
    s32 temp_5;
    s32 var_4;
    s8 temp_2_3;
    u8 temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, void **, 0);
    temp_2 = M2C_FIELD(temp_3, u8 *, 0x1A);
    if (temp_2 != 0) {
        var_4 = 0;
        M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (temp_2 | 2);
    } else {
        temp_5 = M2C_FIELD(temp_3, s32 *, 4);
        var_4 = 1;
        if (temp_5 != 0) {
            temp_2_2 = M2C_FIELD(temp_3, void **, 0);
            var_4 = 1;
            if (M2C_FIELD(temp_2_2, s32 *, 8) == M2C_FIELD(temp_2_2, s32 *, 4)) {
                func_003D4D70(temp_5, temp_5);
                var_4 = 1;
            }
        }
    }
    if (var_4 != 0) {
        temp_2_3 = func_003DA6B8(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0));
        if (temp_2_3 != -1) {
            *arg1 = temp_2_3;
            M2C_FIELD(arg0, s32 *, 4) = 1;
        } else {
            temp_3_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_3_2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_2, u8 *, 0x1A) | 3);
            goto block_11;
        }
    } else {
block_11:
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    return arg0;
}
