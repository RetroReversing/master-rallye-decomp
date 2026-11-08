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

s32 func_001E3598(s32, void *);                     /* extern */
M2C_UNK func_001E3D10(s32, void *, s32);            /* extern */
M2C_UNK func_0029EA38(s32);                         /* extern */
M2C_UNK func_0029EB50(s32, f32);                    /* extern */
M2C_UNK func_0029EC50(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0014E688(void *arg0, void *arg1) {
    f32 var_f12;
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_hi;
    s32 var_19;

    temp_2 = func_001E3598(func_001E4280(), arg0 + 0x20);
    if ((temp_2 != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    }
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_2;
    if (temp_2_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_2_2 - 1);
    }
    var_19 = 0;
    temp_18 = func_001E3598(func_001E4280(), arg0 + 0x2C);
    temp_3 = func_001E3598(func_001E4280(), arg0 + 0x30);
    if (((temp_2 != 0) || (M2C_FIELD(arg0, s32 *, 0x14) > 0)) && (temp_18 == 0)) {
        var_19 = temp_3 == 0;
    }
    func_001E3D10(func_001E4280(), arg0 + 0x28, var_19);
    if (var_19 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_17 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_17 != 0) {
        temp_3_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_3_2 > 0) {
            temp_hi = temp_3_2 % 15;
            if (temp_hi < 7) {
                var_f12 = (f32) temp_hi / 7.0f;
            } else {
                var_f12 = 1.0f - ((f32) (temp_hi - 7) / 7.0f);
            }
            func_0029EB50(temp_17, var_f12);
            if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
                func_0029EC50(temp_17, 0xD3, 0xB);
                M2C_FIELD(arg0, s32 *, 0x18) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
        } else if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
            func_0029EA38(temp_17);
            M2C_FIELD(arg0, s32 *, 0x18) = 0;
        }
    }
}
