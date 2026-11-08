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

M2C_UNK func_002514A0();                            /* extern */
extern f32 D_004264A0;

void func_00251618(void *arg0, void *arg1) {
    f32 temp_f1;
    s32 var_5;
    void *temp_2;

    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_002514A0();
        temp_2 = arg0 + 8;
        temp_f1 = (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(temp_2, f32 *, 0xC);
        var_5 = 0;
        if (D_004264A0 <= temp_f1) {
            var_5 = 1;
        } else if (temp_f1 <= -D_004264A0) {
            var_5 = -1;
        }
        if (var_5 == 1) {
            M2C_FIELD(arg0, f32 *, 8) = (f32) -M2C_FIELD(arg0, f32 *, 8);
            M2C_FIELD(temp_2, f32 *, 4) = (f32) -M2C_FIELD(temp_2, f32 *, 4);
            M2C_FIELD(temp_2, f32 *, 8) = (f32) -M2C_FIELD(temp_2, f32 *, 8);
            M2C_FIELD(temp_2, f32 *, 0xC) = (f32) -M2C_FIELD(temp_2, f32 *, 0xC);
        }
    }
}
