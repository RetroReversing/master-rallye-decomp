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

M2C_UNK func_003F7820(void *);                      /* extern */
extern void *D_004404DC;

s16 func_003F7600(void *arg0) {
    s32 var_2;
    void *var_3;

    var_3 = M2C_FIELD(arg0, void **, 0x54);
    if (var_3 != NULL) {
        var_2 = M2C_FIELD(var_3, s32 *, 0x38);
    } else {
        var_3 = D_004404DC;
        M2C_FIELD(arg0, void **, 0x54) = var_3;
        var_2 = M2C_FIELD(var_3, s32 *, 0x38);
    }
    if (var_2 == 0) {
        func_003F7820(var_3);
    }
    return M2C_FIELD(arg0, s16 *, 0xE);
}
