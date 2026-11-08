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

f32 func_0034D8B8(void *, void *, void *, f32, f32); /* extern */

s32 func_0034D780(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    f32 temp_f0;
    f32 var_f20;
    void *var_16;

    if (arg1 != 0) {
        if (arg3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            M2C_FIELD(arg0, s32 *, 4) = arg2;
            M2C_FIELD(arg0, s32 *, 8) = arg4;
            var_f20 = 0.0f;
            var_16 = M2C_FIELD(arg3, void **, 0);
            if (var_16 != M2C_FIELD(arg3, s32 *, 4)) {
                do {
                    temp_f0 = func_0034D8B8(arg0, var_16, var_16 + 0xC, (M2C_FIELD(var_16, f32 *, 0x18) * 0.03125f) + 0.365f, M2C_FIELD(var_16, f32 *, 0x1C));
                    if (var_f20 < temp_f0) {
                        var_f20 = temp_f0;
                    }
                    var_16 += 0x24;
                } while (var_16 != M2C_FIELD(arg3, s32 *, 4));
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
