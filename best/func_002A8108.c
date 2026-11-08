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

extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_0047D5F0;

void *func_002A8108(void *arg0, s32 *arg1) {
    s32 *var_3;
    s32 var_8;
    void *temp_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    temp_6 = arg0 + 0x84;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    temp_5 = arg0 + 0x64;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
    temp_2 = arg0 + 0xA4;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047D5F0;
    temp_4 = arg0 + 0xC4;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_8 = 9;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    var_3 = arg0 + 0x30;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_5, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0x64) = 2.0f;
    M2C_FIELD(temp_5, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_5, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_5, f32 *, 8) = 10.0f;
    M2C_FIELD(temp_5, s32 *, 0xC) = 0;
    M2C_FIELD(temp_5, s32 *, 0x18) = 0;
    M2C_FIELD(temp_6, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0x84) = 2.0f;
    M2C_FIELD(temp_6, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 8) = 10.0f;
    M2C_FIELD(temp_6, s32 *, 0xC) = 0;
    M2C_FIELD(temp_6, s32 *, 0x18) = 0;
    M2C_FIELD(temp_2, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0xA4) = 2.0f;
    M2C_FIELD(temp_2, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_2, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_2, f32 *, 8) = 10.0f;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 0x18) = 0;
    M2C_FIELD(temp_4, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, f32 *, 0xC4) = 2.0f;
    M2C_FIELD(temp_4, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_4, f32 *, 8) = 10.0f;
    M2C_FIELD(temp_4, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_4, s32 *, 0xC) = 0;
    M2C_FIELD(temp_4, s32 *, 0x18) = 0;
    do {
        *var_3 = 0;
        var_8 -= 1;
        var_3 -= 4;
    } while (var_8 >= 0);
    return arg0;
}
