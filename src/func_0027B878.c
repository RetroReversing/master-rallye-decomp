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

void *func_0027B878(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_7 = arg1 + 0x20;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    temp_8 = arg0 + 0x20;
    temp_10 = arg1 + 0x98;
    temp_9 = arg0 + 0x98;
    temp_11 = arg1 + 0x114;
    temp_12 = arg0 + 0x114;
    temp_13 = arg1 + 0x134;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_14 = arg0 + 0x134;
    temp_15 = arg1 + 0x154;
    temp_16 = arg0 + 0x154;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg1, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg1, f32 *, 0x74);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) M2C_FIELD(arg1, f32 *, 0x78);
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg1, f32 *, 0x7C);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x80);
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(arg1, f32 *, 0x84);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg1, f32 *, 0x88);
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) M2C_FIELD(arg1, f32 *, 0x8C);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0x90);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(arg1, f32 *, 0x94);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 0x98);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) M2C_FIELD(arg1, f32 *, 0xA4);
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) M2C_FIELD(arg1, f32 *, 0xA8);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) M2C_FIELD(arg1, f32 *, 0xAC);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg1, f32 *, 0xB0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg1, f32 *, 0xB4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg1, f32 *, 0xB8);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg1, f32 *, 0xBC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(arg1, f32 *, 0xC0);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(arg1, f32 *, 0xC4);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg1, f32 *, 0xC8);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg1, f32 *, 0xCC);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(arg1, f32 *, 0xD0);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg1, f32 *, 0xD4);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) M2C_FIELD(arg1, f32 *, 0xD8);
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) M2C_FIELD(arg1, f32 *, 0xDC);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg1, f32 *, 0xE0);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg1, f32 *, 0xE4);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0xE8);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(arg1, f32 *, 0xEC);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg1, f32 *, 0xFC);
    M2C_FIELD(arg0, f32 *, 0x100) = (f32) M2C_FIELD(arg1, f32 *, 0x100);
    M2C_FIELD(arg0, s32 *, 0x104) = (s32) M2C_FIELD(arg1, s32 *, 0x104);
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) M2C_FIELD(arg1, f32 *, 0x108);
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) M2C_FIELD(arg1, f32 *, 0x10C);
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) M2C_FIELD(arg1, f32 *, 0x110);
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) M2C_FIELD(arg1, f32 *, 0x114);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x120) = (f32) M2C_FIELD(arg1, f32 *, 0x120);
    M2C_FIELD(arg0, f32 *, 0x124) = (f32) M2C_FIELD(arg1, f32 *, 0x124);
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(arg1, s32 *, 0x128);
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) M2C_FIELD(arg1, s32 *, 0x12C);
    M2C_FIELD(arg0, f32 *, 0x130) = (f32) M2C_FIELD(arg1, f32 *, 0x130);
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg1, f32 *, 0x134);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) M2C_FIELD(arg1, f32 *, 0x140);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) M2C_FIELD(arg1, s32 *, 0x144);
    M2C_FIELD(arg0, f32 *, 0x148) = (f32) M2C_FIELD(arg1, f32 *, 0x148);
    M2C_FIELD(arg0, f32 *, 0x14C) = (f32) M2C_FIELD(arg1, f32 *, 0x14C);
    M2C_FIELD(arg0, f32 *, 0x150) = (f32) M2C_FIELD(arg1, f32 *, 0x150);
    M2C_FIELD(arg0, f32 *, 0x154) = (f32) M2C_FIELD(arg1, f32 *, 0x154);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_15, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_15, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x160) = (f32) M2C_FIELD(arg1, f32 *, 0x160);
    M2C_FIELD(arg0, f32 *, 0x164) = (f32) M2C_FIELD(arg1, f32 *, 0x164);
    M2C_FIELD(arg0, f32 *, 0x168) = (f32) M2C_FIELD(arg1, f32 *, 0x168);
    M2C_FIELD(arg0, f32 *, 0x16C) = (f32) M2C_FIELD(arg1, f32 *, 0x16C);
    return arg0;
}
