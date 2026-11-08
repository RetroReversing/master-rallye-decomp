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

void func_0027E5B8(void *arg0, s32 arg1) {
    void **var_16;
    void *temp_2;
    void *temp_3;
    void *temp_6;

    temp_3 = arg0 + 0xC;
    var_16 = M2C_FIELD(arg0, void ***, 0xC);
    if (var_16 != M2C_FIELD(temp_3, s32 *, 4)) {
        do {
            temp_6 = *var_16;
            var_16 += 4;
            temp_2 = M2C_FIELD(temp_6, void **, 8);
            M2C_FIELD(temp_2, M2C_UNK (**)(void *, s32, void *), 0x34)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x30), arg1, temp_6);
        } while (var_16 != M2C_FIELD(temp_3, s32 *, 4));
    }
}
