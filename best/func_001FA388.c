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

M2C_UNK func_001F9ED0(s32, s32);                    /* extern */

void func_001FA388(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_17;
    s32 temp_2;
    s32 var_16;
    s32 var_5;

    temp_2 = *arg1 + (arg2 * 0x34);
    temp_17 = temp_2 + (arg3 * 0x34);
    var_16 = temp_2;
    if (var_16 != temp_17) {
        var_5 = var_16;
        do {
            func_001F9ED0(arg0, var_5);
            var_16 += 0x34;
            var_5 = var_16;
        } while (var_16 != temp_17);
    }
}
