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

void *func_002B1FC0(M2C_UNK, void *);               /* extern */
extern void *D_004404DC;

s32 func_003F7320(s32 arg0) {
    s32 var_3;
    s32 var_4;
    void *var_5;

    var_5 = M2C_FIELD(D_004404DC, void **, 0x148);
    if (var_5 == NULL) {
        var_5 = D_004404DC + 0x14C;
        M2C_FIELD(D_004404DC, void **, 0x148) = var_5;
    }
    var_4 = M2C_FIELD(var_5, s32 *, 4);
    var_3 = var_4 * 4;
    if (var_4 >= 0x20) {
        var_5 = func_002B1FC0(0x88, var_5);
        if (var_5 == NULL) {
            return -1;
        }
        var_4 = 0;
        M2C_FIELD(var_5, s32 *, 4) = 0;
        M2C_FIELD(var_5, void **, 0) = (void *) M2C_FIELD(D_004404DC, void **, 0x148);
        M2C_FIELD(D_004404DC, void **, 0x148) = var_5;
        var_3 = 0 * 4;
        goto block_6;
    }
block_6:
    M2C_FIELD((var_5 + var_3), s32 *, 8) = arg0;
    M2C_FIELD(var_5, s32 *, 4) = (s32) (var_4 + 1);
    return 0;
}
