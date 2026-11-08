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

s32 func_003F931C();

s32 func_002C21D0(s32 arg0, void *arg1, void *arg2) {
    s32 temp_19;
    s32 temp_4;
    s32 temp_7;
    s32 var_2;
    s32 var_3;
    u32 temp_6;

    temp_4 = M2C_FIELD(arg2, s32 *, 0x54);
    var_3 = temp_4 - M2C_FIELD(arg2, s32 *, 0x50);
    if (var_3 < 0) {
        var_3 += M2C_FIELD(arg2, s32 *, 0x4C);
    }
    if ((var_3 == 0) && (temp_4 == M2C_FIELD(arg2, s32 *, 0x58))) {
        var_3 = M2C_FIELD(arg2, s32 *, 0x4C);
    }
    temp_6 = M2C_FIELD(arg1, u32 *, 0xC);
    var_2 = 0;
    if ((u32) var_3 >= temp_6) {
        temp_7 = M2C_FIELD(arg2, s32 *, 0x50);
        temp_19 = ((temp_7 - M2C_FIELD(arg2, s32 *, 0x48)) + temp_6) - M2C_FIELD(arg2, s32 *, 0x4C);
        if (temp_19 > 0) {
            func_003F931C((temp_7 & 0x0FFFFFFF) | 0x20000000, M2C_FIELD(arg1, s32 *, 8), temp_6 - temp_19, temp_7);
            func_003F931C((M2C_FIELD(arg2, s32 *, 0x48) & 0x0FFFFFFF) | 0x20000000, M2C_FIELD(arg1, s32 *, 8) + (M2C_FIELD(arg1, u32 *, 0xC) - temp_19), temp_19);
            M2C_FIELD(arg2, s32 *, 0x50) = (s32) (M2C_FIELD(arg2, s32 *, 0x48) + temp_19);
        } else {
            func_003F931C((temp_7 & 0x0FFFFFFF) | 0x20000000, M2C_FIELD(arg1, s32 *, 8), (s32) temp_6, temp_7);
            M2C_FIELD(arg2, s32 *, 0x50) += M2C_FIELD(arg1, u32 *, 0xC);
        }
        var_2 = 1;
    }
    return var_2;
}
