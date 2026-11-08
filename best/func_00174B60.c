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

void *func_00176C98();                              /* extern */
M2C_UNK func_001C6E68(void *, s32);                 /* extern */
f32 func_001CF4C0(void *);                          /* extern */
M2C_UNK func_00268180();                            /* extern */
extern f32 D_0044FCB4;
extern f32 D_00478468;

void func_00174B60(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f2;
    s32 temp_4_2;
    s32 temp_6;
    s32 var_5;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_4;
    void *temp_5;

    func_00268180();
    temp_4 = M2C_FIELD(arg0, void **, 0x180);
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    temp_f0 = M2C_FIELD(temp_4, f32 *, 0x48) / M2C_FIELD(temp_4, f32 *, 0xC);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_4, f32 *, 0x24);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (((temp_f0 + 1.0f) * 0.25f * M2C_FIELD(temp_4, f32 *, 0x2C)) - M2C_FIELD(temp_4, f32 *, 0xEC));
        M2C_FIELD(arg0, M2C_UNK32 *, 0x120) = 0;
        M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(temp_4, f32 *, 0x50);
        temp_f0_2 = M2C_FIELD(temp_4, f32 *, 0xEC);
        M2C_FIELD(arg0, f32 *, 0x2C) = temp_f0_2;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (1.0f / temp_f0_2);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(temp_4, f32 *, 0xF0);
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            var_f0 = 0.5f;
        } else {
            var_f0 = -0.5f;
        }
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(temp_4, f32 *, 0x1C) * var_f0);
        var_f2 = 0.5f;
        var_f0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), f32 *, 0x11C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_4, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (((1.0f - temp_f0) * 0.25f * M2C_FIELD(temp_4, f32 *, 0x2C)) - M2C_FIELD(temp_4, f32 *, 0x14C));
        M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(temp_4, f32 *, 0x54);
        M2C_FIELD(arg0, M2C_UNK32 *, 0x120) = (M2C_UNK32) M2C_FIELD(temp_4, M2C_UNK32 *, 0x4C);
        temp_f1 = M2C_FIELD(temp_4, f32 *, 0x14C);
        M2C_FIELD(arg0, f32 *, 0x2C) = temp_f1;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (1.0f / temp_f1);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(temp_4, f32 *, 0x150);
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            var_f0_3 = 0.5f;
        } else {
            var_f0_3 = -0.5f;
        }
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(temp_4, f32 *, 0x20) * var_f0_3);
        var_f2 = -0.5f;
        var_f0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), f32 *, 0x17C);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -var_f0_2;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), f32 *, 0x18) * var_f2);
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        var_f1 = 0.0f;
    } else {
        var_f1 = D_0044FCB4;
    }
    M2C_FIELD(arg0, f32 *, 0x48) = var_f1;
    M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        var_f0_4 = 0.0f;
    } else {
        var_f0_4 = D_0044FCB4;
    }
    temp_17 = arg0 + 0x48;
    M2C_FIELD(arg0, f32 *, 0x50) = var_f0_4;
    temp_f0_3 = func_001CF4C0(temp_17);
    if (!(temp_f0_3 < D_00478468)) {
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) / temp_f0_3);
        M2C_FIELD(temp_17, f32 *, 4) = (f32) (M2C_FIELD(temp_17, f32 *, 4) / temp_f0_3);
        M2C_FIELD(temp_17, f32 *, 8) = (f32) (M2C_FIELD(temp_17, f32 *, 8) / temp_f0_3);
    } else {
        M2C_FIELD(arg0, f32 *, 0x48) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    }
    temp_2 = M2C_FIELD(arg0, void **, 0x180);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x13C) = (f32) (M2C_FIELD(temp_2, f32 *, 0x12C) * 0.01745328f);
        var_f1_2 = M2C_FIELD(temp_2, f32 *, 0x114);
    } else {
        M2C_FIELD(arg0, f32 *, 0x13C) = (f32) (M2C_FIELD(temp_2, f32 *, 0x18C) * 0.01745328f);
        var_f1_2 = M2C_FIELD(temp_2, f32 *, 0x174);
    }
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) (var_f1_2 * 0.01745328f);
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        M2C_FIELD(arg0, f32 *, 0x13C) = (f32) -M2C_FIELD(arg0, f32 *, 0x13C);
        M2C_FIELD(arg0, f32 *, 0x140) = (f32) -M2C_FIELD(arg0, f32 *, 0x140);
    }
    temp_2_2 = M2C_FIELD(arg0, void **, 0x180);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x15C) = (f32) (M2C_FIELD(temp_2_2, f32 *, 0x130) * 0.01745328f);
        var_f1_3 = M2C_FIELD(temp_2_2, f32 *, 0x118);
    } else {
        M2C_FIELD(arg0, f32 *, 0x15C) = (f32) (M2C_FIELD(temp_2_2, f32 *, 0x190) * 0.01745328f);
        var_f1_3 = M2C_FIELD(temp_2_2, f32 *, 0x178);
    }
    M2C_FIELD(arg0, f32 *, 0x160) = (f32) (var_f1_3 * 0.01745328f);
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        M2C_FIELD(arg0, f32 *, 0x15C) = (f32) -M2C_FIELD(arg0, f32 *, 0x15C);
        M2C_FIELD(arg0, f32 *, 0x160) = (f32) -M2C_FIELD(arg0, f32 *, 0x160);
    }
    temp_2_3 = M2C_FIELD(arg0, void **, 0x180);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x120);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x124);
        temp_f0_4 = M2C_FIELD(temp_2_3, f32 *, 0x128);
        M2C_FIELD(arg0, f32 *, 0x78) = temp_f0_4;
        M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (temp_f0_4 * 0.2f);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x100);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x104);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(temp_2_3, f32 *, 0xF8);
        var_f1_4 = M2C_FIELD(temp_2_3, f32 *, 0xFC);
    } else {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x180);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x184);
        temp_f0_5 = M2C_FIELD(temp_2_3, f32 *, 0x188);
        M2C_FIELD(arg0, f32 *, 0x78) = temp_f0_5;
        M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (temp_f0_5 * 0.2f);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x160);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x164);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x158);
        var_f1_4 = M2C_FIELD(temp_2_3, f32 *, 0x15C);
    }
    M2C_FIELD(arg0, f32 *, 0x58) = var_f1_4;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x140);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x144);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(temp_2_3, f32 *, 0x148);
    temp_2_4 = M2C_FIELD(arg0, void **, 0x180);
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(temp_2_4, f32 *, 0x138);
        var_f1_5 = M2C_FIELD(temp_2_4, f32 *, 0x13C);
    } else {
        M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(temp_2_4, f32 *, 0x198);
        var_f1_5 = M2C_FIELD(temp_2_4, f32 *, 0x19C);
    }
    M2C_FIELD(arg0, f32 *, 0x16C) = var_f1_5;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        M2C_FIELD(arg0, f32 *, 0x14C) = 0.0f;
    } else {
        M2C_FIELD(arg0, f32 *, 0x14C) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), f32 *, 0x8C) * 57.295826f);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x170);
    temp_5 = func_00176C98();
    if ((temp_4_2 < 0) || (temp_6 = M2C_FIELD(temp_5, s32 *, 0), (((u32) temp_4_2 < (u32) ((s32) ((M2C_FIELD(temp_5, s32 *, 4) - temp_6) * 0xAAAAAAAB) >> 2)) == 0))) {
        var_5 = M2C_FIELD(temp_5, s32 *, 0);
    } else {
        var_5 = (temp_4_2 * 0xC) + temp_6;
    }
    func_001C6E68(arg0 + 0x174, var_5);
}
