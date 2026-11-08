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

f32 func_00205988(s32, s32, s32);                   /* extern */

void func_00251408(void *arg0) {
    f32 temp_f0;
    void *temp_16;
    void *temp_18;
    void *temp_2;
    void *temp_4;
    void *var_17;
    void *var_2;

    M2C_FIELD(arg0, f32 *, 0x28) = 0.0f;
    temp_2 = M2C_FIELD(arg0, void **, 0);
    temp_4 = M2C_FIELD(temp_2, void **, 0);
    temp_18 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), void **, 8);
    var_2 = M2C_FIELD(temp_4, void **, 8);
    var_17 = M2C_FIELD(temp_4, void **, 0);
    if (temp_18 != NULL) {
        do {
            temp_16 = M2C_FIELD(var_17, void **, 8);
            temp_f0 = func_00205988(M2C_FIELD(temp_18, s32 *, 0xC), M2C_FIELD(var_2, s32 *, 0xC), M2C_FIELD(temp_16, s32 *, 0xC));
            var_2 = temp_16;
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + temp_f0);
            var_17 = M2C_FIELD(var_17, void **, 0);
        } while (temp_16 != temp_18);
    }
}
