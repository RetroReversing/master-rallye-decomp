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

s32 func_002027E8();
s32 *func_002B1FC0();
s32 *func_003D2910();

void *func_00201620(void *arg0) {
    s32 *temp_2_4;
    s32 *temp_3_3;
    s32 *var_2;
    s32 *var_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_5;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_002027E8(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_2 = arg0 + 0x18;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_3 = arg0 + 0x24;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    temp_5 = arg0 + 0x30;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    temp_2_2 = arg0 + 0x3C;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_2_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2_2, s32 *, 4) = 0;
    func_002027E8(arg0 + 0x48, temp_5);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    temp_2_3 = arg0 + 0x54;
    M2C_FIELD(temp_2_3, s32 *, 8) = 0;
    temp_3_2 = arg0 + 0x60;
    M2C_FIELD(temp_2_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(temp_3_2, s32 *, 8) = 0;
    M2C_FIELD(temp_3_2, s32 *, 4) = 0;
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, s32 **, 0x6C) = var_2;
    *var_2 = var_2;
    temp_2_4 = M2C_FIELD(arg0, s32 **, 0x6C);
    M2C_FIELD(temp_2_4, s32 **, 4) = temp_2_4;
    var_3 = func_002B1FC0(0xC);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, s32 **, 0x70) = var_3;
    *var_3 = var_3;
    temp_3_3 = M2C_FIELD(arg0, s32 **, 0x70);
    M2C_FIELD(temp_3_3, s32 **, 4) = temp_3_3;
    return arg0;
}
