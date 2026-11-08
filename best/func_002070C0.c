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

M2C_UNK func_00208590(u32, M2C_UNK);                /* extern */

void func_002070C0(void *arg0) {
    s32 temp_19;
    u32 temp_17;
    u32 var_16;
    u32 var_4;
    void *temp_18;

    temp_18 = arg0 + 4;
    temp_17 = M2C_FIELD(temp_18, u32 *, 4);
    var_16 = M2C_FIELD(arg0, u32 *, 4);
    temp_19 = temp_17 - var_16;
    if (var_16 < temp_17) {
        var_4 = var_16;
        do {
            func_00208590(var_4, 2);
            var_16 += 0x18;
            var_4 = var_16;
        } while (var_16 < temp_17);
    }
    M2C_FIELD(temp_18, u32 *, 4) = (u32) (M2C_FIELD(temp_18, u32 *, 4) - temp_19);
}
