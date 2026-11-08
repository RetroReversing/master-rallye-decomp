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

s32 *func_002B1FC0();
s32 *func_003D2910();

void *func_001DD3D8(void *arg0) {
    s32 *temp_2;
    s32 *temp_3;
    s32 *var_2;
    s32 *var_3;

    M2C_FIELD(arg0, s32 *, 8) = 0x100;
    M2C_FIELD(arg0, s32 *, 0x10) = 4;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 0x100;
    M2C_FIELD(arg0, s32 *, 0xC) = 4;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x40;
    var_2 = func_002B1FC0(0x18, 4, 0x40);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0x18);
    }
    M2C_FIELD(arg0, s32 **, 0x20) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, s32 **, 0x20);
    M2C_FIELD(temp_2, s32 **, 4) = temp_2;
    var_3 = func_002B1FC0(0x18);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0x18);
    }
    M2C_FIELD(arg0, s32 **, 0x24) = var_3;
    *var_3 = var_3;
    temp_3 = M2C_FIELD(arg0, s32 **, 0x24);
    M2C_FIELD(temp_3, s32 **, 4) = temp_3;
    return arg0;
}
