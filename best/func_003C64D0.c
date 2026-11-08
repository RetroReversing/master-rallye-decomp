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

M2C_UNK func_003C65B0(void *, s32, s32, s32, s32);  /* extern */
extern M2C_UNK D_00488628;
extern M2C_UNK D_00488690;

void *func_003C64D0(void *arg0, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_3;
    s32 var_3_2;
    void *var_2;
    void *var_2_2;

    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00488628;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    var_2 = arg0 + 8;
    var_3 = 3;
    do {
        M2C_FIELD(var_2, s32 *, 0) = 0;
        var_3 -= 1;
        M2C_FIELD(var_2, s32 *, 4) = 0;
        M2C_FIELD(var_2, s32 *, 8) = 0;
        M2C_FIELD(var_2, s32 *, 0xC) = 0;
        var_2 += 0x10;
    } while (var_3 != -1);
    var_2_2 = arg0 + 0x48;
    var_3_2 = 8;
    do {
        M2C_FIELD(var_2_2, s32 *, 0) = 0;
        var_3_2 -= 1;
        M2C_FIELD(var_2_2, s32 *, 4) = 0;
        M2C_FIELD(var_2_2, s32 *, 8) = 0;
        M2C_FIELD(var_2_2, s32 *, 0xC) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x10) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x14) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x18) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x1C) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x20) = 0;
        M2C_FIELD(var_2_2, s32 *, 0x24) = 0;
        var_2_2 += 0x28;
    } while (var_3_2 != -1);
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1B0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00488690;
    func_003C65B0(arg0, arg4, arg5, arg2, arg3);
    return arg0;
}
