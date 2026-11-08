/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK32 *D_002AD408(M2C_UNK);                     /* extern */
M2C_UNK32 *func_001EE218(M2C_UNK32 *, void *);      /* extern */

void func_001E5E10(void *arg0, void *arg1) {
    M2C_UNK32 *temp_2;
    M2C_UNK32 *temp_2_2;
    M2C_UNK32 *temp_2_3;
    M2C_UNK32 *temp_2_4;
    M2C_UNK32 *temp_2_5;
    M2C_UNK32 *temp_2_6;
    M2C_UNK32 *temp_2_7;
    u32 temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, u32 *, 8) = (u32) M2C_FIELD(arg1, u32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    temp_3 = M2C_FIELD(arg1, u32 *, 8);
    switch (temp_3) {
    case 0:
        temp_2 = D_002AD408(4);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2;
        *temp_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), M2C_UNK32 *, 0);
        /* fallthrough */
    case 1:
        temp_2_2 = D_002AD408(4);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_2;
        *temp_2_2 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), M2C_UNK32 *, 0);
        return;
    case 3:
        temp_2_3 = D_002AD408(0x40);
        temp_3_2 = M2C_FIELD(arg1, void **, 4);
        temp_5 = temp_2_3 + 0x10;
        temp_7 = temp_2_3 + 0x20;
        temp_8 = temp_2_3 + 0x30;
        temp_4 = temp_3_2 + 0x10;
        temp_6 = temp_3_2 + 0x20;
        temp_9 = temp_3_2 + 0x30;
        M2C_FIELD(temp_2_3, M2C_UNK32 *, 0) = M2C_FIELD(temp_3_2, M2C_UNK32 *, 0);
        M2C_FIELD(temp_2_3, void **, 4) = (void *) M2C_FIELD(temp_3_2, void **, 4);
        M2C_FIELD(temp_2_3, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
        M2C_FIELD(temp_2_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_3_2, f32 *, 0xC);
        M2C_FIELD(temp_2_3, f32 *, 0x10) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x10);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
        M2C_FIELD(temp_2_3, f32 *, 0x20) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x20);
        M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
        M2C_FIELD(temp_2_3, f32 *, 0x30) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x30);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_3;
        return;
    case 5:
        temp_2_4 = D_002AD408(0x10);
        temp_3_3 = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_2_4, M2C_UNK32 *, 0) = M2C_FIELD(temp_3_3, M2C_UNK32 *, 0);
        M2C_FIELD(temp_2_4, void **, 4) = (void *) M2C_FIELD(temp_3_3, void **, 4);
        M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_3, f32 *, 8);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_4;
        M2C_FIELD(temp_2_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_3_3, f32 *, 0xC);
        return;
    case 6:
        temp_2_5 = D_002AD408(0xC);
        temp_3_4 = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_2_5, M2C_UNK32 *, 0) = M2C_FIELD(temp_3_4, M2C_UNK32 *, 0);
        M2C_FIELD(temp_2_5, void **, 4) = (void *) M2C_FIELD(temp_3_4, void **, 4);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_5;
        M2C_FIELD(temp_2_5, f32 *, 8) = (f32) M2C_FIELD(temp_3_4, f32 *, 8);
        return;
    case 7:
        temp_2_6 = D_002AD408(8);
        temp_3_5 = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_2_6, M2C_UNK32 *, 0) = M2C_FIELD(temp_3_5, M2C_UNK32 *, 0);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_6;
        M2C_FIELD(temp_2_6, void **, 4) = (void *) M2C_FIELD(temp_3_5, void **, 4);
        return;
    case 9:
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = func_001EE218(D_002AD408(0xC), M2C_FIELD(arg1, void **, 4));
        return;
    case 10:
        temp_5_2 = M2C_FIELD(arg1, void **, 4);
        temp_3_6 = M2C_FIELD(temp_5_2, void **, 4);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = M2C_FIELD(temp_3_6, M2C_UNK32 *(**)(void *, void *), 0x1C)(temp_5_2 + M2C_FIELD(temp_3_6, s16 *, 0x18), temp_5_2);
        return;
    case 2:
    case 4:
    case 8:
    case 11:
        temp_2_7 = D_002AD408(4);
        M2C_FIELD(arg0, M2C_UNK32 **, 4) = temp_2_7;
        *temp_2_7 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), M2C_UNK32 *, 0);
        /* fallthrough */
    default:
        return;
    }
}
