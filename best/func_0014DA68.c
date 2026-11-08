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

s32 func_001E3598(s32, s32);                        /* extern */
M2C_UNK func_001E3D10(s32, s32, s32);               /* extern */
M2C_UNK func_0029EA38(s32);                         /* extern */
M2C_UNK func_0029EB50(s32, f32);                    /* extern */
M2C_UNK func_0029EC50(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0014DA68(void *arg0, void *arg1) {
    f32 temp_f0;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_2;
    s32 var_18;

    var_18 = 0;
    temp_16 = func_001E3650(func_001E4280(), arg0 + 0x18) == 3;
    temp_2 = func_001E3598(func_001E4280(), arg0 + 0x1C);
    if (temp_16 != 0) {
        var_18 = temp_2 == 0;
    }
    func_001E3D10(func_001E4280(), arg0 + 0x20, var_18);
    temp_16_2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_16_2 != 0) {
        if (var_18 != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                temp_f0 = M2C_FIELD(arg0, f32 *, 0xC) + 0.04f;
                M2C_FIELD(arg0, f32 *, 0xC) = temp_f0;
                if (temp_f0 > 1.0f) {
                    M2C_FIELD(arg0, f32 *, 0xC) = 1.0f;
                }
                func_0029EB50(temp_16_2, M2C_FIELD(arg0, f32 *, 0xC));
            } else {
                func_0029EB50(temp_16_2, M2C_FIELD(arg0, f32 *, 0xC));
                func_0029EC50(temp_16_2, 0xD3, 1);
                M2C_FIELD(arg0, s32 *, 0x14) = 1;
            }
        } else {
            func_0029EA38(temp_16_2);
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
    }
}
