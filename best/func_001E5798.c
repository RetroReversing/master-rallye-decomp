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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001E5C58(void *, M2C_UNK);             /* extern */

void func_001E5798(void *arg0, void *arg1) {
    s32 var_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    if (M2C_FIELD(arg0, s32 *, 8) != 6) {
        func_001E5C58(arg0, 6);
        temp_2 = D_002AD408(0xC);
        M2C_FIELD(arg0, void **, 4) = temp_2;
        M2C_FIELD(temp_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    } else {
        temp_2_2 = M2C_FIELD(arg0, void **, 4);
        var_3 = 0;
        if ((M2C_FIELD(temp_2_2, f32 *, 0) == M2C_FIELD(arg1, f32 *, 0)) && (M2C_FIELD(temp_2_2, f32 *, 4) == M2C_FIELD(arg1, f32 *, 4)) && (M2C_FIELD(temp_2_2, f32 *, 8) == M2C_FIELD(arg1, f32 *, 8))) {
            var_3 = 1;
        }
        if (var_3 == 0) {
            temp_3 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
            M2C_FIELD(temp_3, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        }
    }
}
