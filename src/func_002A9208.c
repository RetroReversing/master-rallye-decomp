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

void *func_002A9208(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_7 = arg1 + 0x5C;
    temp_8 = arg0 + 0x5C;
    temp_10 = arg1 + 0x68;
    temp_9 = arg0 + 0x68;
    temp_11 = arg1 + 0x74;
    temp_12 = arg0 + 0x74;
    temp_13 = arg1 + 0x80;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    temp_14 = arg0 + 0x80;
    temp_16 = arg1 + 0x8C;
    temp_15 = arg0 + 0x8C;
    temp_17 = arg1 + 0x98;
    temp_18 = arg0 + 0x98;
    temp_19 = arg1 + 0xA4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_20 = arg0 + 0xA4;
    temp_22 = arg1 + 0xB0;
    temp_21 = arg0 + 0xB0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg1, f32 *, 0x74);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x80);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) M2C_FIELD(arg1, f32 *, 0x8C);
    M2C_FIELD(temp_15, f32 *, 4) = (f32) M2C_FIELD(temp_16, f32 *, 4);
    M2C_FIELD(temp_15, f32 *, 8) = (f32) M2C_FIELD(temp_16, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 0x98);
    M2C_FIELD(temp_18, f32 *, 4) = (f32) M2C_FIELD(temp_17, f32 *, 4);
    M2C_FIELD(temp_18, f32 *, 8) = (f32) M2C_FIELD(temp_17, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) M2C_FIELD(arg1, f32 *, 0xA4);
    M2C_FIELD(temp_20, f32 *, 4) = (f32) M2C_FIELD(temp_19, f32 *, 4);
    M2C_FIELD(temp_20, f32 *, 8) = (f32) M2C_FIELD(temp_19, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg1, f32 *, 0xB0);
    M2C_FIELD(temp_21, f32 *, 4) = (f32) M2C_FIELD(temp_22, f32 *, 4);
    M2C_FIELD(temp_21, f32 *, 8) = (f32) M2C_FIELD(temp_22, f32 *, 8);
    return arg0;
}
