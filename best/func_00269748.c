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

void func_00269748(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_17;
    s32 var_16;
    s32 var_16_2;
    s32 var_17;
    void **var_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_6;
    void *temp_6_2;

    var_17 = 0;
    var_16 = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (arg1 > 0) {
        var_4 = M2C_FIELD(arg0, void ***, 0x10);
        var_16_2 = arg1;
        do {
            temp_3 = *var_4;
            var_16_2 -= 1;
            var_4 += 4;
            var_17 += M2C_FIELD(temp_3, s32 *, 0x10);
        } while (var_16_2 != 0);
        var_16 = arg1;
    }
    temp_16 = var_16 * 4;
    temp_17 = var_17 * 4;
    temp_6 = *(M2C_FIELD(arg0, void ***, 0x10) + temp_16);
    temp_2 = M2C_FIELD(temp_6, void **, 0x14);
    M2C_FIELD(temp_2, M2C_UNK (**)(void *, s32, void *), 0x1C)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20) + temp_17, temp_6);
    temp_6_2 = *(M2C_FIELD(arg0, void ***, 0x10) + temp_16);
    temp_2_2 = M2C_FIELD(temp_6_2, void **, 0x14);
    M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, s32, void *), 0x24)(temp_6_2 + M2C_FIELD(temp_2_2, s16 *, 0x20), M2C_FIELD(arg0, s32 *, 0x20) + temp_17, temp_6_2);
}
