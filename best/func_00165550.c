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

s32 func_00155190(s32, M2C_UNK, f32 *);             /* extern */
M2C_UNK func_001D4040(M2C_UNK *);                   /* extern */
M2C_UNK func_002644E0(void *);                      /* extern */
M2C_UNK func_003F93CC(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK D_0044F638;

void *func_00165550(void *arg0) {
    f32 sp40;
    s32 temp_16_2;
    s32 temp_17_2;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_3_3;
    u32 temp_4;
    u32 temp_4_2;
    u32 temp_4_3;
    u32 var_3;
    u32 var_3_2;
    u32 var_3_3;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_21;

    temp_21 = arg0 + 0x2C;
    temp_19 = arg0 + 0x38;
    temp_18 = arg0 + 0x14;
    temp_17 = arg0 + 0x20;
    temp_16 = arg0 + 8;
    func_001D4040(&D_0044F638);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
    M2C_FIELD(temp_16, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(temp_16, s32 *, 4) = 0;
    M2C_FIELD(temp_16, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    sp40 = 0.0f;
    M2C_FIELD(temp_16, s32 *, 4) = func_00155190(M2C_FIELD(arg0, s32 *, 8), 0, &sp40);
    M2C_FIELD(arg0, u32 *, 0x14) = 0U;
    M2C_FIELD(temp_18, u32 *, 4) = 0U;
    M2C_FIELD(temp_18, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(temp_17, u32 *, 4) = 0U;
    M2C_FIELD(temp_17, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    M2C_FIELD(temp_21, u32 *, 4) = 0U;
    M2C_FIELD(temp_21, s32 *, 8) = 0;
    func_002644E0(temp_19);
    M2C_FIELD(arg0, f32 *, 0x6C) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x70) = 0x258;
    M2C_FIELD(arg0, f32 *, 0x60) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    temp_4 = M2C_FIELD(temp_21, u32 *, 4);
    temp_3 = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x20;
        do {
            var_3 += 0x20;
        } while (var_3 < temp_4);
    }
    M2C_FIELD(temp_21, u32 *, 4) = (u32) (temp_4 - (temp_4 - temp_3));
    temp_4_2 = M2C_FIELD(temp_18, u32 *, 4);
    temp_3_2 = M2C_FIELD(arg0, u32 *, 0x14);
    if (temp_3_2 < temp_4_2) {
        var_3_2 = temp_3_2 + 0x20;
        do {
            var_3_2 += 0x20;
        } while (var_3_2 < temp_4_2);
    }
    M2C_FIELD(temp_18, u32 *, 4) = (u32) (temp_4_2 - (temp_4_2 - temp_3_2));
    temp_4_3 = M2C_FIELD(temp_17, u32 *, 4);
    temp_3_3 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_3_3 < temp_4_3) {
        var_3_3 = temp_3_3 + 0x20;
        do {
            var_3_3 += 0x20;
        } while (var_3_3 < temp_4_3);
    }
    M2C_FIELD(temp_17, u32 *, 4) = (u32) (temp_4_3 - (temp_4_3 - temp_3_3));
    temp_17_2 = M2C_FIELD(arg0, s32 *, 8);
    temp_16_2 = M2C_FIELD(temp_16, s32 *, 4);
    func_003F93CC(temp_17_2, temp_16_2, 0);
    M2C_FIELD(temp_16, s32 *, 4) = (s32) (M2C_FIELD(temp_16, s32 *, 4) - (temp_16_2 - temp_17_2));
    M2C_FIELD(temp_19, f32 *, 0xC) = 50.0f;
    return arg0;
}
