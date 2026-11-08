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

M2C_UNK func_0026D990(void **, void *, void *, s8, s8, s32); /* extern */
M2C_UNK func_003F93CC(s32, void **, s32, s8, s8, s32); /* extern */

void func_0026DA68(void **arg0, s32 arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 temp_4_2;
    s32 var_9;
    s8 temp_7;
    s8 temp_8;
    void **temp_16;
    void **var_16;
    void **var_4;
    void *temp_17;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    if (arg0 != arg1) {
        var_16 = arg0 + 4;
        if (var_16 != arg1) {
            temp_19 = arg2 + 0xC0;
            do {
                temp_17 = *var_16;
                var_9 = 0;
                temp_2 = *arg0;
                temp_3 = M2C_FIELD(temp_17, void **, 0x50);
                temp_4 = M2C_FIELD(temp_2, void **, 0x50);
                temp_7 = M2C_FIELD(temp_2, s8 *, 0x48);
                temp_2_2 = temp_3 + 0x50;
                temp_5 = temp_4 + 0x50;
                temp_f1 = M2C_FIELD(arg2, f32 *, 0xC0);
                temp_f2 = M2C_FIELD(temp_19, f32 *, 4);
                temp_f4 = temp_f1 - M2C_FIELD(temp_4, f32 *, 0x50);
                temp_f5 = temp_f2 - M2C_FIELD(temp_2_2, f32 *, 4);
                temp_f1_2 = temp_f1 - M2C_FIELD(temp_3, f32 *, 0x50);
                temp_f2_2 = temp_f2 - M2C_FIELD(temp_5, f32 *, 4);
                temp_f0 = M2C_FIELD(temp_19, f32 *, 8);
                temp_8 = M2C_FIELD(temp_17, s8 *, 0x48);
                temp_f3 = temp_f0 - M2C_FIELD(temp_5, f32 *, 8);
                temp_f0_2 = temp_f0 - M2C_FIELD(temp_2_2, f32 *, 8);
                if ((temp_7 < temp_8) || ((temp_8 == temp_7) && (((temp_f4 * temp_f4) + (temp_f2_2 * temp_f2_2) + (temp_f3 * temp_f3)) < ((temp_f1_2 * temp_f1_2) + (temp_f5 * temp_f5) + (temp_f0_2 * temp_f0_2))))) {
                    var_9 = 1;
                }
                if (var_9 != 0) {
                    temp_16 = var_16 + 4;
                    temp_4_2 = ((s32) (var_16 - arg0) >> 2) * 4;
                    func_003F93CC(temp_16 - temp_4_2, arg0, temp_4_2, temp_7, temp_8, var_9);
                    *arg0 = temp_17;
                    var_4 = temp_16;
                } else {
                    func_0026D990(var_16, temp_17, arg2, temp_7, temp_8, var_9);
                    var_4 = var_16 + 4;
                }
                var_16 = var_4;
            } while (var_16 != arg1);
        }
    }
}
