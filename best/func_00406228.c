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

void *func_00406228(void *arg0, void *arg1) {
    void *temp_2;
    void *var_16;
    void *var_3;

    func_0040AF58();
    var_16 = M2C_FIELD(arg1, void **, 8);
    if (var_16 == arg0) {
        M2C_FIELD(arg1, void **, 8) = (void *) M2C_FIELD(var_16, void **, 0x38);
    } else if (var_16 != NULL) {
        var_3 = M2C_FIELD(var_16, void **, 0x38);
        if (var_3 != arg0) {
loop_5:
            var_16 = var_3;
            if (var_16 != NULL) {
                temp_2 = M2C_FIELD(var_16, void **, 0x38);
                var_3 = temp_2;
                if (temp_2 == arg0) {
                    goto block_7;
                }
                goto loop_5;
            }
        } else {
block_7:
            M2C_FIELD(var_16, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
        }
    }
    func_0040AFA0();
    return var_16;
}
