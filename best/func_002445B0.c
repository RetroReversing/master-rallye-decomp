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

extern M2C_UNK D_00426508;

void *func_002445B0(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_6;
    void *temp_7;
    void *temp_9;

    temp_10 = arg0 + 0x1C;
    temp_11 = arg0 + 0x28;
    temp_6 = arg0 + 0x34;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x1C) = 0;
    temp_13 = arg0 + 0x48;
    M2C_FIELD(temp_10, M2C_UNK32 *, 4) = 0;
    temp_7 = arg0 + 0x54;
    M2C_FIELD(temp_10, M2C_UNK32 *, 8) = 0;
    temp_14 = arg0 + 0x68;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = 0;
    temp_16 = arg1 + 0x1C;
    M2C_FIELD(temp_11, M2C_UNK32 *, 4) = 0;
    temp_17 = arg1 + 0x28;
    M2C_FIELD(temp_11, M2C_UNK32 *, 8) = 0;
    temp_9 = arg1 + 0x34;
    temp_18 = arg1 + 0x48;
    temp_12 = arg1 + 0x54;
    temp_19 = arg1 + 0x68;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = 0;
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_6, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x48) = 0;
    M2C_FIELD(temp_13, M2C_UNK32 *, 4) = 0;
    M2C_FIELD(temp_13, M2C_UNK32 *, 8) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_7, s32 *, 0x10) = -1;
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_7, M2C_UNK32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x68) = 0;
    M2C_FIELD(temp_14, M2C_UNK32 *, 4) = 0;
    M2C_FIELD(temp_14, M2C_UNK32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x1C) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0x1C);
    M2C_FIELD(temp_10, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_16, M2C_UNK32 *, 4);
    M2C_FIELD(temp_10, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_16, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0x28);
    M2C_FIELD(temp_11, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_17, M2C_UNK32 *, 4);
    M2C_FIELD(temp_11, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_17, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_6, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_9, M2C_UNK32 *, 0xC);
    M2C_FIELD(temp_6, s32 *, 0x10) = (s32) M2C_FIELD(temp_9, s32 *, 0x10);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x48) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0x48);
    M2C_FIELD(temp_13, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_18, M2C_UNK32 *, 4);
    M2C_FIELD(temp_13, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_18, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_7, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_12, M2C_UNK32 *, 0xC);
    M2C_FIELD(temp_7, s32 *, 0x10) = (s32) M2C_FIELD(temp_12, s32 *, 0x10);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x68) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0x68);
    M2C_FIELD(temp_14, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_19, M2C_UNK32 *, 4);
    M2C_FIELD(temp_14, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_19, M2C_UNK32 *, 8);
    return arg0;
}
