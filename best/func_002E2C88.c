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

M2C_UNK func_00245CD0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0024AC20(s32, M2C_UNK);                /* extern */
M2C_UNK func_0024D6B0(s32, M2C_UNK);                /* extern */
M2C_UNK func_003F93CC(s32, s32, M2C_UNK);           /* extern */

void func_002E2C88(void *arg0) {
    s32 temp_18;
    void *temp_17;
    s32 temp_18_2;
    s32 temp_16;
    register int temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_16_2;
    void *temp_19;

    temp_19 = arg0 + 0x1C;
    temp_17 = arg0 + 0x10;
    temp_16 = M2C_FIELD(temp_17, s32 *, 4);
    temp_18 = M2C_FIELD(arg0, s32 *, 0x10);
    func_003F93CC(temp_18, temp_16, 0);
    M2C_FIELD(temp_17, s32 *, 4) = (s32) (M2C_FIELD(temp_17, s32 *, 4) - (temp_16 - temp_18));
    temp_18_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_16_2 = M2C_FIELD(temp_19, s32 *, 4);
    func_003F93CC(temp_18_2, temp_16_2, 0);
    M2C_FIELD(temp_19, s32 *, 4) = (s32) (M2C_FIELD(temp_19, s32 *, 4) - (temp_16_2 - temp_18_2));
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_4) {
        func_0024D6B0(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_4_2) {
        func_00245CD0(temp_4_2, 3);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4_3 != 0) {
        func_0024AC20(temp_4_3, 3);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
