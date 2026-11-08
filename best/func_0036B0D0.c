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

void func_0036B0D0(void *arg0) {
    u32 temp_3;
    u32 temp_4;
    u32 var_3;
    void *temp_5;

    temp_5 = M2C_FIELD(arg0, void **, 0x30);
    temp_4 = M2C_FIELD(temp_5, u32 *, 4);
    temp_3 = M2C_FIELD(temp_5, u32 *, 0);
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x30;
        do {
            var_3 += 0x30;
        } while (var_3 < temp_4);
    }
    M2C_FIELD(temp_5, u32 *, 4) = (u32) (temp_4 - (temp_4 - temp_3));
}
