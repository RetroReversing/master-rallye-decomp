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

s32 func_003EEDB0();
s32 func_003EEF60();
s32 func_003F931C();

s32 func_003EF2A8(s32 arg0, s32 arg1) {
    s32 var_18;
    s32 var_2;
    u32 temp_3;
    u32 temp_4;
    void *temp_5;

    var_18 = 0;
    M2C_BREAK(0);
    if (arg1 == 0) {
        func_003EEF60();
        goto block_10;
    }
    if (arg0 == 0) {
        var_18 = func_003EEDB0(arg1);
        goto block_10;
    }
    temp_5 = arg0 - 0xC;
    temp_4 = (arg1 + 0x8B) & 0xFFFFFF80;
    if (M2C_FIELD(temp_5, s32 *, 8) != 0xDEADF00D) {
        M2C_BREAK(0);
    }
    temp_3 = M2C_FIELD(temp_5, u32 *, 4);
    var_2 = 0;
    if (temp_4 >= temp_3) {
        var_2 = 0;
        if (temp_3 < temp_4) {
            var_18 = func_003EEDB0(arg1, temp_5);
            if (var_18 != 0) {
                func_003F931C(var_18, arg0, arg1);
                func_003EEF60(arg0);
            }
block_10:
            var_2 = var_18;
        }
    }
    return var_2;
}
