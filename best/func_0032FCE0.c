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

M2C_UNK func_00318E10(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_003303C0();                            /* extern */
extern M2C_UNK D_0042D690;
extern u16 D_0042DA10;

void func_0032FCE0(void *arg0) {
    s32 temp_6;
    s32 temp_7;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_3_3;
    u32 temp_4;
    u32 temp_4_2;
    u32 temp_4_3;
    u32 var_3;
    u32 var_3_2;
    u32 var_3_3;
    void *temp_10;
    void *temp_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_8;
    void *temp_9;

    func_003303C0();
    func_00318E10(((s16) D_0042DA10 * 0xE0) + &D_0042D690, M2C_FIELD(arg0, void **, 0x468), 0xE0);
    temp_5 = M2C_FIELD(arg0, void **, 0x468);
    temp_8 = temp_5 + 8;
    temp_4 = M2C_FIELD(temp_8, u32 *, 4);
    temp_3 = M2C_FIELD(temp_5, u32 *, 8);
    temp_9 = temp_5 + 0x14;
    temp_10 = temp_5 + 0x20;
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x18;
        do {
            var_3 += 0x18;
        } while (var_3 < temp_4);
    }
    M2C_FIELD(temp_8, u32 *, 4) = (u32) (temp_4 - (temp_4 - temp_3));
    temp_4_2 = M2C_FIELD(temp_9, u32 *, 4);
    temp_3_2 = M2C_FIELD(temp_5, u32 *, 0x14);
    temp_7 = temp_4_2 - temp_3_2;
    if (temp_3_2 < temp_4_2) {
        var_3_2 = temp_3_2 + 8;
        do {
            var_3_2 += 8;
        } while (var_3_2 < temp_4_2);
    }
    M2C_FIELD(temp_9, u32 *, 4) = (u32) (temp_4_2 - temp_7);
    temp_4_3 = M2C_FIELD(temp_10, u32 *, 4);
    temp_3_3 = M2C_FIELD(temp_5, u32 *, 0x20);
    temp_6 = temp_4_3 - temp_3_3;
    if (temp_3_3 < temp_4_3) {
        var_3_3 = temp_3_3 + 8;
        do {
            var_3_3 += 8;
        } while (var_3_3 < temp_4_3);
    }
    M2C_FIELD(temp_10, u32 *, 4) = (u32) (temp_4_3 - temp_6);
    temp_5_2 = M2C_FIELD(arg0, void **, 0x30);
    temp_2 = M2C_FIELD(temp_5_2, void **, 0x148);
    M2C_FIELD(temp_2, M2C_UNK (**)(void *, void *, s32, s32, void *, void *, void *), 0x2C)(temp_5_2 + M2C_FIELD(temp_2, s16 *, 0x28), temp_5_2, temp_6, temp_7, temp_8, temp_9, temp_10);
}
