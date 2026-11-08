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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK D_002AD530(s32);                            /* extern */
M2C_UNK func_00262D58(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_004737E0;

void func_001A4228(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_12;
    s32 temp_4_13;
    s32 temp_4_14;
    s32 temp_4_15;
    s32 temp_4_16;
    s32 temp_4_17;
    s32 temp_4_18;
    s32 temp_4_19;
    s32 temp_4_20;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;
    s32 temp_4_8;
    s32 temp_4_9;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_004737E0;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4 != 0) {
        D_002AD530(temp_4);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_4_2 != 0) {
        D_002AD530(temp_4_2);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_4_3 != 0) {
        D_002AD530(temp_4_3);
    }
    temp_4_4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_4_4 != 0) {
        D_002AD530(temp_4_4);
    }
    temp_4_5 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_4_5 != 0) {
        D_002AD530(temp_4_5);
    }
    temp_4_6 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_4_6 != 0) {
        D_002AD530(temp_4_6);
    }
    temp_4_7 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_4_7 != 0) {
        D_002AD530(temp_4_7);
    }
    temp_4_8 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_4_8 != 0) {
        D_002AD530(temp_4_8);
    }
    temp_4_9 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4_9 != 0) {
        D_002AD530(temp_4_9);
    }
    temp_4_10 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_4_10 != 0) {
        D_002AD530(temp_4_10);
    }
    temp_4_11 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_4_11 != 0) {
        D_002AD530(temp_4_11);
    }
    temp_4_12 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_4_12 != 0) {
        D_002AD530(temp_4_12);
    }
    temp_4_13 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_4_13 != 0) {
        D_002AD530(temp_4_13);
    }
    temp_4_14 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_4_14 != 0) {
        D_002AD530(temp_4_14);
    }
    temp_4_15 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_4_15 != 0) {
        D_002AD530(temp_4_15);
    }
    temp_4_16 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_4_16 != 0) {
        D_002AD530(temp_4_16);
    }
    temp_4_17 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_4_17 != 0) {
        D_002AD530(temp_4_17);
    }
    temp_4_18 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_4_18 != 0) {
        D_002AD530(temp_4_18);
    }
    temp_4_19 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_4_19 != 0) {
        D_002AD530(temp_4_19);
    }
    temp_4_20 = M2C_FIELD(arg0, s32 *, 0x74);
    if (temp_4_20 != 0) {
        func_00262D58(temp_4_20, 3);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
