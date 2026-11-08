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

void func_0018B798(void *arg0, void *arg1) {
    s32 temp_6_2;
    s32 temp_7;
    void *temp_2;
    void *temp_6;

    temp_2 = arg0 + 8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg1, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) M2C_FIELD(arg1, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg1, f32 *, 0x74);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x78);
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(arg1, f32 *, 0x7C);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg1, f32 *, 0x80);
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) M2C_FIELD(arg1, f32 *, 0x84);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0x88);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(arg1, f32 *, 0x8C);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 0x90);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) M2C_FIELD(arg1, f32 *, 0x94);
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) M2C_FIELD(arg1, f32 *, 0x98);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) M2C_FIELD(arg1, f32 *, 0x9C);
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) M2C_FIELD(arg1, f32 *, 0xA0);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) M2C_FIELD(arg1, f32 *, 0xA4);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg1, f32 *, 0xA8);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg1, f32 *, 0xAC);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg1, f32 *, 0xB0);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg1, f32 *, 0xB4);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg1, s32 *, 0xB8);
    temp_7 = M2C_FIELD(arg1, s32 *, 0xBC);
    M2C_FIELD(arg0, s32 *, 0xC4) = temp_7;
    if (temp_7 > 0) {
        temp_6 = arg1 + 0xC0;
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x108) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 4);
        if (temp_7 > 1) {
            M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x10C) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0xC);
            if (temp_7 > 2) {
                M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x10);
                M2C_FIELD(arg0, f32 *, 0x110) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x14);
                if (temp_7 > 3) {
                    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x18);
                    M2C_FIELD(arg0, f32 *, 0x114) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x1C);
                    if (temp_7 > 4) {
                        M2C_FIELD(arg0, f32 *, 0xD8) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x20);
                        M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x24);
                        if (temp_7 > 5) {
                            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x28);
                            M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x2C);
                            if (temp_7 > 6) {
                                M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x30);
                                M2C_FIELD(arg0, f32 *, 0x120) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x34);
                                if (temp_7 > 7) {
                                    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x38);
                                    M2C_FIELD(arg0, f32 *, 0x124) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x3C);
                                    if (temp_7 > 8) {
                                        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x40);
                                        M2C_FIELD(arg0, f32 *, 0x128) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x44);
                                        if (temp_7 > 9) {
                                            M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x48);
                                            M2C_FIELD(arg0, f32 *, 0x12C) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x4C);
                                            if (temp_7 > 0xA) {
                                                M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x50);
                                                M2C_FIELD(arg0, f32 *, 0x130) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x54);
                                                if (temp_7 > 0xB) {
                                                    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x58);
                                                    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x5C);
                                                    if (temp_7 > 0xC) {
                                                        M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x60);
                                                        M2C_FIELD(arg0, f32 *, 0x138) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x64);
                                                        if (temp_7 > 0xD) {
                                                            M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x68);
                                                            M2C_FIELD(arg0, f32 *, 0x13C) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x6C);
                                                            if (temp_7 > 0xE) {
                                                                M2C_FIELD(arg0, f32 *, 0x100) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x70);
                                                                M2C_FIELD(arg0, f32 *, 0x140) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x74);
                                                                if (temp_7 > 0xF) {
                                                                    M2C_FIELD(arg0, f32 *, 0x104) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x78);
                                                                    M2C_FIELD(arg0, f32 *, 0x144) = (f32) M2C_FIELD(M2C_FIELD(temp_6, void **, 4), f32 *, 0x7C);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    temp_6_2 = M2C_FIELD(arg1, s32 *, 0xC8);
    M2C_FIELD(arg0, s32 *, 0x148) = temp_6_2;
    if (temp_6_2 > 0) {
        M2C_FIELD(arg0, f32 *, 0x14C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x190) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0);
        if (temp_6_2 > 1) {
            M2C_FIELD(arg0, f32 *, 0x150) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x194) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x1D4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 4);
            if (temp_6_2 > 2) {
                M2C_FIELD(arg0, f32 *, 0x154) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 8);
                M2C_FIELD(arg0, f32 *, 0x198) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 8);
                M2C_FIELD(arg0, f32 *, 0x1D8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 8);
                if (temp_6_2 > 3) {
                    M2C_FIELD(arg0, f32 *, 0x158) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0xC);
                    M2C_FIELD(arg0, f32 *, 0x19C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0xC);
                    M2C_FIELD(arg0, f32 *, 0x1DC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0xC);
                    if (temp_6_2 > 4) {
                        M2C_FIELD(arg0, f32 *, 0x15C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x10);
                        M2C_FIELD(arg0, f32 *, 0x1A0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x10);
                        M2C_FIELD(arg0, f32 *, 0x1E0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x10);
                        if (temp_6_2 > 5) {
                            M2C_FIELD(arg0, f32 *, 0x160) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x14);
                            M2C_FIELD(arg0, f32 *, 0x1A4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x14);
                            M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x14);
                            if (temp_6_2 > 6) {
                                M2C_FIELD(arg0, f32 *, 0x164) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x18);
                                M2C_FIELD(arg0, f32 *, 0x1A8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x18);
                                M2C_FIELD(arg0, f32 *, 0x1E8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x18);
                                if (temp_6_2 > 7) {
                                    M2C_FIELD(arg0, f32 *, 0x168) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x1C);
                                    M2C_FIELD(arg0, f32 *, 0x1AC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x1C);
                                    M2C_FIELD(arg0, f32 *, 0x1EC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x1C);
                                    if (temp_6_2 > 8) {
                                        M2C_FIELD(arg0, f32 *, 0x16C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x20);
                                        M2C_FIELD(arg0, f32 *, 0x1B0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x20);
                                        M2C_FIELD(arg0, f32 *, 0x1F0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x20);
                                        if (temp_6_2 > 9) {
                                            M2C_FIELD(arg0, f32 *, 0x170) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x24);
                                            M2C_FIELD(arg0, f32 *, 0x1B4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x24);
                                            M2C_FIELD(arg0, f32 *, 0x1F4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x24);
                                            if (temp_6_2 > 0xA) {
                                                M2C_FIELD(arg0, f32 *, 0x174) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x28);
                                                M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x28);
                                                M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x28);
                                                if (temp_6_2 > 0xB) {
                                                    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x2C);
                                                    M2C_FIELD(arg0, f32 *, 0x1BC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x2C);
                                                    M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x2C);
                                                    if (temp_6_2 > 0xC) {
                                                        M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x30);
                                                        M2C_FIELD(arg0, f32 *, 0x1C0) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x30);
                                                        M2C_FIELD(arg0, f32 *, 0x200) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x30);
                                                        if (temp_6_2 > 0xD) {
                                                            M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x34);
                                                            M2C_FIELD(arg0, f32 *, 0x1C4) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x34);
                                                            M2C_FIELD(arg0, f32 *, 0x204) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x34);
                                                            if (temp_6_2 > 0xE) {
                                                                M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x38);
                                                                M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x38);
                                                                M2C_FIELD(arg0, f32 *, 0x208) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x38);
                                                                if (temp_6_2 > 0xF) {
                                                                    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xCC), f32 *, 0x3C);
                                                                    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD8), f32 *, 0x3C);
                                                                    M2C_FIELD(arg0, f32 *, 0x20C) = (f32) M2C_FIELD(M2C_FIELD(arg1, void **, 0xD4), f32 *, 0x3C);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x18C) = (s32) M2C_FIELD(arg1, s32 *, 0xD0);
    M2C_FIELD(arg0, f32 *, 0x210) = (f32) M2C_FIELD(arg1, f32 *, 0xDC);
    M2C_FIELD(arg0, f32 *, 0x214) = (f32) M2C_FIELD(arg1, f32 *, 0xE0);
    M2C_FIELD(arg0, f32 *, 0x218) = (f32) M2C_FIELD(arg1, f32 *, 0xE4);
    M2C_FIELD(arg0, s32 *, 0x21C) = (s32) M2C_FIELD(arg1, s32 *, 0xE8);
    M2C_FIELD(arg0, f32 *, 0x220) = (f32) M2C_FIELD(arg1, f32 *, 0xEC);
    M2C_FIELD(arg0, f32 *, 0x224) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 0x228) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 0x22C) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
    M2C_FIELD(arg0, f32 *, 0x230) = (f32) M2C_FIELD(arg1, f32 *, 0xFC);
    M2C_FIELD(arg0, f32 *, 0x234) = (f32) M2C_FIELD(arg1, f32 *, 0x100);
    M2C_FIELD(arg0, f32 *, 0x238) = (f32) M2C_FIELD(arg1, f32 *, 0x104);
    M2C_FIELD(arg0, f32 *, 0x23C) = (f32) M2C_FIELD(arg1, f32 *, 0x108);
    M2C_FIELD(arg0, f32 *, 0x240) = (f32) M2C_FIELD(arg1, f32 *, 0x10C);
    M2C_FIELD(arg0, f32 *, 0x244) = (f32) M2C_FIELD(arg1, f32 *, 0x110);
    M2C_FIELD(arg0, f32 *, 0x248) = (f32) M2C_FIELD(arg1, f32 *, 0x114);
    M2C_FIELD(arg0, f32 *, 0x24C) = (f32) M2C_FIELD(arg1, f32 *, 0x118);
    M2C_FIELD(arg0, f32 *, 0x250) = (f32) M2C_FIELD(arg1, f32 *, 0x11C);
    M2C_FIELD(arg0, f32 *, 0x254) = (f32) M2C_FIELD(arg1, f32 *, 0x120);
    M2C_FIELD(arg0, f32 *, 0x258) = (f32) M2C_FIELD(arg1, f32 *, 0x124);
    M2C_FIELD(arg0, f32 *, 0x25C) = (f32) M2C_FIELD(arg1, f32 *, 0x128);
    M2C_FIELD(arg0, f32 *, 0x260) = (f32) M2C_FIELD(arg1, f32 *, 0x12C);
    M2C_FIELD(arg0, f32 *, 0x264) = (f32) M2C_FIELD(arg1, f32 *, 0x130);
    M2C_FIELD(arg0, f32 *, 0x26C) = (f32) M2C_FIELD(arg1, f32 *, 0x138);
    M2C_FIELD(arg0, f32 *, 0x270) = (f32) M2C_FIELD(arg1, f32 *, 0x13C);
    M2C_FIELD(arg0, f32 *, 0x274) = (f32) M2C_FIELD(arg1, f32 *, 0x140);
    M2C_FIELD(arg0, f32 *, 0x278) = (f32) M2C_FIELD(arg1, f32 *, 0x144);
    M2C_FIELD(arg0, f32 *, 0x27C) = (f32) M2C_FIELD(arg1, f32 *, 0x148);
    M2C_FIELD(arg0, f32 *, 0x280) = (f32) M2C_FIELD(arg1, f32 *, 0x14C);
    M2C_FIELD(arg0, f32 *, 0x284) = (f32) M2C_FIELD(arg1, f32 *, 0x150);
    M2C_FIELD(arg0, f32 *, 0x288) = (f32) M2C_FIELD(arg1, f32 *, 0x154);
    M2C_FIELD(arg0, f32 *, 0x28C) = (f32) M2C_FIELD(arg1, f32 *, 0x158);
    M2C_FIELD(arg0, f32 *, 0x290) = (f32) M2C_FIELD(arg1, f32 *, 0x15C);
    M2C_FIELD(arg0, f32 *, 0x294) = (f32) M2C_FIELD(arg1, f32 *, 0x160);
    M2C_FIELD(arg0, f32 *, 0x298) = (f32) M2C_FIELD(arg1, f32 *, 0x164);
    M2C_FIELD(arg0, f32 *, 0x29C) = (f32) M2C_FIELD(arg1, f32 *, 0x168);
    M2C_FIELD(arg0, f32 *, 0x2A0) = (f32) M2C_FIELD(arg1, f32 *, 0x16C);
    M2C_FIELD(arg0, f32 *, 0x2A4) = (f32) M2C_FIELD(arg1, f32 *, 0x170);
    M2C_FIELD(arg0, f32 *, 0x2A8) = (f32) M2C_FIELD(arg1, f32 *, 0x174);
    M2C_FIELD(arg0, f32 *, 0x2AC) = (f32) M2C_FIELD(arg1, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x2B0) = (f32) M2C_FIELD(arg1, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) M2C_FIELD(arg1, f32 *, 0x180);
    M2C_FIELD(arg0, f32 *, 0x2B8) = (f32) M2C_FIELD(arg1, f32 *, 0x184);
    M2C_FIELD(arg0, f32 *, 0x2BC) = (f32) M2C_FIELD(arg1, f32 *, 0x188);
    M2C_FIELD(arg0, f32 *, 0x2C0) = (f32) M2C_FIELD(arg1, f32 *, 0x18C);
    M2C_FIELD(arg0, f32 *, 0x2C4) = (f32) M2C_FIELD(arg1, f32 *, 0x190);
    M2C_FIELD(arg0, f32 *, 0x2CC) = (f32) M2C_FIELD(arg1, f32 *, 0x198);
    M2C_FIELD(arg0, f32 *, 0x2D0) = (f32) M2C_FIELD(arg1, f32 *, 0x19C);
    M2C_FIELD(arg0, f32 *, 0x2D4) = (f32) M2C_FIELD(arg1, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x2D8) = (f32) M2C_FIELD(arg1, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x2DC) = (f32) M2C_FIELD(arg1, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x2E0) = (f32) M2C_FIELD(arg1, f32 *, 0x1AC);
    M2C_FIELD(arg0, f32 *, 0x2E4) = (f32) M2C_FIELD(arg1, f32 *, 0x1B0);
    M2C_FIELD(arg0, f32 *, 0x2E8) = (f32) M2C_FIELD(arg1, f32 *, 0x1B4);
    M2C_FIELD(arg0, f32 *, 0x2EC) = (f32) M2C_FIELD(arg1, f32 *, 0x1B8);
    M2C_FIELD(arg0, f32 *, 0x2F0) = (f32) M2C_FIELD(arg1, f32 *, 0x1BC);
    M2C_FIELD(arg0, f32 *, 0x2F4) = (f32) M2C_FIELD(arg1, f32 *, 0x1C0);
    M2C_FIELD(arg0, f32 *, 0x2F8) = (f32) M2C_FIELD(arg1, f32 *, 0x1C4);
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg1, f32 *, 0x1C8);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg1, f32 *, 0x1CC);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg1, f32 *, 0x1D0);
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) M2C_FIELD(arg1, f32 *, 0x1D4);
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) M2C_FIELD(arg1, f32 *, 0x1D8);
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) M2C_FIELD(arg1, f32 *, 0x1DC);
    M2C_FIELD(arg0, f32 *, 0x314) = (f32) M2C_FIELD(arg1, f32 *, 0x1E0);
    M2C_FIELD(arg0, f32 *, 0x318) = (f32) M2C_FIELD(arg1, f32 *, 0x1E4);
    M2C_FIELD(arg0, f32 *, 0x31C) = (f32) M2C_FIELD(arg1, f32 *, 0x1E8);
    M2C_FIELD(arg0, f32 *, 0x320) = (f32) M2C_FIELD(arg1, f32 *, 0x1EC);
    M2C_FIELD(arg0, f32 *, 0x324) = (f32) M2C_FIELD(arg1, f32 *, 0x1F0);
    M2C_FIELD(arg0, f32 *, 0x328) = (f32) M2C_FIELD(arg1, f32 *, 0x1F4);
    M2C_FIELD(arg0, f32 *, 0x32C) = (f32) M2C_FIELD(arg1, f32 *, 0x1F8);
    M2C_FIELD(arg0, f32 *, 0x330) = (f32) M2C_FIELD(arg1, f32 *, 0x1FC);
    M2C_FIELD(arg0, f32 *, 0x334) = (f32) M2C_FIELD(arg1, f32 *, 0x200);
    M2C_FIELD(arg0, f32 *, 0x338) = (f32) M2C_FIELD(arg1, f32 *, 0x204);
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) M2C_FIELD(arg1, f32 *, 0x208);
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) M2C_FIELD(arg1, f32 *, 0x20C);
}
