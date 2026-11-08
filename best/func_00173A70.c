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

M2C_UNK func_00173848(void *);                      /* extern */
M2C_UNK func_00173CC8(void *, f32);                 /* extern */
M2C_UNK func_00173D98(void *, f32);                 /* extern */
M2C_UNK func_00173DF0(void *, f32);                 /* extern */
M2C_UNK func_00174048(void *);                      /* extern */
M2C_UNK func_00174178(void *, f32);                 /* extern */
M2C_UNK func_001743C8(void *);                      /* extern */
M2C_UNK func_00174450(void *);                      /* extern */
M2C_UNK func_001744F8(void *);                      /* extern */
extern f32 D_00479C98;

s32 func_00173A70(void *arg0, s32 arg1) {
    f32 temp_f20;
    s32 var_17;
    s32 var_2;
    void *temp_2;

    var_17 = 0;
    if (arg1 > 0) {
        temp_f20 = D_00479C98 / (f32) arg1;
loop_2:
        func_00173848(arg0);
        func_00173CC8(arg0, temp_f20);
        func_00173D98(arg0, temp_f20);
        if ((arg1 != 1) || (temp_2 = M2C_FIELD(arg0, void **, 0x2C), var_2 = 1, (((s32) (M2C_FIELD(temp_2, s32 *, 8) - M2C_FIELD(temp_2, s32 *, 4)) >> 2) <= 0))) {
            func_00173DF0(arg0, temp_f20);
            var_17 += 1;
            func_001743C8(arg0);
            func_00174048(arg0);
            func_00174178(arg0, temp_f20);
            func_00174450(arg0);
            if (var_17 >= arg1) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        func_001744F8(arg0);
        var_2 = 0;
    }
    return var_2;
}
