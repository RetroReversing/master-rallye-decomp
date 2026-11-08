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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001FD0D8();                            /* extern */
void *func_001FDBA8(s32, s32 *);                    /* extern */
s32 func_001FDE60();                                /* extern */

void func_001FCC58(void *arg0, s32 *arg1, s32 arg2) {
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    f32 spC;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_2_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    func_001FD0D8();
    temp_2 = func_001FDBA8(func_001FDE60(), arg1);
    if ((temp_2 != NULL) && (arg2 >= 0) && ((u32) arg2 < (u32) ((s32) ((M2C_FIELD(temp_2, s32 *, 4) - M2C_FIELD(temp_2, s32 *, 0)) * 0xCCCCCCCD) >> 4))) {
        temp_2_2 = D_002AD408(0x50);
        sp4 = 0;
        temp_8 = temp_2_2 + 0x10;
        temp_9 = temp_2_2 + 0x20;
        temp_11 = temp_2_2 + 0x30;
        M2C_FIELD(temp_2_2, s32 *, 0) = 0;
        temp_12 = temp_2_2 + 0x40;
        M2C_FIELD(temp_2_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2_2, f32 *, 0x10) = 1.0f;
        M2C_FIELD(temp_8, M2C_UNK32 *, 4) = sp4;
        M2C_FIELD(temp_8, M2C_UNK32 *, 8) = sp4;
        M2C_FIELD(temp_8, M2C_UNK32 *, 0xC) = sp4;
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x20) = sp4;
        M2C_FIELD(temp_9, f32 *, 4) = 1.0f;
        M2C_FIELD(temp_9, M2C_UNK32 *, 8) = sp4;
        M2C_FIELD(temp_9, M2C_UNK32 *, 0xC) = sp4;
        M2C_FIELD(arg0, void **, 0) = temp_2_2;
        M2C_FIELD(arg0, s32 *, 4) = arg2;
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x30) = sp4;
        M2C_FIELD(temp_11, f32 *, 8) = 1.0f;
        M2C_FIELD(temp_11, M2C_UNK32 *, 4) = sp4;
        M2C_FIELD(temp_11, M2C_UNK32 *, 0xC) = sp4;
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x40) = sp4;
        M2C_FIELD(arg0, s32 *, 8) = (s32) *arg1;
        M2C_FIELD(temp_12, f32 *, 0xC) = 1.0f;
        M2C_FIELD(temp_12, M2C_UNK32 *, 8) = sp4;
        M2C_FIELD(temp_12, M2C_UNK32 *, 4) = sp4;
        spC = 1.0f;
        sp8 = sp4;
        temp_4 = M2C_FIELD(temp_2, s32 *, 0) + (arg2 * 0x50);
        temp_5 = temp_4 + 0x10;
        temp_6 = temp_4 + 0x20;
        temp_7 = temp_4 + 0x30;
        M2C_FIELD(temp_2_2, s32 *, 0) = (s32) M2C_FIELD(temp_4, s32 *, 0);
        temp_10 = temp_4 + 0x40;
        M2C_FIELD(temp_2_2, s32 *, 4) = (s32) M2C_FIELD(temp_4, s32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 0x10) = (f32) M2C_FIELD(temp_4, f32 *, 0x10);
        M2C_FIELD(temp_8, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_5, M2C_UNK32 *, 4);
        M2C_FIELD(temp_8, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_5, M2C_UNK32 *, 8);
        M2C_FIELD(temp_8, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_5, M2C_UNK32 *, 0xC);
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_4, M2C_UNK32 *, 0x20);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_9, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_6, M2C_UNK32 *, 8);
        M2C_FIELD(temp_9, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_6, M2C_UNK32 *, 0xC);
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x30) = (M2C_UNK32) M2C_FIELD(temp_4, M2C_UNK32 *, 0x30);
        M2C_FIELD(temp_11, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_7, M2C_UNK32 *, 4);
        M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(temp_11, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_7, M2C_UNK32 *, 0xC);
        M2C_FIELD(temp_2_2, M2C_UNK32 *, 0x40) = (M2C_UNK32) M2C_FIELD(temp_4, M2C_UNK32 *, 0x40);
        M2C_FIELD(temp_12, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_10, M2C_UNK32 *, 4);
        M2C_FIELD(temp_12, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_10, M2C_UNK32 *, 8);
        M2C_FIELD(temp_12, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
    }
}
