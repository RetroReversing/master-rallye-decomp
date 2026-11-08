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

M2C_UNK func_003E0FE0(void *, void *, s32);         /* extern */
s32 func_003E0FF0(void *, void *, u32, M2C_UNK);    /* extern */
M2C_UNK func_003E1850(void *, s32, s32);            /* extern */
M2C_UNK func_003E1C40(void *, void *, void *, void *, void *, void *, void *, void *, void *, s32, s32, s32, s32, s32); /* extern */

void func_003E1998(void *arg0) {
    void *sp30;
    void *sp34;
    void *sp38;
    void *sp3C;
    void *sp40;
    void *sp44;
    s32 temp_18;
    s32 temp_22;
    s32 temp_23;
    s32 temp_6;
    s32 var_2;
    u32 temp_16;
    void *temp_17;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_30;
    void *var_2_2;

    temp_30 = M2C_FIELD(arg0, void **, 0x40);
    temp_6 = M2C_FIELD(temp_30, s32 *, 0x848);
    if (temp_6 == 0) {
        M2C_FIELD(temp_30, s32 *, 0x174) = 3;
        M2C_FIELD(temp_30, s32 *, 0x17C) = 1;
        M2C_FIELD(temp_30, s32 *, 0x144) = 5;
        M2C_FIELD(temp_30, s32 *, 0x13C) = 1;
        M2C_FIELD(temp_30, s32 *, 0x140) = 1;
        M2C_FIELD(temp_30, s32 *, 0x188) = 1;
    }
    M2C_FIELD(temp_30, s32 *, 0x12C) = (s32) ((s32) (M2C_FIELD(temp_30, s32 *, 0x124) + 0xF) >> 4);
    if (temp_6 != 0) {
        if (M2C_FIELD(temp_30, s32 *, 0x13C) == 0) {
            var_2 = ((s32) (M2C_FIELD(temp_30, s32 *, 0x128) + 0x1F) >> 5) * 2;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_2 = (s32) (M2C_FIELD(temp_30, s32 *, 0x128) + 0xF) >> 4;
    }
    M2C_FIELD(temp_30, s32 *, 0x130) = var_2;
    temp_22 = var_2 * 0x10;
    temp_23 = M2C_FIELD(temp_30, s32 *, 0x12C) * 0x10;
    var_2_2 = temp_30 + 0x528;
    if ((temp_23 != M2C_FIELD(arg0, s32 *, 0)) || (var_2_2 = temp_30 + 0x528, (temp_22 != M2C_FIELD(arg0, s32 *, 4)))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_22;
        M2C_FIELD(arg0, s32 *, 0) = temp_23;
        sp44 = var_2_2;
        temp_17 = temp_30 + 0x108;
        sp30 = temp_30 + 0x320;
        temp_19 = temp_30 + 0x1E8;
        sp34 = temp_30 + 0x388;
        temp_20 = temp_30 + 0x250;
        temp_21 = temp_30 + 0x2B8;
        sp38 = temp_30 + 0x3F0;
        temp_18 = temp_22 >> 1;
        temp_16 = (u32) (temp_23 * (temp_22 * 0x180)) >> 8;
        sp3C = temp_30 + 0x458;
        sp40 = temp_30 + 0x4C0;
        func_003E0FE0(temp_17, arg0, temp_6);
        M2C_FIELD(temp_30, s32 *, 0xFC) = func_003E0FF0(temp_30, temp_17, temp_16, 0x40);
        M2C_FIELD(temp_30, s32 *, 0x100) = func_003E0FF0(temp_30, temp_17, temp_16, 0x40);
        M2C_FIELD(temp_30, s32 *, 0x104) = func_003E0FF0(temp_30, temp_17, temp_16, 0x40);
        func_003E1C40(temp_19, temp_20, temp_21, sp30, sp34, sp38, sp3C, sp40, var_2_2, M2C_FIELD(temp_30, s32 *, 0xFC), M2C_FIELD(temp_30, s32 *, 0x100), M2C_FIELD(temp_30, s32 *, 0x104), temp_23, temp_22);
        func_003E1850(temp_19, temp_23, temp_22);
        func_003E1850(temp_20, temp_23, temp_22);
        func_003E1850(temp_21, temp_23, temp_22);
        func_003E1850(sp30, temp_23, temp_18);
        func_003E1850(sp34, temp_23, temp_18);
        func_003E1850(sp38, temp_23, temp_18);
        func_003E1850(sp3C, temp_23, temp_18);
        func_003E1850(sp40, temp_23, temp_18);
        func_003E1850(sp44, temp_23, temp_18);
    }
}
