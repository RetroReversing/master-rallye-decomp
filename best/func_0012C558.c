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

M2C_UNK func_0012C2B8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0012C3D0(void *);                      /* extern */
M2C_UNK func_0012D208(void *, M2C_UNK, s32);        /* extern */

void func_0012C558(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f4;
    f32 var_f4_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_3;
    s32 temp_4;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_17;
    s32 var_6;
    void *temp_2;

    temp_2 = M2C_FIELD(arg0, void **, 0x24);
    temp_4 = M2C_FIELD(temp_2, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x28) = temp_4;
    temp_5 = M2C_FIELD(temp_2, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_5;
    temp_3 = M2C_FIELD(temp_2, s32 *, 0x1C);
    var_17 = 0;
    if (temp_3 != 0) {
        var_17 = M2C_FIELD(arg0, s32 *, 0x30) == 0;
    }
    temp_2_2 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x30) = temp_3;
    if (temp_2_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_2_2 - 1);
    }
    temp_2_3 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_2_3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_2_3 - 1);
    }
    temp_2_4 = M2C_FIELD(arg0, s32 *, 0x74);
    if (temp_2_4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) (temp_2_4 - 1);
    }
    var_6 = 0;
    if ((temp_3 != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0x25)) {
        var_6 = M2C_FIELD(arg0, s32 *, 0x80) == 0;
    }
    if (temp_4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, f32 *, 0x6C) = 8.0f;
    }
    if (temp_5 == 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, f32 *, 0x70) = 8.0f;
    }
    if (var_6 == 0) {
        M2C_FIELD(arg0, s32 *, 0x74) = 0;
        M2C_FIELD(arg0, f32 *, 0x78) = 8.0f;
    }
    if ((temp_4 != 0) && (M2C_FIELD(arg0, s32 *, 0x60) == 0)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
        temp_2_5 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_2_5;
        var_f4 = temp_f1 - (f32) temp_2_5;
        if ((temp_2_5 == 0x24) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, -0x10) == 0xC)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x25;
            var_f4 = temp_f1 - (f32) 0x25;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) < 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (((s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2) - 1);
        }
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_ERROR(/* Read from unset register $f5 */);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x6C) * 0.5f;
        M2C_FIELD(arg0, f32 *, 0x6C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C) + var_f4);
        if (temp_f0 < 2.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 2.0f;
        }
        if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, -0x10) == 0xC)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x26;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
    }
    if ((temp_5 != 0) && (M2C_FIELD(arg0, s32 *, 0x64) == 0)) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x20);
        temp_2_6 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_2_6;
        var_f4_2 = temp_f1_2 - (f32) temp_2_6;
        if ((temp_2_6 == 0x27) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, -0x10) == 0xC)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x26;
            var_f4_2 = temp_f1_2 - (f32) 0x26;
        }
        if ((u32) M2C_FIELD(arg0, s32 *, 0x1C) >= (u32) ((s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_ERROR(/* Read from unset register $f5 */);
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x70) * 0.5f;
        M2C_FIELD(arg0, f32 *, 0x70) = temp_f0_2;
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C) + var_f4_2);
        if (temp_f0_2 < 2.0f) {
            M2C_FIELD(arg0, f32 *, 0x70) = 2.0f;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
    }
    if ((var_6 != 0) && (M2C_FIELD(arg0, s32 *, 0x74) == 0)) {
        func_0012D208(arg0, 0x25, var_6);
        func_0012C3D0(arg0);
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_ERROR(/* Read from unset register $f3 */);
        temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x78) * 0.5f;
        M2C_FIELD(arg0, f32 *, 0x78) = temp_f0_3;
        if (temp_f0_3 < 2.0f) {
            M2C_FIELD(arg0, f32 *, 0x78) = 2.0f;
        }
    }
    if (var_17 != 0) {
        temp_5_2 = M2C_FIELD(arg0, s32 *, 0x1C);
        if ((temp_5_2 == 0x26) || (M2C_FIELD(arg0, s32 *, 0x80) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x5C) = 1;
            return;
        }
        if (temp_5_2 != 0x25) {
            func_0012C2B8(arg0, temp_5_2, 1);
        }
    }
}
