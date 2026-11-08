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

M2C_UNK func_003D4D70(s32);                         /* extern */
s32 func_003D4EA0(void **);                         /* extern */
M2C_UNK func_003D6F68(s32, s8);                     /* extern */
s8 func_003DA6B8(s32);                              /* extern */
extern M2C_UNK D_0048BD29;

void **func_003D3680(void **arg0, s8 *arg1) {
    s32 temp_16;
    s32 temp_2;
    s32 temp_4_2;
    s32 var_19;
    s32 var_4;
    s8 *temp_23;
    s8 *var_17;
    s8 temp_2_2;
    u8 temp_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    var_17 = arg1;
    temp_23 = var_17;
    temp_3 = *arg0;
    temp_2 = M2C_FIELD(temp_3, s32 *, 8);
    temp_4 = M2C_FIELD(temp_3, u8 *, 0x1A);
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    var_19 = temp_2;
    if (temp_4 != 0) {
        var_4 = 0;
        M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (temp_4 | 2);
    } else {
        temp_4_2 = M2C_FIELD(temp_3, s32 *, 4);
        if (temp_4_2 != 0) {
            func_003D4D70(temp_4_2);
        }
        var_4 = 1;
        if (((s64) ((M2C_FIELD(*arg0, s64 *, 0x10) & 1) << 0x20) >> 0x20) != 0) {
            var_4 = func_003D4EA0(arg0);
        }
    }
    if (var_4 != 0) {
        temp_16 = M2C_FIELD(*arg0, s32 *, 0);
loop_14:
        temp_2_2 = func_003DA6B8(temp_16);
        if (temp_2_2 == -1) {
            temp_3_2 = *arg0;
            M2C_FIELD(temp_3_2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_2, u8 *, 0x1A) | 1);
        } else {
            if (!(*(temp_2_2 + &D_0048BD29) & 8)) {
                if (var_19 != 1) {
                    *var_17 = temp_2_2;
                    var_19 -= 1;
                    var_17 += 1;
                    goto loop_14;
                }
                goto block_12;
            }
block_12:
            func_003D6F68(temp_16, temp_2_2);
        }
        if (var_17 == temp_23) {
            temp_3_3 = *arg0;
            M2C_FIELD(temp_3_3, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_3, u8 *, 0x1A) | 2);
        }
    }
    *var_17 = 0;
    return arg0;
}
