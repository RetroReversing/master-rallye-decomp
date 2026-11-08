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

s32 func_0024C7B0(void *);                          /* extern */
M2C_UNK func_002504B8(s32, s32, s32, void *);       /* extern */
M2C_UNK func_00250608(s32, s32, s32, s32);          /* extern */

void func_002569D0(void **arg1, void **arg2) {
    s32 temp_17;
    s32 var_19;
    void *temp_2;
    void *temp_6;
    void *var_16;
    void *var_18;
    void *var_20;

    temp_6 = *arg1;
    temp_2 = *arg2;
    var_18 = M2C_FIELD(temp_2, void **, 0);
    var_19 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), s32 *, 8);
    var_16 = M2C_FIELD(M2C_FIELD(temp_6, void **, 4), void **, 8);
    var_20 = M2C_FIELD(temp_6, void **, 0);
    if (var_18 != temp_2) {
        do {
            temp_17 = M2C_FIELD(var_18, s32 *, 8);
            if (func_0024C7B0(var_16) == 0) {
                func_002504B8(var_19, M2C_FIELD(var_16, s32 *, 0x20), M2C_FIELD(var_16, s32 *, 0x24), var_16);
                func_002504B8(temp_17, M2C_FIELD(var_16, s32 *, 0x20), M2C_FIELD(var_16, s32 *, 0x24), var_16);
                func_00250608(var_19, M2C_FIELD(var_16, s32 *, 0), M2C_FIELD(var_16, s32 *, 4), M2C_FIELD(var_16, s32 *, 0x28));
                func_00250608(temp_17, M2C_FIELD(var_16, s32 *, 0), M2C_FIELD(var_16, s32 *, 4), M2C_FIELD(var_16, s32 *, 0x28));
            }
            var_16 = M2C_FIELD(var_20, void **, 8);
            var_19 = temp_17;
            var_18 = M2C_FIELD(var_18, void **, 0);
            var_20 = M2C_FIELD(var_20, void **, 0);
        } while (var_18 != *arg2);
    }
}
