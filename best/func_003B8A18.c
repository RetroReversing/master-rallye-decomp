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

M2C_UNK D_002AD530(void *, void *, s32);            /* extern */
s32 *D_002AD5A8(s32);                               /* extern */
extern M2C_UNK D_00426508;

void *func_003B8A18(void *arg0, s32 arg1) {
    s32 *temp_2_2;
    s32 temp_6;
    s32 var_4;
    void *temp_2;
    void *temp_5;
    void *temp_5_2;
    void *var_2;
    void *var_3;

    temp_5_2 = M2C_FIELD(arg0, void **, 0x4C);
    if (temp_5_2 != NULL) {
        temp_6 = M2C_FIELD(temp_5_2, s32 *, -0x10) * 0x14;
        temp_2 = temp_6 + temp_5_2;
        var_2 = temp_2 - 0x14;
        if (temp_5_2 != temp_2) {
            do {
                var_2 -= 0x14;
            } while (temp_5_2 != var_2);
        }
        D_002AD530(temp_5_2 - 0x10, temp_5_2, temp_6);
    }
    temp_2_2 = D_002AD5A8((arg1 * 0x14) + 0x10);
    temp_5 = temp_2_2 + 0x10;
    var_4 = arg1 - 1;
    *temp_2_2 = arg1;
    var_3 = temp_5;
    if (arg1 != 0) {
        do {
            M2C_FIELD(var_3, f32 *, 0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
            var_4 -= 1;
            M2C_FIELD(var_3, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
            M2C_FIELD(var_3, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
            M2C_FIELD(var_3, s32 *, 0xC) = 0;
            M2C_FIELD(var_3, s32 *, 0x10) = -1;
            var_3 += 0x14;
        } while (var_4 != -1);
    }
    M2C_FIELD(arg0, void **, 0x4C) = temp_5;
    return temp_5;
}
