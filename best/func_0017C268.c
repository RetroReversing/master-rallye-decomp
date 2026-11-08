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

void func_0017C268(void *arg0, void *arg1) {
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f0_2;
    void *temp_2;
    void *temp_3;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0x58);
    var_f0 = -temp_f3;
    temp_f9 = M2C_FIELD(arg0, f32 *, 0xEC);
    temp_f10 = M2C_FIELD(arg0, f32 *, 0xF0);
    temp_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), void **, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0xEC);
    temp_3 = temp_2 + 0xE0;
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x58);
    temp_f5 = M2C_FIELD(temp_2, f32 *, 0x1C);
    if (temp_f9 < var_f0) {
        var_f0_2 = 0.0f;
        if (!(temp_f1 < -temp_f2)) {
            var_f0 = -temp_f3;
            goto block_3;
        }
    } else {
block_3:
        if (!(var_f0 <= temp_f9)) {
            if (!(-temp_f2 <= temp_f1)) {
                var_f0_2 = (M2C_FIELD(arg0, f32 *, 0x68) * M2C_FIELD(arg0, f32 *, 0x6C) * temp_f9) + (M2C_FIELD(arg0, f32 *, 0x28) * temp_f5 * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 0x70) * M2C_FIELD(arg0, f32 *, 0x74) * temp_f10);
            } else {
                goto block_7;
            }
        } else {
block_7:
            var_f0_2 = (M2C_FIELD(arg0, f32 *, 0x68) * M2C_FIELD(arg0, f32 *, 0x6C) * temp_f9) + (M2C_FIELD(arg0, f32 *, 0x28) * temp_f5 * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 0x70) * M2C_FIELD(arg0, f32 *, 0x74) * temp_f10) + (M2C_FIELD(arg0, f32 *, 0x78) * (temp_f9 - temp_f1)) + (M2C_FIELD(arg0, f32 *, 0x7C) * (temp_f10 - M2C_FIELD(arg1, f32 *, 0xF0)));
        }
    }
    M2C_FIELD(arg0, f32 *, 0x94) = var_f0_2;
}
