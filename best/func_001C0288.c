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

extern M2C_UNK D_00472F10;

void *func_001C0288(void *arg0) {
    s32 var_5;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *var_4;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00472F10;
    temp_3 = arg0 + 4;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    temp_4 = arg0 + 0x10;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    temp_5 = arg0 + 0x1C;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    var_4 = arg0 + 0x4C;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    var_5 = 1;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    M2C_FIELD(arg0, s32 *, 0x74) = -2;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = -2;
    M2C_FIELD(arg0, s32 *, 0x6C) = -2;
    M2C_FIELD(arg0, s32 *, 0x70) = -2;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    do {
        M2C_FIELD(var_4, s32 *, -0x10) = -1;
        var_5 -= 1;
        M2C_FIELD(var_4, s32 *, 8) = 0;
        M2C_FIELD(var_4, s32 *, -8) = 0;
        M2C_FIELD(var_4, s32 *, 0) = 0;
        var_4 += 4;
    } while (var_5 >= 0);
    return arg0;
}
