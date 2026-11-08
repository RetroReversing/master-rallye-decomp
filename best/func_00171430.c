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

M2C_UNK D_002AD530(void *);                         /* extern */
s32 *D_002AD5A8(s32);                               /* extern */
M2C_UNK func_003F931C(void *, s32, s32, void *);    /* extern */

void func_00171430(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_2_2;
    s32 temp_16;
    s32 var_3;
    void *temp_2;
    void *temp_3;
    void *temp_7;
    void *var_2;
    void *var_2_2;

    temp_3 = M2C_FIELD(arg0, void **, 4);
    if (temp_3 != NULL) {
        temp_2 = temp_3 + (M2C_FIELD(temp_3, s32 *, -0x10) * 8);
        var_2 = temp_2 - 8;
        if (temp_3 != temp_2) {
            do {
                var_2 -= 8;
            } while (temp_3 != var_2);
        }
        D_002AD530(temp_3 - 0x10);
    }
    temp_16 = arg2 * 8;
    temp_2_2 = D_002AD5A8(temp_16 + 0x10);
    temp_7 = temp_2_2 + 0x10;
    *temp_2_2 = arg2;
    var_2_2 = temp_7;
    var_3 = arg2 - 1;
    if (arg2 != 0) {
        do {
            M2C_FIELD(var_2_2, s32 *, 0) = 0;
            var_3 -= 1;
            M2C_FIELD(var_2_2, s32 *, 4) = 0;
            var_2_2 += 8;
        } while (var_3 != -1);
    }
    M2C_FIELD(arg0, void **, 4) = temp_7;
    func_003F931C(temp_7, arg1, temp_16, temp_7);
    M2C_FIELD(arg0, s32 *, 0) = arg2;
}
