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

M2C_UNK func_0024C548(s32, s32);                    /* extern */

void func_00253538(M2C_UNK ***arg1) {
    M2C_UNK **temp_2;
    M2C_UNK *var_19;
    s32 temp_17;
    s32 temp_18;
    void *var_16;

    temp_2 = *arg1;
    var_19 = *temp_2;
    if (var_19 != temp_2) {
        var_16 = M2C_FIELD(var_19, void **, 8);
loop_2:
        temp_17 = M2C_FIELD(var_16, s32 *, 0x20);
        temp_18 = M2C_FIELD(var_16, s32 *, 0x24);
        func_0024C548(temp_17, M2C_FIELD(M2C_FIELD(var_16, void **, 0x18), s32 *, 0x30));
        func_0024C548(temp_17, M2C_FIELD(M2C_FIELD(var_16, void **, 0x1C), s32 *, 0x30));
        func_0024C548(temp_18, M2C_FIELD(M2C_FIELD(var_16, void **, 0x18), s32 *, 0x34));
        func_0024C548(temp_18, M2C_FIELD(M2C_FIELD(var_16, void **, 0x1C), s32 *, 0x34));
        var_19 = *var_19;
        if (var_19 != *arg1) {
            var_16 = M2C_FIELD(var_19, void **, 8);
            goto loop_2;
        }
    }
}
