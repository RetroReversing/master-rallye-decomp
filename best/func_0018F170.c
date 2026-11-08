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

extern M2C_UNK D_004266A8;
extern M2C_UNK D_004266D0;

void func_0018F170(void *arg0) {
    u32 temp_3_4;
    u32 temp_4_2;
    u32 temp_4_3;
    u32 temp_5_3;
    u32 var_3;
    u32 var_4;
    void *temp_10;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_5;
    void *temp_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *temp_7_4;
    void *temp_9;

    temp_7 = &D_004266A8 + 0xC;
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) = 0;
    temp_9 = &D_004266D0 + 0xC;
    temp_10 = &D_004266D0 + 0x24;
    temp_2 = M2C_FIELD(arg0, void **, 8);
    temp_5 = temp_2 + 0x28;
    temp_3 = temp_2 + 0x34;
    M2C_FIELD(temp_2, f32 *, 0x28) = (f32) M2C_FIELD(&D_004266A8, f32 *, 0);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(&D_004266A8, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(&D_004266A8, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 0x34) = (f32) M2C_FIELD(&D_004266A8, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_5, s32 *, 0x18) = (s32) M2C_FIELD(&D_004266A8, s32 *, 0x18);
    M2C_FIELD(temp_5, s32 *, 0x1C) = (s32) M2C_FIELD(&D_004266A8, s32 *, 0x1C);
    M2C_FIELD(temp_5, f32 *, 0x24) = (f32) M2C_FIELD(&D_004266A8, f32 *, 0x24);
    temp_4 = M2C_FIELD(arg0, void **, 8);
    temp_5_2 = temp_4 + 0x50;
    temp_3_2 = temp_4 + 0x5C;
    M2C_FIELD(temp_4, f32 *, 0x50) = (f32) M2C_FIELD(&D_004266D0, f32 *, 0);
    temp_7_2 = temp_4 + 0x74;
    M2C_FIELD(temp_5_2, f32 *, 4) = (f32) M2C_FIELD(&D_004266D0, f32 *, 4);
    M2C_FIELD(temp_5_2, f32 *, 8) = (f32) M2C_FIELD(&D_004266D0, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0x5C) = (f32) M2C_FIELD(&D_004266D0, f32 *, 0xC);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_5_2, s32 *, 0x18) = (s32) M2C_FIELD(&D_004266D0, s32 *, 0x18);
    M2C_FIELD(temp_5_2, s32 *, 0x1C) = (s32) M2C_FIELD(&D_004266D0, s32 *, 0x1C);
    M2C_FIELD(temp_4, f32 *, 0x74) = (f32) M2C_FIELD(&D_004266D0, f32 *, 0x24);
    M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x80) = 0;
    temp_3_3 = M2C_FIELD(arg0, void **, 8);
    temp_7_3 = temp_3_3 + 0x84;
    temp_4_2 = M2C_FIELD(temp_7_3, u32 *, 4);
    temp_3_4 = M2C_FIELD(temp_3_3, u32 *, 0x84);
    if (temp_3_4 < temp_4_2) {
        var_3 = temp_3_4 + 0xC;
        do {
            var_3 += 0xC;
        } while (var_3 < temp_4_2);
    }
    M2C_FIELD(temp_7_3, u32 *, 4) = (u32) (temp_4_2 - (temp_4_2 - temp_3_4));
    temp_3_5 = M2C_FIELD(arg0, void **, 8);
    temp_7_4 = temp_3_5 + 0x90;
    temp_5_3 = M2C_FIELD(temp_7_4, u32 *, 4);
    temp_4_3 = M2C_FIELD(temp_3_5, u32 *, 0x90);
    if (temp_4_3 < temp_5_3) {
        var_4 = temp_4_3 + 0xC;
        do {
            var_4 += 0xC;
        } while (var_4 < temp_5_3);
    }
    M2C_FIELD(temp_7_4, u32 *, 4) = (u32) (temp_5_3 - (temp_5_3 - temp_4_3));
}
