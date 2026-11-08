/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */

void func_00406158(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    void *temp_2;
    void *temp_2_2;
    void *var_3;
    void *var_4;

    func_0040AF58();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    temp_2 = M2C_FIELD(arg6, void **, 8);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = arg5;
    M2C_FIELD(arg0, void **, 0x40) = arg6;
    if (temp_2 == NULL) {
        M2C_FIELD(arg6, void **, 8) = arg0;
    } else {
        var_4 = temp_2;
        var_3 = M2C_FIELD(var_4, void **, 0x38);
        if (var_3 != NULL) {
            do {
                var_4 = var_3;
                temp_2_2 = M2C_FIELD(var_4, void **, 0x38);
                var_3 = temp_2_2;
            } while (temp_2_2 != NULL);
        }
        M2C_FIELD(var_4, void **, 0x38) = arg0;
    }
    func_0040AFA0();
}
