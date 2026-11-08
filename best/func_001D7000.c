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

void func_001D7000(void *arg0) {
    u32 temp_3;
    u32 temp_5;
    u32 var_3;

    temp_5 = M2C_FIELD(arg0, u32 *, 4);
    temp_3 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_3 < temp_5) {
        var_3 = temp_3 + 0x24;
        do {
            var_3 += 0x24;
        } while (var_3 < temp_5);
    }
    M2C_FIELD(arg0, u32 *, 4) = (u32) (temp_5 - (temp_5 - temp_3));
}
